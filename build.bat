cd D:\pthang\proj\music_player\ui
if exist D:\pthang\proj\music_player\ui\build del mainwindow.h
mkdir build
cd build
slint-compiler D:\pthang\proj\music_player\ui\main.slint -o D:\pthang\proj\music_player\ui\build\mainwindow.h