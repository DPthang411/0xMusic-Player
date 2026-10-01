#include <algorithm> 
#include <cctype>
#include <string>
#include <filesystem>
#include <mainwindow.h>
#include <slint.h>
#include <mutex>
#include <algorithm>
#define DISCORDPP_IMPLEMENTATION
#include <fstream>
#include <discordpp.h>
#include <SFML/Audio.hpp>
#include <atomic>
#include <random>
#include <csignal>
#include <memory>
#include <vector>
#include <unordered_map>
#include <thread>
#include <objbase.h>

namespace fs = std::filesystem;

inline void ltrim(std::string &s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
        return !std::isspace(ch);
    }));
}

inline void rtrim(std::string &s) {
    s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
        return !std::isspace(ch);
    }).base(), s.end());
}
inline void trim(std::string &s){
    ltrim(s);
    rtrim(s);
}

std::pair<std::string,std::string> getAuthorAndName(fs::directory_entry entry){
    std::string str = entry.path().stem().string();
    bool met_dash = false;
    std::string author = "";
    std::string name = "";
    std::pair<std::string, std::string> ret_val = {};
    for (const auto& sstr: str){
        if (sstr == '-'){
            met_dash = true;
            continue;
        }
        if (met_dash) name += sstr;
        else author += sstr;
    }
    trim(author);
    trim(name);
    ret_val.first = author;
    ret_val.second = name;
    return ret_val;
}

struct CMusicInfo{
    std::string name;
    std::string author; 
    std::string path;
    std::string image_path;
    float len;
};

std::vector<CMusicInfo> generateMusicInfoList(std::string path){
    std::vector<CMusicInfo> ret_val = {};
    for (const auto& entry: fs::directory_iterator(path)){
        if (entry.path().extension() == ".mp3"){
            CMusicInfo info;
            sf::Music song(entry.path().c_str());
            info.name = getAuthorAndName(entry).second;
            info.author = getAuthorAndName(entry).first;
            info.path = entry.path().string();
            info.len = song.getDuration().asSeconds();
            info.image_path = path + entry.path().stem().string() + ".jpg";
            ret_val.push_back(info);
        }
    }
    return ret_val;
}
slint::Timer polling;
void loadMusic(std::unordered_map<std::string, std::unique_ptr<sf::Music>>& map, std::string path, std::string name){
    auto music = std::make_unique<sf::Music>();
    music->openFromFile(path);
    map[name] = std::move(music);
}
std::atomic<bool> running = true;
void signalHandler(int signum){
    running.store(false);
};
bool isIn(std::vector<CMusicInfo> vec, std::string name){
    auto it = std::find_if( vec.begin(), vec.end(),
        [&vec, &name](const CMusicInfo& el){
            return el.name == name;
        }
    );
    if (it != vec.end()) return true;
    else return false;
}
const uint64_t APPLICATION_ID = 1553590644587364412;

int main(){
    HRESULT hr = CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);
    auto app = MainWindow::create();
    auto songListModel = std::make_shared<slint::VectorModel<MusicInfo>>();
    std::ifstream f("0xMusic_config.txt");
    if (!f.is_open()){
        std::ofstream log("log.txt");
        log << "Please create 0xMusic_config.txt";
        return -1;
    }
    std::string file_path;
    std::getline(f, file_path);
    std::string root_path = file_path;
    std::vector<CMusicInfo> songList =  {};
    std::mutex songListMtx;
    std::unordered_map<std::string, std::unique_ptr<sf::Music>> musicMap = {};
    std::thread([&](){
        auto tmp_songList = generateMusicInfoList(file_path);
        {
            std::lock_guard lock(songListMtx);
            songList = tmp_songList; 
        }

        for (const auto& song : songList){
            MusicInfo info;
            info.name = slint::SharedString(song.name);
            info.image = slint::Image::load_from_path(slint::SharedString(song.image_path));
            info.len = song.len;
            slint::invoke_from_event_loop([songListModel, info](){
                songListModel->push_back(info);
            });
        }
    }).detach();
    bool song_changed = false;
    bool state_changed = false;
    std::string lastSong;
    //discord app id: 1553590644587364412
    std::thread([&,app](){
        std::signal(SIGINT, signalHandler);
        // Create our Discord Client
        auto client = std::make_shared<discordpp::Client>();
        client->SetApplicationId(APPLICATION_ID);
        discordpp::Activity activity;
        activity.SetName("0xMusic Player");
        activity.SetType(discordpp::ActivityTypes::Listening);
        discordpp::Activity emptyActivity;
        emptyActivity.SetName("0xMusic Player");
        emptyActivity.SetType(discordpp::ActivityTypes::Listening);
        discordpp::ActivityTimestamps timeWhenOpened;
        
        while (running) {
            discordpp::RunCallbacks();
            timeWhenOpened.SetStart(time(nullptr));
            emptyActivity.SetTimestamps(timeWhenOpened);
            MusicInfo current_song = slint::blocking_invoke_from_event_loop([weak_app = slint::ComponentWeakHandle(app)](){
                auto app = *weak_app.lock();
                return app->get_current_song();
            });
            if (isIn(songList,std::string(current_song.name))){
                activity.SetDetails(std::string(current_song.name));
                discordpp::ActivityTimestamps timestamps;
                auto curr_sec = slint::blocking_invoke_from_event_loop([weak_app = slint::ComponentWeakHandle(app)](){
                    auto app = *weak_app.lock();
                    return app->get_curr_second();
                });
                int64_t track_start_time =
                    static_cast<int64_t>(time(nullptr)) -
                    static_cast<int64_t>(curr_sec);

                int64_t track_end_time =
                    track_start_time +
                    static_cast<int64_t>(current_song.len);
                timestamps.SetStart(track_start_time);
                timestamps.SetEnd(track_end_time);
                activity.SetTimestamps(timestamps);
                if (state_changed || song_changed){
                    if (musicMap[std::string(current_song.name)]->getStatus() == sf::SoundSource::Status::Playing){
                        client->UpdateRichPresence(activity, [](discordpp::ClientResult result){}); 
                    }
                    else{
                        client->ClearRichPresence();
                    }
                    state_changed = false;
                    song_changed = false;
                }
            }
            
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        }
    }).detach();
    std::string current_song_str_ref;
    polling.start(slint::TimerMode::Repeated,std::chrono::milliseconds(50), [&,weak_app = slint::ComponentWeakHandle(app)](){
        auto app = *weak_app.lock();
        current_song_str_ref = std::string(app->get_current_song().name);
        auto current_song = app->get_current_song();
        if (musicMap.contains(current_song_str_ref)){
            app->set_curr_second(musicMap[current_song_str_ref]->getPlayingOffset().asSeconds());
        }
        if (musicMap.contains(lastSong) && lastSong != current_song_str_ref && musicMap[lastSong]->getStatus() != sf::SoundSource::Status::Stopped){
            musicMap[lastSong]->stop();
        }
        
        if (app->get_shuffle_mode() && songList.size() > 0){
            if ((musicMap.contains(current_song_str_ref) == false || musicMap[current_song_str_ref]->getStatus() == sf::SoundSource::Status::Stopped)){
                app->set_pause(false);
                std::random_device rd;
                std::mt19937 gen(rd());
                std::uniform_int_distribution<std::size_t> dist(0, songList.size() - 1);
                std::size_t random_index = dist(gen);
                auto random_item = songList[random_index];
                if (musicMap.contains(random_item.name) == false){
                    auto it = std::find_if(songList.begin(), songList.end(), [&current_song, &random_item](const CMusicInfo& el){
                        return el.name == random_item.name;
                    });
                    if (it != songList.end()){
                        loadMusic(musicMap, it->path, random_item.name);
                        musicMap[random_item.name]->setLooping(false);
                    }
                }
                MusicInfo info;
                info.name = random_item.name;
                info.len = musicMap[random_item.name]->getDuration().asSeconds();
                info.image = slint::Image::load_from_path(slint::SharedString(random_item.image_path));
                app->set_current_song(info);
                lastSong = current_song_str_ref;
                current_song_str_ref = std::string(info.name);
                song_changed = true;
            }
        } 
        if (musicMap.contains(std::string(app->get_current_song().name)) && !app->get_pause()){
            musicMap[std::string(app->get_current_song().name)]->setVolume(app->get_current_volume());
            if (musicMap[std::string(app->get_current_song().name)]->getStatus() != sf::SoundSource::Status::Playing){
                musicMap[std::string(app->get_current_song().name)]->play();
                state_changed = true;
            }
        }
        if (app->get_pause() && musicMap.contains(std::string(app->get_current_song().name)) && musicMap[std::string(app->get_current_song().name)]->getStatus() != sf::SoundSource::Status::Paused){
            musicMap[std::string(app->get_current_song().name)]->pause();
            state_changed = true;
        }
        
    });
    app->on_entry_clicked(
        [weak_app = slint::ComponentWeakHandle(app), &musicMap, &songList, &current_song_str_ref, &lastSong](){
            auto app = *weak_app.lock();
            app->set_curr_second(0);
            auto current_song = app->get_current_song();
            if (musicMap.contains(std::string(current_song.name)) == false){
                auto it = std::find_if(songList.begin(), songList.end(), [&current_song](const CMusicInfo& el){
                    return el.name == std::string(current_song.name);
                });
                if (it != songList.end()){
                    loadMusic(musicMap, it->path, std::string(current_song.name));
                    musicMap[std::string(current_song.name)]->setLooping(false);
                }
            }
            current_song.len = musicMap[std::string(current_song.name)]->getDuration().asSeconds();
            app->set_current_song(current_song);
            lastSong = current_song_str_ref;
            current_song_str_ref = std::string(current_song.name);
        }
    );
    app->on_skip([&, weak_app = slint::ComponentWeakHandle(app)](){
        auto app = *weak_app.lock();
        if (app->get_shuffle_mode()){
            musicMap[std::string(current_song_str_ref)]->stop();
        }
    });
    app->on_slider_drag(
        [&,weak_app = slint::ComponentWeakHandle(app)](){
            auto app = *weak_app.lock();
            musicMap[std::string(app->get_current_song().name)]->setPlayingOffset(sf::seconds(app->get_curr_second()));
        }
    );
    app->set_song_list(songListModel);
    app->run();
    return 0;
}