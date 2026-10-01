// This file is auto-generated
#pragma once
#include <array>
#include <limits>
#include <slint.h>
#include <cstdlib>
static_assert(1 == SLINT_VERSION_MAJOR && 17 == SLINT_VERSION_MINOR && 1 == SLINT_VERSION_PATCH, "This file was generated with Slint compiler version 1.17.1, but the Slint library used is " SLINT_VERSION_STRING ". The version numbers must match exactly.");
class MusicInfo {
    public:
    slint::Image image;
    slint::SharedString name;
    float len;
    int curr;
    friend auto operator== (const class MusicInfo &a, const class MusicInfo &b) -> bool = default;
};

class MainWindow;

class SharedGlobals;

class ShuffleButton_root_1;

class SliderBase_root_5;

class Slider_root_8;

class ShuffleButton_root_1 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<slint::SharedVector<float>> field_root_1_empty_2_layout_cache;
    slint::private_api::Property<slint::SharedVector<float>> field_root_1_empty_2_layout_cache_ortho;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_1_empty_2_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_1_empty_2_layoutinfo_v;
    slint::private_api::Property<float> field_root_1_x;
    slint::private_api::Property<float> field_root_1_y;
    slint::private_api::Callback<void()> field_root_1_shuffle_clicked;
    slint::cbindgen_private::Rectangle field_root_1 = {};
    slint::cbindgen_private::SimpleText field_text_3 = {};
    slint::cbindgen_private::TouchArea field_touch_4 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
};

class SliderBase_root_5 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<bool> field_root_5_handle_has_hover;
    slint::private_api::Property<float> field_root_5_handle_height;
    slint::private_api::Property<bool> field_root_5_handle_pressed;
    slint::private_api::Property<float> field_root_5_handle_width;
    slint::private_api::Property<float> field_root_5_handle_x;
    slint::private_api::Property<float> field_root_5_handle_y;
    slint::private_api::Property<float> field_root_5_height;
    slint::private_api::Property<float> field_root_5_maximum;
    slint::private_api::Property<float> field_root_5_minimum;
    slint::private_api::Property<slint::cbindgen_private::Orientation> field_root_5_orientation;
    slint::private_api::Property<float> field_root_5_ref_size;
    slint::private_api::Property<float> field_root_5_step;
    slint::private_api::Property<float> field_root_5_touch_area_6_pressed_value;
    slint::private_api::Property<float> field_root_5_value;
    slint::private_api::Property<float> field_root_5_width;
    slint::private_api::Callback<void(float)> field_root_5_changed;
    slint::private_api::Callback<void(float)> field_root_5_released;
    slint::cbindgen_private::Empty field_root_5 = {};
    slint::cbindgen_private::TouchArea field_touch_area_6 = {};
    slint::cbindgen_private::FocusScope field_focus_scope_7 = {};
    auto fn_clear_focus () const -> void;
    auto fn_decrement () const -> void;
    auto fn_focus () const -> void;
    auto fn_increment () const -> void;
    auto fn_set_value ([[maybe_unused]] float arg_0) const -> void;
    auto fn_size_to_value ([[maybe_unused]] float arg_0, [[maybe_unused]] float arg_1) const -> float;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
};

class Slider_root_8 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<float> field_root_8_accessible_value_step;
    slint::private_api::Property<float> field_root_8_height;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_8_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_8_layoutinfo_v;
    slint::private_api::Property<float> field_root_8_min_height;
    slint::private_api::Property<float> field_root_8_rail_9_height;
    slint::private_api::Property<float> field_root_8_rail_9_width;
    slint::private_api::Property<float> field_root_8_rail_9_x;
    slint::private_api::Property<float> field_root_8_rail_9_y;
    slint::private_api::Property<int> field_root_8_state;
    slint::private_api::Property<float> field_root_8_thumb_11_x;
    slint::private_api::Property<float> field_root_8_thumb_11_y;
    slint::private_api::Property<float> field_root_8_thumb_inner_13_width;
    slint::private_api::Property<float> field_root_8_track_10_height;
    slint::private_api::Property<float> field_root_8_track_10_width;
    slint::private_api::Property<float> field_root_8_track_10_x;
    slint::private_api::Property<float> field_root_8_track_10_y;
    slint::private_api::Property<float> field_root_8_vertical_stretch;
    slint::private_api::Property<float> field_root_8_width;
    slint::private_api::Property<float> field_root_8_x;
    slint::private_api::Property<float> field_root_8_y;
    slint::private_api::Callback<void()> field_root_8_accessible_action_decrement;
    slint::private_api::Callback<void()> field_root_8_accessible_action_increment;
    slint::private_api::Callback<void(slint::SharedString)> field_root_8_accessible_action_set_value;
    SliderBase_root_5 field_base_14;
    slint::cbindgen_private::Empty field_root_8 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rail_9 = {};
    slint::cbindgen_private::BasicBorderRectangle field_track_10 = {};
    slint::cbindgen_private::BasicBorderRectangle field_thumb_11 = {};
    slint::cbindgen_private::BasicBorderRectangle field_thumb_border_12 = {};
    slint::cbindgen_private::BasicBorderRectangle field_thumb_inner_13 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
};

class FluentPalette_74 {
    public:
    slint::private_api::Property<slint::Brush> field_accent_background;
    slint::private_api::Property<bool> field_dark_color_scheme;
    FluentPalette_74 (const class SharedGlobals *globals);
    private:
    auto init () -> void;
    const class SharedGlobals* globals;
    public:
    auto fn_accentify ([[maybe_unused]] slint::Color arg_0) const -> slint::Color;
    friend class SharedGlobals;
};

class SharedGlobals {
    public:
    std::optional<slint::Window> m_window;
    slint::cbindgen_private::ItemTreeWeak root_weak;
    auto window () const -> slint::Window&{
        auto self = const_cast<SharedGlobals *>(this);
        if (!self->m_window.has_value()) {
           auto &window = self->m_window.emplace(slint::private_api::WindowAdapterRc());
           window.window_handle().set_component(self->root_weak);
        }
        return *self->m_window;
    }
    std::shared_ptr<FluentPalette_74> global_FluentPalette_74 = std::make_shared<FluentPalette_74>(this);
    SharedGlobals (){
    }
    auto init_globals () -> void{
        global_FluentPalette_74->init();
    }
    private:
    SharedGlobals (const SharedGlobals& source, const slint::private_api::WindowAdapterRc& adapter) : root_weak(source.root_weak), global_FluentPalette_74(source.global_FluentPalette_74){
        m_window.emplace(adapter);
    }
    public:
    auto clone_with_window_adapter (const slint::private_api::WindowAdapterRc& adapter) const -> SharedGlobals*{
        return new SharedGlobals(*this, adapter);
    }
};

class Component__Transform_22 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MainWindow const> parent;
    slint::private_api::Property<MusicInfo> field_model_data;
    slint::private_api::Property<int> field_model_index;
    slint::private_api::Property<slint::SharedVector<float>> field__Transform_22_empty_24_layout_cache;
    slint::private_api::Property<slint::SharedVector<float>> field__Transform_22_empty_24_layout_cache_ortho;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field__Transform_22_empty_24_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field__Transform_22_empty_24_layoutinfo_v;
    slint::private_api::Property<slint::SharedString> field__Transform_22_rectangle_23_song_name;
    slint::private_api::Property<float> field__Transform_22_rectangle_23_transform_scale;
    slint::private_api::Property<float> field__Transform_22_rectangle_23_width;
    slint::private_api::Property<float> field__Transform_22_rectangle_23_x;
    slint::private_api::Property<float> field__Transform_22_rectangle_23_y;
    slint::private_api::Callback<void()> field__Transform_22_rectangle_23_entry_clicked;
    slint::cbindgen_private::Transform field__Transform_22 = {};
    slint::cbindgen_private::Rectangle field_rectangle_23 = {};
    slint::cbindgen_private::ComplexText field_text_25 = {};
    slint::cbindgen_private::TouchArea field_touch_26 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MainWindow const * parent) -> slint::ComponentHandle<Component__Transform_22>;
    ~Component__Transform_22 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const MusicInfo &data) const -> void;
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component__Transform_22>;
};

class MainWindow {
    SharedGlobals m_globals;
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    private:
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<float> field_root_15__Transform_65_transform_scale;
    slint::private_api::Property<float> field_root_15__Transform_69_transform_scale;
    slint::private_api::Property<MusicInfo> field_root_15_current_song;
    slint::private_api::Property<int> field_root_15_current_volume;
    slint::private_api::Property<int> field_root_15_down_scroll_button_38_state;
    slint::private_api::Property<int> field_root_15_down_scroll_button_51_state;
    slint::private_api::Property<slint::SharedVector<float>> field_root_15_empty_16_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_15_empty_16_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_15_empty_16_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> field_root_15_empty_57_layout_cache;
    slint::private_api::Property<slint::SharedVector<float>> field_root_15_empty_57_layout_cache_ortho;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_15_empty_57_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_15_empty_57_layoutinfo_v;
    slint::private_api::Property<float> field_root_15_empty_57_padding_bottom;
    slint::private_api::Property<float> field_root_15_empty_57_padding_top;
    slint::private_api::Property<float> field_root_15_empty_57_spacing;
    slint::private_api::Property<slint::SharedVector<float>> field_root_15_empty_62_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_15_empty_62_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_15_empty_62_layoutinfo_v;
    slint::private_api::Property<float> field_root_15_empty_62_width;
    slint::private_api::Property<float> field_root_15_empty_64_height;
    slint::private_api::Property<slint::SharedVector<float>> field_root_15_empty_64_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_15_empty_64_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_15_empty_64_layoutinfo_v;
    slint::private_api::Property<float> field_root_15_flickable_18_height;
    slint::private_api::Property<float> field_root_15_flickable_18_horizontal_stretch;
    slint::private_api::Property<float> field_root_15_flickable_18_max_height;
    slint::private_api::Property<float> field_root_15_flickable_18_max_width;
    slint::private_api::Property<float> field_root_15_flickable_18_min_height;
    slint::private_api::Property<float> field_root_15_flickable_18_min_width;
    slint::private_api::Property<float> field_root_15_flickable_18_preferred_height;
    slint::private_api::Property<float> field_root_15_flickable_18_preferred_width;
    slint::private_api::Property<float> field_root_15_flickable_18_vertical_stretch;
    slint::private_api::Property<float> field_root_15_flickable_18_width;
    slint::private_api::Property<float> field_root_15_horizontal_bar_42_maximum;
    slint::private_api::Property<slint::cbindgen_private::ScrollBarPolicy> field_root_15_horizontal_bar_42_policy;
    slint::private_api::Property<float> field_root_15_horizontal_bar_42_size;
    slint::private_api::Property<int> field_root_15_horizontal_bar_42_state;
    slint::private_api::Property<bool> field_root_15_horizontal_bar_42_visible;
    slint::private_api::Property<float> field_root_15_horizontal_bar_42_width;
    slint::private_api::Property<float> field_root_15_image_60_max_height;
    slint::private_api::Property<float> field_root_15_image_60_min_height;
    slint::private_api::Property<float> field_root_15_image_67_preferred_height;
    slint::private_api::Property<float> field_root_15_image_67_preferred_width;
    slint::private_api::Property<float> field_root_15_image_71_preferred_height;
    slint::private_api::Property<float> field_root_15_image_71_preferred_width;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_15_layoutinfo_h;
    slint::private_api::Property<float> field_root_15_mainView_54_width;
    slint::private_api::Property<slint::cbindgen_private::LayoutAlignment> field_root_15_mainViewContainer_55_alignment;
    slint::private_api::Property<slint::SharedVector<float>> field_root_15_mainViewContainer_55_layout_cache;
    slint::private_api::Property<slint::SharedVector<float>> field_root_15_mainViewContainer_55_layout_cache_ortho;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_15_mainViewContainer_55_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_15_mainViewContainer_55_layoutinfo_v;
    slint::private_api::Property<float> field_root_15_mainViewContainer_55_padding_bottom;
    slint::private_api::Property<float> field_root_15_mainViewContainer_55_padding_top;
    slint::private_api::Property<float> field_root_15_mainViewContainer_55_spacing;
    slint::private_api::Property<bool> field_root_15_pause;
    slint::private_api::Property<float> field_root_15_rectangle_56_max_height;
    slint::private_api::Property<float> field_root_15_rectangle_56_min_height;
    slint::private_api::Property<slint::SharedString> field_root_15_rectangle_56_song_name;
    slint::private_api::Property<int> field_root_15_rectangle_56_volume;
    slint::private_api::Property<float> field_root_15_rectangle_56_width;
    slint::private_api::Property<float> field_root_15_rectangle_61_max_height;
    slint::private_api::Property<float> field_root_15_rectangle_61_min_height;
    slint::private_api::Property<float> field_root_15_rectangle_61_slider_val;
    slint::private_api::Property<bool> field_root_15_shuffle_mode;
    slint::private_api::Property<slint::SharedVector<float>> field_root_15_sidePanelContainer_20_layout_cache;
    slint::private_api::Property<slint::SharedVector<float>> field_root_15_sidePanelContainer_20_layout_cache_ortho;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_15_sidePanelContainer_20_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_15_sidePanelContainer_20_layoutinfo_v;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_15_sidePanelScoller_17_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_15_sidePanelScoller_17_layoutinfo_v;
    slint::private_api::Property<float> field_root_15_sidePanelScoller_17_min_height;
    slint::private_api::Property<slint::cbindgen_private::ScrollBarPolicy> field_root_15_sidePanelScoller_17_vertical_scrollbar_policy;
    slint::private_api::Property<float> field_root_15_sidePanelScoller_17_vertical_stretch;
    slint::private_api::Property<std::shared_ptr<slint::Model<MusicInfo>>> field_root_15_song_list;
    slint::private_api::Property<float> field_root_15_text_59_max_height;
    slint::private_api::Property<float> field_root_15_text_59_min_height;
    slint::private_api::Property<float> field_root_15_thumb_31_height;
    slint::private_api::Property<float> field_root_15_thumb_31_width;
    slint::private_api::Property<float> field_root_15_thumb_31_y;
    slint::private_api::Property<float> field_root_15_thumb_44_height;
    slint::private_api::Property<float> field_root_15_thumb_44_width;
    slint::private_api::Property<float> field_root_15_thumb_44_x;
    slint::private_api::Property<std::tuple<float, float, float, float>> field_root_15_touch_area_32_saved_values;
    slint::private_api::Property<std::tuple<float, float, float, float>> field_root_15_touch_area_45_saved_values;
    slint::private_api::Property<int> field_root_15_up_scroll_button_34_state;
    slint::private_api::Property<int> field_root_15_up_scroll_button_47_state;
    slint::private_api::Property<float> field_root_15_vertical_bar_29_maximum;
    slint::private_api::Property<float> field_root_15_vertical_bar_29_size;
    slint::private_api::Property<int> field_root_15_vertical_bar_29_state;
    slint::private_api::Property<bool> field_root_15_vertical_bar_29_visible;
    slint::private_api::Callback<void()> field_root_15_entry_clicked;
    slint::private_api::Property<uint8_t> callback_tracker_root_15_entry_clicked;
    slint::private_api::Callback<void()> field_root_15_horizontal_bar_42_scrolled;
    slint::private_api::Callback<void()> field_root_15_rectangle_56_volume_changed;
    slint::private_api::Callback<void()> field_root_15_rectangle_61_pause_clicked;
    slint::private_api::Callback<void()> field_root_15_rectangle_61_skip_clicked;
    slint::private_api::Callback<void()> field_root_15_rectangle_61_slider_released;
    slint::private_api::Callback<void()> field_root_15_rectangle_66_clicked;
    slint::private_api::Callback<void()> field_root_15_rectangle_70_clicked;
    slint::private_api::Callback<void()> field_root_15_skip;
    slint::private_api::Property<uint8_t> callback_tracker_root_15_skip;
    slint::private_api::Callback<void()> field_root_15_slider_drag;
    slint::private_api::Property<uint8_t> callback_tracker_root_15_slider_drag;
    slint::private_api::Callback<void()> field_root_15_vertical_bar_29_scrolled;
    ShuffleButton_root_1 field_shufflebutton_21;
    Slider_root_8 field_slider_58;
    Slider_root_8 field_slider_63;
    slint::cbindgen_private::WindowItem field_root_15 = {};
    slint::cbindgen_private::Empty field_sidePanelScoller_17 = {};
    slint::cbindgen_private::Flickable field_flickable_18 = {};
    slint::cbindgen_private::Empty field_flickable_viewport_19 = {};
    slint::cbindgen_private::Clip field_vertical_bar_visibility_28 = {};
    slint::cbindgen_private::BasicBorderRectangle field_vertical_bar_29 = {};
    slint::cbindgen_private::Clip field_vertical_bar_clip_30 = {};
    slint::cbindgen_private::BasicBorderRectangle field_thumb_31 = {};
    slint::cbindgen_private::TouchArea field_touch_area_32 = {};
    slint::cbindgen_private::Opacity field_up_scroll_button_Opacity_33 = {};
    slint::cbindgen_private::TouchArea field_up_scroll_button_34 = {};
    slint::cbindgen_private::Opacity field_icon_Opacity_35 = {};
    slint::cbindgen_private::ImageItem field_icon_36 = {};
    slint::cbindgen_private::Opacity field_down_scroll_button_Opacity_37 = {};
    slint::cbindgen_private::TouchArea field_down_scroll_button_38 = {};
    slint::cbindgen_private::Opacity field_icon_Opacity_39 = {};
    slint::cbindgen_private::ImageItem field_icon_40 = {};
    slint::cbindgen_private::Clip field_horizontal_bar_visibility_41 = {};
    slint::cbindgen_private::BasicBorderRectangle field_horizontal_bar_42 = {};
    slint::cbindgen_private::Clip field_horizontal_bar_clip_43 = {};
    slint::cbindgen_private::BasicBorderRectangle field_thumb_44 = {};
    slint::cbindgen_private::TouchArea field_touch_area_45 = {};
    slint::cbindgen_private::Opacity field_up_scroll_button_Opacity_46 = {};
    slint::cbindgen_private::TouchArea field_up_scroll_button_47 = {};
    slint::cbindgen_private::Opacity field_icon_Opacity_48 = {};
    slint::cbindgen_private::ImageItem field_icon_49 = {};
    slint::cbindgen_private::Opacity field_down_scroll_button_Opacity_50 = {};
    slint::cbindgen_private::TouchArea field_down_scroll_button_51 = {};
    slint::cbindgen_private::Opacity field_icon_Opacity_52 = {};
    slint::cbindgen_private::ImageItem field_icon_53 = {};
    slint::cbindgen_private::Rectangle field_mainView_54 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_56 = {};
    slint::cbindgen_private::SimpleText field_text_59 = {};
    slint::cbindgen_private::ImageItem field_image_60 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_61 = {};
    slint::cbindgen_private::Empty field_empty_64 = {};
    slint::cbindgen_private::Transform field__Transform_65 = {};
    slint::cbindgen_private::Empty field_rectangle_66 = {};
    slint::cbindgen_private::ImageItem field_image_67 = {};
    slint::cbindgen_private::TouchArea field_touch_68 = {};
    slint::cbindgen_private::Transform field__Transform_69 = {};
    slint::cbindgen_private::Empty field_rectangle_70 = {};
    slint::cbindgen_private::ImageItem field_image_71 = {};
    slint::cbindgen_private::TouchArea field_touch_72 = {};
    slint::private_api::Repeater<class Component__Transform_22, MusicInfo> repeater_0;
    public:
    auto fn_empty_16_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_empty_57_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_empty_62_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_empty_64_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_horizontal_bar_42_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_mainView_54_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_mainViewContainer_55_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_rectangle_56_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_rectangle_61_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_rectangle_66_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_rectangle_70_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_sidePanelScoller_17_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_touch_area_32_update_saved_values () const -> void;
    auto fn_touch_area_45_update_saved_values () const -> void;
    auto fn_vertical_bar_29_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    private:
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create () -> slint::ComponentHandle<MainWindow>;
    ~MainWindow ();
    auto get_curr_second () const -> float;
    auto set_curr_second (const float &value) const -> void;
    auto get_current_song () const -> MusicInfo;
    auto set_current_song (const MusicInfo &value) const -> void;
    auto get_current_volume () const -> int;
    auto set_current_volume (const int &value) const -> void;
    auto invoke_entry_clicked () const -> void;
    template<std::invocable<> Functor> auto on_entry_clicked (Functor && callback_handler) const;
    auto get_pause () const -> bool;
    auto set_pause (const bool &value) const -> void;
    auto get_shuffle_mode () const -> bool;
    auto set_shuffle_mode (const bool &value) const -> void;
    auto invoke_skip () const -> void;
    template<std::invocable<> Functor> auto on_skip (Functor && callback_handler) const;
    auto invoke_slider_drag () const -> void;
    template<std::invocable<> Functor> auto on_slider_drag (Functor && callback_handler) const;
    auto get_song_list () const -> std::shared_ptr<slint::Model<MusicInfo>>;
    auto set_song_list (const std::shared_ptr<slint::Model<MusicInfo>> &value) const -> void;
    auto show () -> void;
    auto hide () -> void;
    auto window () const -> slint::Window&;
    auto run () -> void;
    friend class FluentPalette_74;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, MainWindow>;
    friend class Component__Transform_22;
    friend class slint::private_api::WindowAdapterRc;
    friend class Component__Transform_22;
};

const uint8_t slint_embedded_resource_0[918] = { 0x3c
,0x73,0x76,0x67,0x20,0x77,0x69,0x64,0x74,0x68,0x3d,0x22,0x38,0x22,0x20,0x68,0x65
,0x69,0x67,0x68,0x74,0x3d,0x22,0x36,0x22,0x20,0x76,0x69,0x65,0x77,0x42,0x6f,0x78
,0x3d,0x22,0x30,0x20,0x30,0x20,0x38,0x20,0x36,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d
,0x22,0x6e,0x6f,0x6e,0x65,0x22,0x20,0x78,0x6d,0x6c,0x6e,0x73,0x3d,0x22,0x68,0x74
,0x74,0x70,0x3a,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x77,0x33,0x2e,0x6f,0x72,0x67,0x2f
,0x32,0x30,0x30,0x30,0x2f,0x73,0x76,0x67,0x22,0x3e,0xa,0x3c,0x70,0x61,0x74,0x68
,0x20,0x64,0x3d,0x22,0x4d,0x30,0x20,0x31,0x43,0x30,0x20,0x30,0x2e,0x38,0x36,0x34
,0x35,0x38,0x33,0x20,0x30,0x2e,0x30,0x32,0x36,0x30,0x34,0x31,0x37,0x20,0x30,0x2e
,0x37,0x33,0x35,0x36,0x37,0x37,0x20,0x30,0x2e,0x30,0x37,0x38,0x31,0x32,0x35,0x20
,0x30,0x2e,0x36,0x31,0x33,0x32,0x38,0x31,0x43,0x30,0x2e,0x31,0x33,0x30,0x32,0x30
,0x38,0x20,0x30,0x2e,0x34,0x39,0x30,0x38,0x38,0x35,0x20,0x30,0x2e,0x32,0x30,0x30
,0x35,0x32,0x31,0x20,0x30,0x2e,0x33,0x38,0x35,0x34,0x31,0x37,0x20,0x30,0x2e,0x32
,0x38,0x39,0x30,0x36,0x32,0x20,0x30,0x2e,0x32,0x39,0x36,0x38,0x37,0x35,0x43,0x30
,0x2e,0x33,0x38,0x30,0x32,0x30,0x38,0x20,0x30,0x2e,0x32,0x30,0x35,0x37,0x32,0x39
,0x20,0x30,0x2e,0x34,0x38,0x35,0x36,0x37,0x37,0x20,0x30,0x2e,0x31,0x33,0x34,0x31
,0x31,0x35,0x20,0x30,0x2e,0x36,0x30,0x35,0x34,0x36,0x39,0x20,0x30,0x2e,0x30,0x38
,0x32,0x30,0x33,0x31,0x32,0x43,0x30,0x2e,0x37,0x32,0x35,0x32,0x36,0x20,0x30,0x2e
,0x30,0x32,0x37,0x33,0x34,0x33,0x38,0x20,0x30,0x2e,0x38,0x35,0x34,0x31,0x36,0x37
,0x20,0x30,0x20,0x30,0x2e,0x39,0x39,0x32,0x31,0x38,0x38,0x20,0x30,0x48,0x37,0x2e
,0x30,0x31,0x31,0x37,0x32,0x43,0x37,0x2e,0x31,0x34,0x37,0x31,0x34,0x20,0x30,0x20
,0x37,0x2e,0x32,0x37,0x34,0x37,0x34,0x20,0x30,0x2e,0x30,0x32,0x36,0x30,0x34,0x31
,0x37,0x20,0x37,0x2e,0x33,0x39,0x34,0x35,0x33,0x20,0x30,0x2e,0x30,0x37,0x38,0x31
,0x32,0x35,0x43,0x37,0x2e,0x35,0x31,0x36,0x39,0x33,0x20,0x30,0x2e,0x31,0x33,0x30
,0x32,0x30,0x38,0x20,0x37,0x2e,0x36,0x32,0x32,0x34,0x20,0x30,0x2e,0x32,0x30,0x31
,0x38,0x32,0x33,0x20,0x37,0x2e,0x37,0x31,0x30,0x39,0x34,0x20,0x30,0x2e,0x32,0x39
,0x32,0x39,0x36,0x39,0x43,0x37,0x2e,0x37,0x39,0x39,0x34,0x38,0x20,0x30,0x2e,0x33
,0x38,0x34,0x31,0x31,0x35,0x20,0x37,0x2e,0x38,0x36,0x39,0x37,0x39,0x20,0x30,0x2e
,0x34,0x39,0x30,0x38,0x38,0x35,0x20,0x37,0x2e,0x39,0x32,0x31,0x38,0x38,0x20,0x30
,0x2e,0x36,0x31,0x33,0x32,0x38,0x31,0x43,0x37,0x2e,0x39,0x37,0x33,0x39,0x36,0x20
,0x30,0x2e,0x37,0x33,0x33,0x30,0x37,0x33,0x20,0x38,0x20,0x30,0x2e,0x38,0x36,0x30
,0x36,0x37,0x37,0x20,0x38,0x20,0x30,0x2e,0x39,0x39,0x36,0x30,0x39,0x34,0x43,0x38
,0x20,0x31,0x2e,0x31,0x30,0x35,0x34,0x37,0x20,0x37,0x2e,0x39,0x38,0x34,0x33,0x38
,0x20,0x31,0x2e,0x32,0x30,0x35,0x37,0x33,0x20,0x37,0x2e,0x39,0x35,0x33,0x31,0x32
,0x20,0x31,0x2e,0x32,0x39,0x36,0x38,0x38,0x43,0x37,0x2e,0x39,0x32,0x34,0x34,0x38
,0x20,0x31,0x2e,0x33,0x38,0x38,0x30,0x32,0x20,0x37,0x2e,0x38,0x38,0x30,0x32,0x31
,0x20,0x31,0x2e,0x34,0x37,0x39,0x31,0x37,0x20,0x37,0x2e,0x38,0x32,0x30,0x33,0x31
,0x20,0x31,0x2e,0x35,0x37,0x30,0x33,0x31,0x4c,0x35,0x2e,0x32,0x31,0x38,0x37,0x35
,0x20,0x35,0x2e,0x33,0x35,0x35,0x34,0x37,0x43,0x35,0x2e,0x30,0x38,0x30,0x37,0x33
,0x20,0x35,0x2e,0x35,0x35,0x35,0x39,0x39,0x20,0x34,0x2e,0x39,0x30,0x33,0x36,0x35
,0x20,0x35,0x2e,0x37,0x31,0x33,0x35,0x34,0x20,0x34,0x2e,0x36,0x38,0x37,0x35,0x20
,0x35,0x2e,0x38,0x32,0x38,0x31,0x32,0x43,0x34,0x2e,0x34,0x37,0x33,0x39,0x36,0x20
,0x35,0x2e,0x39,0x34,0x32,0x37,0x31,0x20,0x34,0x2e,0x32,0x34,0x34,0x37,0x39,0x20
,0x36,0x20,0x34,0x20,0x36,0x43,0x33,0x2e,0x37,0x35,0x35,0x32,0x31,0x20,0x36,0x20
,0x33,0x2e,0x35,0x32,0x34,0x37,0x34,0x20,0x35,0x2e,0x39,0x34,0x32,0x37,0x31,0x20
,0x33,0x2e,0x33,0x30,0x38,0x35,0x39,0x20,0x35,0x2e,0x38,0x32,0x38,0x31,0x32,0x43
,0x33,0x2e,0x30,0x39,0x35,0x30,0x35,0x20,0x35,0x2e,0x37,0x31,0x33,0x35,0x34,0x20
,0x32,0x2e,0x39,0x31,0x39,0x32,0x37,0x20,0x35,0x2e,0x35,0x35,0x35,0x39,0x39,0x20
,0x32,0x2e,0x37,0x38,0x31,0x32,0x35,0x20,0x35,0x2e,0x33,0x35,0x35,0x34,0x37,0x4c
,0x30,0x2e,0x31,0x37,0x39,0x36,0x38,0x38,0x20,0x31,0x2e,0x35,0x37,0x30,0x33,0x31
,0x43,0x30,0x2e,0x31,0x31,0x39,0x37,0x39,0x32,0x20,0x31,0x2e,0x34,0x38,0x31,0x37
,0x37,0x20,0x30,0x2e,0x30,0x37,0x34,0x32,0x31,0x38,0x38,0x20,0x31,0x2e,0x33,0x39
,0x31,0x39,0x33,0x20,0x30,0x2e,0x30,0x34,0x32,0x39,0x36,0x38,0x38,0x20,0x31,0x2e
,0x33,0x30,0x30,0x37,0x38,0x43,0x30,0x2e,0x30,0x31,0x34,0x33,0x32,0x32,0x39,0x20
,0x31,0x2e,0x32,0x30,0x39,0x36,0x34,0x20,0x30,0x20,0x31,0x2e,0x31,0x30,0x39,0x33
,0x38,0x20,0x30,0x20,0x31,0x5a,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d,0x22,0x77,0x68
,0x69,0x74,0x65,0x22,0x20,0x66,0x69,0x6c,0x6c,0x2d,0x6f,0x70,0x61,0x63,0x69,0x74
,0x79,0x3d,0x22,0x30,0x2e,0x35,0x34,0x34,0x32,0x22,0x20,0x2f,0x3e,0xa,0x3c,0x2f
,0x73,0x76,0x67,0x3e,0xa};

const uint8_t slint_embedded_resource_1[815] = { 0x3c
,0x73,0x76,0x67,0x20,0x77,0x69,0x64,0x74,0x68,0x3d,0x22,0x36,0x22,0x20,0x68,0x65
,0x69,0x67,0x68,0x74,0x3d,0x22,0x38,0x22,0x20,0x76,0x69,0x65,0x77,0x42,0x6f,0x78
,0x3d,0x22,0x30,0x20,0x30,0x20,0x36,0x20,0x38,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d
,0x22,0x6e,0x6f,0x6e,0x65,0x22,0x20,0x78,0x6d,0x6c,0x6e,0x73,0x3d,0x22,0x68,0x74
,0x74,0x70,0x3a,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x77,0x33,0x2e,0x6f,0x72,0x67,0x2f
,0x32,0x30,0x30,0x30,0x2f,0x73,0x76,0x67,0x22,0x3e,0xa,0x3c,0x70,0x61,0x74,0x68
,0x20,0x64,0x3d,0x22,0x4d,0x30,0x20,0x37,0x2e,0x30,0x30,0x37,0x38,0x31,0x4c,0x30
,0x20,0x30,0x2e,0x39,0x39,0x32,0x31,0x38,0x37,0x43,0x30,0x20,0x30,0x2e,0x38,0x35
,0x34,0x31,0x36,0x37,0x20,0x30,0x2e,0x30,0x32,0x36,0x30,0x34,0x31,0x37,0x20,0x30
,0x2e,0x37,0x32,0x35,0x32,0x36,0x20,0x30,0x2e,0x30,0x37,0x38,0x31,0x32,0x35,0x20
,0x30,0x2e,0x36,0x30,0x35,0x34,0x36,0x39,0x43,0x30,0x2e,0x31,0x33,0x32,0x38,0x31
,0x32,0x20,0x30,0x2e,0x34,0x38,0x35,0x36,0x37,0x37,0x20,0x30,0x2e,0x32,0x30,0x34
,0x34,0x32,0x37,0x20,0x30,0x2e,0x33,0x38,0x31,0x35,0x31,0x20,0x30,0x2e,0x32,0x39
,0x32,0x39,0x36,0x39,0x20,0x30,0x2e,0x32,0x39,0x32,0x39,0x36,0x39,0x43,0x30,0x2e
,0x33,0x38,0x34,0x31,0x31,0x35,0x20,0x30,0x2e,0x32,0x30,0x31,0x38,0x32,0x33,0x20
,0x30,0x2e,0x34,0x38,0x39,0x35,0x38,0x33,0x20,0x30,0x2e,0x31,0x33,0x30,0x32,0x30
,0x38,0x20,0x30,0x2e,0x36,0x30,0x39,0x33,0x37,0x35,0x20,0x30,0x2e,0x30,0x37,0x38
,0x31,0x32,0x35,0x43,0x30,0x2e,0x37,0x33,0x31,0x37,0x37,0x31,0x20,0x30,0x2e,0x30
,0x32,0x36,0x30,0x34,0x31,0x37,0x20,0x30,0x2e,0x38,0x36,0x31,0x39,0x37,0x39,0x20
,0x30,0x20,0x31,0x20,0x30,0x43,0x31,0x2e,0x32,0x30,0x35,0x37,0x33,0x20,0x30,0x20
,0x31,0x2e,0x33,0x39,0x35,0x38,0x33,0x20,0x30,0x2e,0x30,0x35,0x39,0x38,0x39,0x35
,0x38,0x20,0x31,0x2e,0x35,0x37,0x30,0x33,0x31,0x20,0x30,0x2e,0x31,0x37,0x39,0x36
,0x38,0x37,0x4c,0x35,0x2e,0x33,0x35,0x35,0x34,0x37,0x20,0x32,0x2e,0x37,0x38,0x31
,0x32,0x35,0x43,0x35,0x2e,0x35,0x35,0x38,0x35,0x39,0x20,0x32,0x2e,0x39,0x32,0x31
,0x38,0x37,0x20,0x35,0x2e,0x37,0x31,0x36,0x31,0x35,0x20,0x33,0x2e,0x30,0x39,0x38
,0x39,0x36,0x20,0x35,0x2e,0x38,0x32,0x38,0x31,0x33,0x20,0x33,0x2e,0x33,0x31,0x32
,0x35,0x43,0x35,0x2e,0x39,0x34,0x32,0x37,0x31,0x20,0x33,0x2e,0x35,0x32,0x36,0x30
,0x34,0x20,0x36,0x20,0x33,0x2e,0x37,0x35,0x35,0x32,0x31,0x20,0x36,0x20,0x34,0x43
,0x36,0x20,0x34,0x2e,0x32,0x34,0x34,0x37,0x39,0x20,0x35,0x2e,0x39,0x34,0x32,0x37
,0x31,0x20,0x34,0x2e,0x34,0x37,0x33,0x39,0x36,0x20,0x35,0x2e,0x38,0x32,0x38,0x31
,0x33,0x20,0x34,0x2e,0x36,0x38,0x37,0x35,0x43,0x35,0x2e,0x37,0x31,0x36,0x31,0x35
,0x20,0x34,0x2e,0x39,0x30,0x31,0x30,0x34,0x20,0x35,0x2e,0x35,0x35,0x38,0x35,0x39
,0x20,0x35,0x2e,0x30,0x37,0x38,0x31,0x32,0x20,0x35,0x2e,0x33,0x35,0x35,0x34,0x37
,0x20,0x35,0x2e,0x32,0x31,0x38,0x37,0x35,0x4c,0x31,0x2e,0x35,0x37,0x30,0x33,0x31
,0x20,0x37,0x2e,0x38,0x32,0x30,0x33,0x31,0x43,0x31,0x2e,0x33,0x39,0x35,0x38,0x33
,0x20,0x37,0x2e,0x39,0x34,0x30,0x31,0x20,0x31,0x2e,0x32,0x30,0x35,0x37,0x33,0x20
,0x38,0x20,0x31,0x20,0x38,0x43,0x30,0x2e,0x38,0x36,0x31,0x39,0x37,0x39,0x20,0x38
,0x20,0x30,0x2e,0x37,0x33,0x31,0x37,0x37,0x31,0x20,0x37,0x2e,0x39,0x37,0x33,0x39
,0x36,0x20,0x30,0x2e,0x36,0x30,0x39,0x33,0x37,0x35,0x20,0x37,0x2e,0x39,0x32,0x31
,0x38,0x38,0x43,0x30,0x2e,0x34,0x38,0x39,0x35,0x38,0x33,0x20,0x37,0x2e,0x38,0x36
,0x39,0x37,0x39,0x20,0x30,0x2e,0x33,0x38,0x34,0x31,0x31,0x35,0x20,0x37,0x2e,0x37
,0x39,0x39,0x34,0x38,0x20,0x30,0x2e,0x32,0x39,0x32,0x39,0x36,0x39,0x20,0x37,0x2e
,0x37,0x31,0x30,0x39,0x34,0x43,0x30,0x2e,0x32,0x30,0x34,0x34,0x32,0x37,0x20,0x37
,0x2e,0x36,0x31,0x39,0x37,0x39,0x20,0x30,0x2e,0x31,0x33,0x32,0x38,0x31,0x33,0x20
,0x37,0x2e,0x35,0x31,0x34,0x33,0x32,0x20,0x30,0x2e,0x30,0x37,0x38,0x31,0x32,0x35
,0x20,0x37,0x2e,0x33,0x39,0x34,0x35,0x33,0x43,0x30,0x2e,0x30,0x32,0x36,0x30,0x34
,0x31,0x37,0x20,0x37,0x2e,0x32,0x37,0x34,0x37,0x34,0x20,0x30,0x20,0x37,0x2e,0x31
,0x34,0x35,0x38,0x33,0x20,0x30,0x20,0x37,0x2e,0x30,0x30,0x37,0x38,0x31,0x5a,0x22
,0x20,0x66,0x69,0x6c,0x6c,0x3d,0x22,0x77,0x68,0x69,0x74,0x65,0x22,0x20,0x66,0x69
,0x6c,0x6c,0x2d,0x6f,0x70,0x61,0x63,0x69,0x74,0x79,0x3d,0x22,0x30,0x2e,0x35,0x34
,0x34,0x32,0x22,0x20,0x2f,0x3e,0xa,0x3c,0x2f,0x73,0x76,0x67,0x3e,0xa};

const uint8_t slint_embedded_resource_2[1135] = { 0x3c
,0x73,0x76,0x67,0x20,0x77,0x69,0x64,0x74,0x68,0x3d,0x22,0x38,0x22,0x20,0x68,0x65
,0x69,0x67,0x68,0x74,0x3d,0x22,0x36,0x22,0x20,0x76,0x69,0x65,0x77,0x42,0x6f,0x78
,0x3d,0x22,0x30,0x20,0x30,0x20,0x38,0x20,0x36,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d
,0x22,0x6e,0x6f,0x6e,0x65,0x22,0x20,0x78,0x6d,0x6c,0x6e,0x73,0x3d,0x22,0x68,0x74
,0x74,0x70,0x3a,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x77,0x33,0x2e,0x6f,0x72,0x67,0x2f
,0x32,0x30,0x30,0x30,0x2f,0x73,0x76,0x67,0x22,0x3e,0xa,0x3c,0x70,0x61,0x74,0x68
,0x20,0x64,0x3d,0x22,0x4d,0x30,0x2e,0x39,0x39,0x32,0x31,0x38,0x38,0x20,0x36,0x43
,0x30,0x2e,0x38,0x35,0x34,0x31,0x36,0x37,0x20,0x36,0x20,0x30,0x2e,0x37,0x32,0x35
,0x32,0x36,0x20,0x35,0x2e,0x39,0x37,0x33,0x39,0x36,0x20,0x30,0x2e,0x36,0x30,0x35
,0x34,0x36,0x39,0x20,0x35,0x2e,0x39,0x32,0x31,0x38,0x38,0x43,0x30,0x2e,0x34,0x38
,0x35,0x36,0x37,0x37,0x20,0x35,0x2e,0x38,0x36,0x37,0x31,0x39,0x20,0x30,0x2e,0x33
,0x38,0x30,0x32,0x30,0x38,0x20,0x35,0x2e,0x37,0x39,0x35,0x35,0x37,0x20,0x30,0x2e
,0x32,0x38,0x39,0x30,0x36,0x32,0x20,0x35,0x2e,0x37,0x30,0x37,0x30,0x33,0x43,0x30
,0x2e,0x32,0x30,0x30,0x35,0x32,0x31,0x20,0x35,0x2e,0x36,0x31,0x35,0x38,0x39,0x20
,0x30,0x2e,0x31,0x33,0x30,0x32,0x30,0x38,0x20,0x35,0x2e,0x35,0x31,0x30,0x34,0x32
,0x20,0x30,0x2e,0x30,0x37,0x38,0x31,0x32,0x35,0x20,0x35,0x2e,0x33,0x39,0x30,0x36
,0x32,0x43,0x30,0x2e,0x30,0x32,0x36,0x30,0x34,0x31,0x37,0x20,0x35,0x2e,0x32,0x36
,0x38,0x32,0x33,0x20,0x30,0x20,0x35,0x2e,0x31,0x33,0x38,0x30,0x32,0x20,0x30,0x20
,0x35,0x43,0x30,0x20,0x34,0x2e,0x38,0x39,0x30,0x36,0x32,0x20,0x30,0x2e,0x30,0x31
,0x34,0x33,0x32,0x32,0x39,0x20,0x34,0x2e,0x37,0x39,0x30,0x33,0x36,0x20,0x30,0x2e
,0x30,0x34,0x32,0x39,0x36,0x38,0x38,0x20,0x34,0x2e,0x36,0x39,0x39,0x32,0x32,0x43
,0x30,0x2e,0x30,0x37,0x34,0x32,0x31,0x38,0x38,0x20,0x34,0x2e,0x36,0x30,0x38,0x30
,0x37,0x20,0x30,0x2e,0x31,0x31,0x39,0x37,0x39,0x32,0x20,0x34,0x2e,0x35,0x31,0x38
,0x32,0x33,0x20,0x30,0x2e,0x31,0x37,0x39,0x36,0x38,0x38,0x20,0x34,0x2e,0x34,0x32
,0x39,0x36,0x39,0x4c,0x32,0x2e,0x37,0x38,0x31,0x32,0x35,0x20,0x30,0x2e,0x36,0x34
,0x34,0x35,0x33,0x31,0x43,0x32,0x2e,0x38,0x34,0x38,0x39,0x36,0x20,0x30,0x2e,0x35
,0x34,0x35,0x35,0x37,0x33,0x20,0x32,0x2e,0x39,0x32,0x38,0x33,0x39,0x20,0x30,0x2e
,0x34,0x35,0x38,0x33,0x33,0x33,0x20,0x33,0x2e,0x30,0x31,0x39,0x35,0x33,0x20,0x30
,0x2e,0x33,0x38,0x32,0x38,0x31,0x32,0x43,0x33,0x2e,0x31,0x31,0x30,0x36,0x38,0x20
,0x30,0x2e,0x33,0x30,0x37,0x32,0x39,0x32,0x20,0x33,0x2e,0x32,0x30,0x38,0x33,0x33
,0x20,0x30,0x2e,0x32,0x34,0x34,0x37,0x39,0x32,0x20,0x33,0x2e,0x33,0x31,0x32,0x35
,0x20,0x30,0x2e,0x31,0x39,0x35,0x33,0x31,0x32,0x43,0x33,0x2e,0x34,0x31,0x39,0x32
,0x37,0x20,0x30,0x2e,0x31,0x34,0x33,0x32,0x32,0x39,0x20,0x33,0x2e,0x35,0x33,0x31
,0x32,0x35,0x20,0x30,0x2e,0x31,0x30,0x34,0x31,0x36,0x37,0x20,0x33,0x2e,0x36,0x34
,0x38,0x34,0x34,0x20,0x30,0x2e,0x30,0x37,0x38,0x31,0x32,0x35,0x43,0x33,0x2e,0x37
,0x36,0x35,0x36,0x32,0x20,0x30,0x2e,0x30,0x35,0x32,0x30,0x38,0x33,0x33,0x20,0x33
,0x2e,0x38,0x38,0x32,0x38,0x31,0x20,0x30,0x2e,0x30,0x33,0x39,0x30,0x36,0x32,0x35
,0x20,0x34,0x20,0x30,0x2e,0x30,0x33,0x39,0x30,0x36,0x32,0x35,0x43,0x34,0x2e,0x31
,0x31,0x37,0x31,0x39,0x20,0x30,0x2e,0x30,0x33,0x39,0x30,0x36,0x32,0x35,0x20,0x34
,0x2e,0x32,0x33,0x34,0x33,0x38,0x20,0x30,0x2e,0x30,0x35,0x32,0x30,0x38,0x33,0x33
,0x20,0x34,0x2e,0x33,0x35,0x31,0x35,0x36,0x20,0x30,0x2e,0x30,0x37,0x38,0x31,0x32
,0x35,0x43,0x34,0x2e,0x34,0x36,0x38,0x37,0x35,0x20,0x30,0x2e,0x31,0x30,0x34,0x31
,0x36,0x37,0x20,0x34,0x2e,0x35,0x37,0x39,0x34,0x33,0x20,0x30,0x2e,0x31,0x34,0x33
,0x32,0x32,0x39,0x20,0x34,0x2e,0x36,0x38,0x33,0x35,0x39,0x20,0x30,0x2e,0x31,0x39
,0x35,0x33,0x31,0x32,0x43,0x34,0x2e,0x37,0x39,0x30,0x33,0x36,0x20,0x30,0x2e,0x32
,0x34,0x34,0x37,0x39,0x32,0x20,0x34,0x2e,0x38,0x38,0x39,0x33,0x32,0x20,0x30,0x2e
,0x33,0x30,0x37,0x32,0x39,0x32,0x20,0x34,0x2e,0x39,0x38,0x30,0x34,0x37,0x20,0x30
,0x2e,0x33,0x38,0x32,0x38,0x31,0x32,0x43,0x35,0x2e,0x30,0x37,0x31,0x36,0x31,0x20
,0x30,0x2e,0x34,0x35,0x38,0x33,0x33,0x33,0x20,0x35,0x2e,0x31,0x35,0x31,0x30,0x34
,0x20,0x30,0x2e,0x35,0x34,0x35,0x35,0x37,0x33,0x20,0x35,0x2e,0x32,0x31,0x38,0x37
,0x35,0x20,0x30,0x2e,0x36,0x34,0x34,0x35,0x33,0x31,0x4c,0x37,0x2e,0x38,0x32,0x30
,0x33,0x31,0x20,0x34,0x2e,0x34,0x32,0x39,0x36,0x39,0x43,0x37,0x2e,0x38,0x38,0x30
,0x32,0x31,0x20,0x34,0x2e,0x35,0x31,0x38,0x32,0x33,0x20,0x37,0x2e,0x39,0x32,0x34
,0x34,0x38,0x20,0x34,0x2e,0x36,0x30,0x38,0x30,0x37,0x20,0x37,0x2e,0x39,0x35,0x33
,0x31,0x32,0x20,0x34,0x2e,0x36,0x39,0x39,0x32,0x32,0x43,0x37,0x2e,0x39,0x38,0x34
,0x33,0x38,0x20,0x34,0x2e,0x37,0x39,0x30,0x33,0x36,0x20,0x38,0x20,0x34,0x2e,0x38
,0x39,0x30,0x36,0x32,0x20,0x38,0x20,0x35,0x43,0x38,0x20,0x35,0x2e,0x31,0x33,0x38
,0x30,0x32,0x20,0x37,0x2e,0x39,0x37,0x33,0x39,0x36,0x20,0x35,0x2e,0x32,0x36,0x38
,0x32,0x33,0x20,0x37,0x2e,0x39,0x32,0x31,0x38,0x38,0x20,0x35,0x2e,0x33,0x39,0x30
,0x36,0x32,0x43,0x37,0x2e,0x38,0x36,0x39,0x37,0x39,0x20,0x35,0x2e,0x35,0x31,0x30
,0x34,0x32,0x20,0x37,0x2e,0x37,0x39,0x39,0x34,0x38,0x20,0x35,0x2e,0x36,0x31,0x35
,0x38,0x39,0x20,0x37,0x2e,0x37,0x31,0x30,0x39,0x34,0x20,0x35,0x2e,0x37,0x30,0x37
,0x30,0x33,0x43,0x37,0x2e,0x36,0x32,0x32,0x34,0x20,0x35,0x2e,0x37,0x39,0x35,0x35
,0x37,0x20,0x37,0x2e,0x35,0x31,0x36,0x39,0x33,0x20,0x35,0x2e,0x38,0x36,0x37,0x31
,0x39,0x20,0x37,0x2e,0x33,0x39,0x34,0x35,0x33,0x20,0x35,0x2e,0x39,0x32,0x31,0x38
,0x38,0x43,0x37,0x2e,0x32,0x37,0x34,0x37,0x34,0x20,0x35,0x2e,0x39,0x37,0x33,0x39
,0x36,0x20,0x37,0x2e,0x31,0x34,0x37,0x31,0x34,0x20,0x36,0x20,0x37,0x2e,0x30,0x31
,0x31,0x37,0x32,0x20,0x36,0x48,0x30,0x2e,0x39,0x39,0x32,0x31,0x38,0x38,0x5a,0x22
,0x20,0x66,0x69,0x6c,0x6c,0x3d,0x22,0x77,0x68,0x69,0x74,0x65,0x22,0x20,0x66,0x69
,0x6c,0x6c,0x2d,0x6f,0x70,0x61,0x63,0x69,0x74,0x79,0x3d,0x22,0x30,0x2e,0x35,0x34
,0x34,0x32,0x22,0x20,0x2f,0x3e,0xa,0x3c,0x2f,0x73,0x76,0x67,0x3e,0xa};

const uint8_t slint_embedded_resource_3[849] = { 0x3c
,0x73,0x76,0x67,0x20,0x77,0x69,0x64,0x74,0x68,0x3d,0x22,0x36,0x22,0x20,0x68,0x65
,0x69,0x67,0x68,0x74,0x3d,0x22,0x38,0x22,0x20,0x76,0x69,0x65,0x77,0x42,0x6f,0x78
,0x3d,0x22,0x30,0x20,0x30,0x20,0x36,0x20,0x38,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d
,0x22,0x6e,0x6f,0x6e,0x65,0x22,0x20,0x78,0x6d,0x6c,0x6e,0x73,0x3d,0x22,0x68,0x74
,0x74,0x70,0x3a,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x77,0x33,0x2e,0x6f,0x72,0x67,0x2f
,0x32,0x30,0x30,0x30,0x2f,0x73,0x76,0x67,0x22,0x3e,0xa,0x3c,0x70,0x61,0x74,0x68
,0x20,0x64,0x3d,0x22,0x4d,0x30,0x20,0x34,0x43,0x30,0x20,0x33,0x2e,0x37,0x35,0x35
,0x32,0x31,0x20,0x30,0x2e,0x30,0x35,0x37,0x32,0x39,0x31,0x37,0x20,0x33,0x2e,0x35
,0x32,0x36,0x30,0x34,0x20,0x30,0x2e,0x31,0x37,0x31,0x38,0x37,0x35,0x20,0x33,0x2e
,0x33,0x31,0x32,0x35,0x43,0x30,0x2e,0x32,0x38,0x36,0x34,0x35,0x38,0x20,0x33,0x2e
,0x30,0x39,0x36,0x33,0x35,0x20,0x30,0x2e,0x34,0x34,0x34,0x30,0x31,0x20,0x32,0x2e
,0x39,0x31,0x39,0x32,0x37,0x20,0x30,0x2e,0x36,0x34,0x34,0x35,0x33,0x31,0x20,0x32
,0x2e,0x37,0x38,0x31,0x32,0x35,0x4c,0x34,0x2e,0x34,0x32,0x39,0x36,0x39,0x20,0x30
,0x2e,0x31,0x37,0x39,0x36,0x38,0x37,0x43,0x34,0x2e,0x35,0x31,0x38,0x32,0x33,0x20
,0x30,0x2e,0x31,0x31,0x39,0x37,0x39,0x32,0x20,0x34,0x2e,0x36,0x30,0x38,0x30,0x37
,0x20,0x30,0x2e,0x30,0x37,0x35,0x35,0x32,0x30,0x38,0x20,0x34,0x2e,0x36,0x39,0x39
,0x32,0x32,0x20,0x30,0x2e,0x30,0x34,0x36,0x38,0x37,0x35,0x43,0x34,0x2e,0x37,0x39
,0x30,0x33,0x36,0x20,0x30,0x2e,0x30,0x31,0x35,0x36,0x32,0x35,0x20,0x34,0x2e,0x38
,0x39,0x30,0x36,0x32,0x20,0x30,0x20,0x35,0x20,0x30,0x43,0x35,0x2e,0x31,0x33,0x35
,0x34,0x32,0x20,0x30,0x20,0x35,0x2e,0x32,0x36,0x34,0x33,0x32,0x20,0x30,0x2e,0x30
,0x32,0x36,0x30,0x34,0x31,0x37,0x20,0x35,0x2e,0x33,0x38,0x36,0x37,0x32,0x20,0x30
,0x2e,0x30,0x37,0x38,0x31,0x32,0x35,0x43,0x35,0x2e,0x35,0x30,0x39,0x31,0x31,0x20
,0x30,0x2e,0x31,0x33,0x30,0x32,0x30,0x38,0x20,0x35,0x2e,0x36,0x31,0x34,0x35,0x38
,0x20,0x30,0x2e,0x32,0x30,0x31,0x38,0x32,0x33,0x20,0x35,0x2e,0x37,0x30,0x33,0x31
,0x32,0x20,0x30,0x2e,0x32,0x39,0x32,0x39,0x36,0x39,0x43,0x35,0x2e,0x37,0x39,0x34
,0x32,0x37,0x20,0x30,0x2e,0x33,0x38,0x31,0x35,0x31,0x20,0x35,0x2e,0x38,0x36,0x35
,0x38,0x39,0x20,0x30,0x2e,0x34,0x38,0x35,0x36,0x37,0x37,0x20,0x35,0x2e,0x39,0x31
,0x37,0x39,0x37,0x20,0x30,0x2e,0x36,0x30,0x35,0x34,0x36,0x39,0x43,0x35,0x2e,0x39
,0x37,0x32,0x36,0x36,0x20,0x30,0x2e,0x37,0x32,0x35,0x32,0x36,0x20,0x36,0x20,0x30
,0x2e,0x38,0x35,0x34,0x31,0x36,0x37,0x20,0x36,0x20,0x30,0x2e,0x39,0x39,0x32,0x31
,0x38,0x37,0x4c,0x36,0x20,0x37,0x2e,0x30,0x30,0x37,0x38,0x31,0x43,0x36,0x20,0x37
,0x2e,0x31,0x34,0x35,0x38,0x33,0x20,0x35,0x2e,0x39,0x37,0x32,0x36,0x36,0x20,0x37
,0x2e,0x32,0x37,0x34,0x37,0x34,0x20,0x35,0x2e,0x39,0x31,0x37,0x39,0x37,0x20,0x37
,0x2e,0x33,0x39,0x34,0x35,0x33,0x43,0x35,0x2e,0x38,0x36,0x35,0x38,0x39,0x20,0x37
,0x2e,0x35,0x31,0x34,0x33,0x32,0x20,0x35,0x2e,0x37,0x39,0x34,0x32,0x37,0x20,0x37
,0x2e,0x36,0x31,0x39,0x37,0x39,0x20,0x35,0x2e,0x37,0x30,0x33,0x31,0x33,0x20,0x37
,0x2e,0x37,0x31,0x30,0x39,0x34,0x43,0x35,0x2e,0x36,0x31,0x34,0x35,0x38,0x20,0x37
,0x2e,0x37,0x39,0x39,0x34,0x38,0x20,0x35,0x2e,0x35,0x30,0x39,0x31,0x31,0x20,0x37
,0x2e,0x38,0x36,0x39,0x37,0x39,0x20,0x35,0x2e,0x33,0x38,0x36,0x37,0x32,0x20,0x37
,0x2e,0x39,0x32,0x31,0x38,0x37,0x43,0x35,0x2e,0x32,0x36,0x34,0x33,0x32,0x20,0x37
,0x2e,0x39,0x37,0x33,0x39,0x36,0x20,0x35,0x2e,0x31,0x33,0x35,0x34,0x32,0x20,0x38
,0x20,0x35,0x20,0x38,0x43,0x34,0x2e,0x37,0x39,0x34,0x32,0x37,0x20,0x38,0x20,0x34
,0x2e,0x36,0x30,0x34,0x31,0x37,0x20,0x37,0x2e,0x39,0x34,0x30,0x31,0x20,0x34,0x2e
,0x34,0x32,0x39,0x36,0x39,0x20,0x37,0x2e,0x38,0x32,0x30,0x33,0x31,0x4c,0x30,0x2e
,0x36,0x34,0x34,0x35,0x33,0x31,0x20,0x35,0x2e,0x32,0x31,0x38,0x37,0x35,0x43,0x30
,0x2e,0x34,0x34,0x34,0x30,0x31,0x20,0x35,0x2e,0x30,0x38,0x30,0x37,0x33,0x20,0x30
,0x2e,0x32,0x38,0x36,0x34,0x35,0x38,0x20,0x34,0x2e,0x39,0x30,0x34,0x39,0x35,0x20
,0x30,0x2e,0x31,0x37,0x31,0x38,0x37,0x35,0x20,0x34,0x2e,0x36,0x39,0x31,0x34,0x31
,0x43,0x30,0x2e,0x30,0x35,0x37,0x32,0x39,0x31,0x37,0x20,0x34,0x2e,0x34,0x37,0x35
,0x32,0x36,0x20,0x30,0x20,0x34,0x2e,0x32,0x34,0x34,0x37,0x39,0x20,0x30,0x20,0x34
,0x5a,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d,0x22,0x77,0x68,0x69,0x74,0x65,0x22,0x20
,0x66,0x69,0x6c,0x6c,0x2d,0x6f,0x70,0x61,0x63,0x69,0x74,0x79,0x3d,0x22,0x30,0x2e
,0x35,0x34,0x34,0x32,0x22,0x20,0x2f,0x3e,0xa,0x3c,0x2f,0x73,0x76,0x67,0x3e,0xa
};

inline auto ShuffleButton_root_1::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->field_root_1.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush((self->field_touch_4.has_hover.get() ? slint::Color::from_argb_encoded(+4.289309097e9) : slint::Color::from_argb_uint8(std::clamp(static_cast<float>(1) * 255., 0., 255.), std::clamp(static_cast<int>(40), 0, 255), std::clamp(static_cast<int>(40), 0, 255), std::clamp(static_cast<int>(40), 0, 255))));
                        });
    self->field_root_1_empty_2_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Center, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 1>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_3), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 1 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, 90, layout_info.min, 90, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 1), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), 90, 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_1_empty_2_layout_cache_ortho.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout_ortho([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3){ slint::cbindgen_private::BoxLayoutOrthoData o{}; o.cells = a_0; o.cross_axis_alignment = a_1; o.padding = a_2; o.size = a_3; return o; }(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 1>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_3), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 1 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, 70, layout_info.min, 70, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 1), slint::cbindgen_private::CrossAxisAlignment::Center, [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), 20),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_1_empty_2_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 1>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_3), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 1 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, 90, layout_info.min, 90, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 1),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Center);
                        });
    self->field_root_1_empty_2_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 1>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_3), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 1 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, 70, layout_info.min, 70, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 1),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_text_3.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.294967295e9)));
    self->field_text_3.font_size.set(20);
    self->field_text_3.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_3.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_1_empty_2_layout_cache_ortho.get()[1];
                        });
    self->field_text_3.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->field_text_3.text.set(slint::SharedString(u8"Shuffle"));
    self->field_text_3.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_3.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_1_empty_2_layout_cache.get()[1];
                        });
    self->field_touch_4.clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->field_root_1_shuffle_clicked.call();
                });
    self->field_touch_4.enabled.set(true);
    self->field_text_3.color.set_constant();
    self->field_text_3.font_size.set_constant();
    self->field_text_3.font_weight.set_constant();
    self->field_text_3.horizontal_alignment.set_constant();
    self->field_text_3.text.set_constant();
    self->field_text_3.vertical_alignment.set_constant();
    self->field_touch_4.enabled.set_constant();
    self->field_touch_4.mouse_cursor.set_constant();
}

inline auto ShuffleButton_root_1::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto ShuffleButton_root_1::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_1_empty_2_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(90, layout_info.max_percent, 90, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }() : [&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_1_empty_2_layoutinfo_v.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(20, layout_info.max_percent, 20, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }();
}

inline auto ShuffleButton_root_1::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(20), float(90), float(self->field_root_1_x.get()), float(self->field_root_1_y.get())));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_1_empty_2_layout_cache_ortho.get()[1]), float(self->field_root_1_empty_2_layout_cache.get()[1]), float(self->field_root_1_empty_2_layout_cache.get()[0]), float(self->field_root_1_empty_2_layout_cache_ortho.get()[0])));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(20), float(90), float(0), float(0)));
    }
    return {};
}

inline auto ShuffleButton_root_1::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 1: return slint::cbindgen_private::AccessibleRole::Text;
    }
    return {};
}

inline auto ShuffleButton_root_1::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (1 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return slint::SharedString(u8"Shuffle");
    }
    return {};
}

inline auto ShuffleButton_root_1::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto ShuffleButton_root_1::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto ShuffleButton_root_1::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto ShuffleButton_root_1::ensure_instantiated () const -> bool{
    [[maybe_unused]] auto self = this;
    bool _changed = false;
    return _changed;
}

inline auto SliderBase_root_5::fn_clear_focus () const -> void{
    [[maybe_unused]] auto self = this;
    self->globals->window().window_handle().set_focus_item(self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 2 - 1, false, slint::cbindgen_private::FocusReason::Programmatic);;
}

inline auto SliderBase_root_5::fn_decrement () const -> void{
    [[maybe_unused]] auto self = this;
    self->fn_set_value((self->field_root_5_value.get() -(float) self->field_root_5_step.get()));
}

inline auto SliderBase_root_5::fn_focus () const -> void{
    [[maybe_unused]] auto self = this;
    self->globals->window().window_handle().set_focus_item(self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 2 - 1, true, slint::cbindgen_private::FocusReason::Programmatic);;
}

inline auto SliderBase_root_5::fn_increment () const -> void{
    [[maybe_unused]] auto self = this;
    self->fn_set_value((self->field_root_5_value.get() + self->field_root_5_step.get()));
}

inline auto SliderBase_root_5::fn_set_value ([[maybe_unused]] float arg_0) const -> void{
    [[maybe_unused]] auto self = this;
    if (! (std::abs(float(self->field_root_5_value.get() - arg_0)) < std::numeric_limits<float>::epsilon())) { [&]{ self->field_root_5_value.set(std::max<float>(self->field_root_5_minimum.get(), std::min<float>(self->field_root_5_maximum.get(), arg_0)));self->field_root_5_changed.call(self->field_root_5_value.get()); }(); } else { ; };
}

inline auto SliderBase_root_5::fn_size_to_value ([[maybe_unused]] float arg_0, [[maybe_unused]] float arg_1) const -> float{
    [[maybe_unused]] auto self = this;
    return ((arg_0 * (self->field_root_5_maximum.get() -(float) self->field_root_5_minimum.get())) /(float) arg_1);
}

inline auto SliderBase_root_5::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->field_root_5_handle_has_hover.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_5_handle_x = self->field_root_5_handle_x.get();;[[maybe_unused]] auto tmp_root_5_handle_y = self->field_root_5_handle_y.get();;[[maybe_unused]] auto tmp_touch_area_6_mouse_x = self->field_touch_area_6.mouse_x.get();;[[maybe_unused]] auto tmp_touch_area_6_mouse_y = self->field_touch_area_6.mouse_y.get();;return ((((tmp_touch_area_6_mouse_x >= tmp_root_5_handle_x) && (tmp_touch_area_6_mouse_x <= (tmp_root_5_handle_x + self->field_root_5_handle_width.get()))) && (tmp_touch_area_6_mouse_y >= tmp_root_5_handle_y)) && (tmp_touch_area_6_mouse_y <= (tmp_root_5_handle_y + self->field_root_5_handle_height.get()))); }();
                        });
    self->field_root_5_maximum.set(100);
    self->field_root_5_minimum.set(0);
    self->field_root_5_ref_size.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (! (self->field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical) ? self->field_root_5_handle_width.get() : self->field_root_5_handle_height.get());
                        });
    self->field_root_5_step.set(1);
    self->field_root_5_value.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_5_minimum.get();
                        });
    self->field_touch_area_6.enabled.set(true);
    self->field_touch_area_6.moved.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    if (! (! self->field_touch_area_6.enabled.get())) { self->fn_set_value((self->field_root_5_touch_area_6_pressed_value.get() + (! (self->field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical) ? self->fn_size_to_value((self->field_touch_area_6.mouse_x.get() -(float) self->field_touch_area_6.pressed_x.get()),(self->field_root_5_width.get() -(float) self->field_root_5_ref_size.get())) : self->fn_size_to_value((self->field_touch_area_6.pressed_y.get() -(float) self->field_touch_area_6.mouse_y.get()),(self->field_root_5_height.get() -(float) self->field_root_5_ref_size.get()))))); } else { ; };
                });
    self->field_touch_area_6.pointer_event.set_handler(
                [this]([[maybe_unused]] slint::language::PointerEvent arg_0) {
                    [[maybe_unused]] auto self = this;
                    if (! (arg_0.button != slint::cbindgen_private::PointerEventButton::Left)) { if (! (arg_0.kind == slint::cbindgen_private::PointerEventKind::Up)) { [&]{ if (! self->field_root_5_handle_has_hover.get()) { self->fn_set_value(((! (self->field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical) ? self->fn_size_to_value(self->field_touch_area_6.mouse_x.get(),self->field_root_5_width.get()) : self->fn_size_to_value((self->field_root_5_height.get() -(float) self->field_touch_area_6.mouse_y.get()),self->field_root_5_height.get())) + self->field_root_5_minimum.get())); } else { ; };self->field_root_5_touch_area_6_pressed_value.set(self->field_root_5_value.get());self->globals->window().window_handle().set_focus_item(self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 2 - 1, true, slint::cbindgen_private::FocusReason::Programmatic);;self->field_root_5_handle_pressed.set(true); }(); } else { [&]{ if (self->field_root_5_handle_pressed.get()) { self->field_root_5_released.call(self->field_root_5_value.get()); } else { ; };self->field_root_5_handle_pressed.set(false); }(); }; } else { ; };
                });
    self->field_focus_scope_7.enabled.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_touch_area_6.enabled.get();
                        });
    self->field_focus_scope_7.focus_on_click.set(true);
    self->field_focus_scope_7.focus_on_tab_navigation.set(true);
    self->field_focus_scope_7.key_pressed.set_handler(
                [this]([[maybe_unused]] slint::language::KeyEvent arg_0) {
                    [[maybe_unused]] auto self = this;
                    return (! ((! self->field_touch_area_6.enabled.get()) || (self->field_root_5_step.get() <= 0)) ? [&]{ [[maybe_unused]] auto returned_expression0 = [&]{ [[maybe_unused]] auto return_check_merge0 = (((! (self->field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical)) && (arg_0.text == slint::SharedString(u8"\U0000f703"))) || ((self->field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical) && (arg_0.text == slint::SharedString(u8"\U0000f700"))) ? std::make_tuple(false, [&]{ self->fn_increment();return slint::cbindgen_private::EventResult::Accept; }()) : (((! (self->field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical)) && (arg_0.text == slint::SharedString(u8"\U0000f702"))) || ((self->field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical) && (arg_0.text == slint::SharedString(u8"\U0000f701"))) ? std::make_tuple(false, [&]{ self->fn_decrement();return slint::cbindgen_private::EventResult::Accept; }()) : (arg_0.text == slint::SharedString(u8"\U0000f729") ? std::make_tuple(false, [&]{ self->fn_set_value(self->field_root_5_minimum.get());return slint::cbindgen_private::EventResult::Accept; }()) : (! (arg_0.text == slint::SharedString(u8"\U0000f72b")) ? std::make_tuple(true, slint::cbindgen_private::EventResult::Reject) : std::make_tuple(false, [&]{ self->fn_set_value(self->field_root_5_maximum.get());return slint::cbindgen_private::EventResult::Accept; }())))));;return (std::get<0>(return_check_merge0) ? std::make_tuple(slint::cbindgen_private::EventResult::Reject, true, slint::cbindgen_private::EventResult::Reject) : std::make_tuple(slint::cbindgen_private::EventResult::Reject, false, std::get<1>(return_check_merge0))); }();;return (std::get<1>(returned_expression0) ? std::get<0>(returned_expression0) : std::get<2>(returned_expression0)); }() : slint::cbindgen_private::EventResult::Reject);
                });
    self->field_focus_scope_7.key_released.set_handler(
                [this]([[maybe_unused]] slint::language::KeyEvent arg_0) {
                    [[maybe_unused]] auto self = this;
                    return (! (! self->field_touch_area_6.enabled.get()) ? [&]{ if (((((((! (self->field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical)) && (arg_0.text == slint::SharedString(u8"\U0000f703"))) || ((self->field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical) && (arg_0.text == slint::SharedString(u8"\U0000f701")))) || ((! (self->field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical)) && (arg_0.text == slint::SharedString(u8"\U0000f702")))) || ((self->field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical) && (arg_0.text == slint::SharedString(u8"\U0000f700")))) || (arg_0.text == slint::SharedString(u8"\U0000f729"))) || (arg_0.text == slint::SharedString(u8"\U0000f72b"))) { self->field_root_5_released.call(self->field_root_5_value.get()); } else { ; };return slint::cbindgen_private::EventResult::Accept; }() : slint::cbindgen_private::EventResult::Reject);
                });
    self->field_touch_area_6.mouse_cursor.set_constant();
    self->field_focus_scope_7.focus_on_click.set_constant();
    self->field_focus_scope_7.focus_on_tab_navigation.set_constant();
}

inline auto SliderBase_root_5::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto SliderBase_root_5::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)) : ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1));
}

inline auto SliderBase_root_5::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_5_height.get()), float(self->field_root_5_width.get()), float(0), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float((1 * self->field_root_5_height.get())), float((1 * self->field_root_5_width.get())), float(0), float(0)));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(0), float(0), float(0), float(0)));
    }
    return {};
}

inline auto SliderBase_root_5::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto SliderBase_root_5::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto SliderBase_root_5::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto SliderBase_root_5::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto SliderBase_root_5::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto SliderBase_root_5::ensure_instantiated () const -> bool{
    [[maybe_unused]] auto self = this;
    bool _changed = false;
    return _changed;
}

inline auto Slider_root_8::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    this->field_base_14.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 4 - 1, tree_index_of_first_child + 7 - 1);
    self->field_root_8_accessible_action_decrement.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->field_base_14.fn_decrement();
                });
    self->field_root_8_accessible_action_increment.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->field_base_14.fn_increment();
                });
    self->field_root_8_accessible_action_set_value.set_handler(
                [this]([[maybe_unused]] slint::SharedString arg_0) {
                    [[maybe_unused]] auto self = this;
                    if ([](const auto &a){ float res = 0; return slint::cbindgen_private::slint_string_to_float(&a, &res); }(arg_0)) { self->field_base_14.fn_set_value([](const auto &a){ float res = 0; slint::cbindgen_private::slint_string_to_float(&a, &res); return res; }(arg_0)); } else { ; };
                });
    self->field_root_8_accessible_value_step.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::min<float>(self->field_base_14.field_root_5_step.get(), ((self->field_base_14.field_root_5_maximum.get() -(float) self->field_base_14.field_root_5_minimum.get()) /(float) 100));
                        });
    self->field_root_8_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto layout_info_0 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_0.max, layout_info_0.max_percent, (self->field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? 20 : 0), layout_info_0.min_percent, layout_info_0.preferred, (self->field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? 0 : 1)); }() + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)).max, 100, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)).min, 0, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)).preferred, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)).stretch));
                        });
    self->field_root_8_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto layout_info_1 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_1.max, layout_info_1.max_percent, (self->field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? 0 : 20), layout_info_1.min_percent, layout_info_1.preferred, (self->field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? 1 : 0)); }() + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)).max, 100, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)).min, 0, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)).preferred, ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)).stretch));
                        });
    self->field_root_8_min_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? 0 : 20);
                        });
    self->field_root_8_rail_9_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? (self->field_root_8_height.get() -(float) 20) : 4);
                        });
    self->field_root_8_rail_9_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? 4 : (self->field_root_8_width.get() -(float) 20));
                        });
    self->field_root_8_rail_9_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? ((self->field_root_8_width.get() -(float) self->field_root_8_rail_9_width.get()) /(float) 2) : 10);
                        });
    self->field_root_8_rail_9_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? 10 : ((self->field_root_8_height.get() -(float) self->field_root_8_rail_9_height.get()) /(float) 2));
                        });
    self->field_root_8_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (! self->field_base_14.field_touch_area_6.enabled.get() ? 1 : (self->field_base_14.field_root_5_handle_pressed.get() || self->field_base_14.field_focus_scope_7.has_focus.get() ? 2 : (self->field_base_14.field_touch_area_6.has_hover.get() ? 3 : 0)));
                        });
    self->field_root_8_thumb_11_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? ((self->field_root_8_width.get() -(float) 20) /(float) 2) : [&]{ [[maybe_unused]] auto tmp_base_14_minimum = self->field_base_14.field_root_5_minimum.get();;[[maybe_unused]] auto tmp_root_8_width = self->field_root_8_width.get();;return std::max<float>(0, std::min<float>((((tmp_root_8_width -(float) 20) * (self->field_base_14.field_root_5_value.get() -(float) tmp_base_14_minimum)) /(float) (self->field_base_14.field_root_5_maximum.get() -(float) tmp_base_14_minimum)), (tmp_root_8_width -(float) 20))); }());
                        });
    self->field_root_8_thumb_11_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? [&]{ [[maybe_unused]] auto tmp_base_14_maximum = self->field_base_14.field_root_5_maximum.get();;[[maybe_unused]] auto tmp_root_8_height = self->field_root_8_height.get();;return std::max<float>(0, std::min<float>((((tmp_root_8_height -(float) 20) * (tmp_base_14_maximum -(float) self->field_base_14.field_root_5_value.get())) /(float) (tmp_base_14_maximum -(float) self->field_base_14.field_root_5_minimum.get())), (tmp_root_8_height -(float) 20))); }() : ((self->field_root_8_height.get() -(float) 20) /(float) 2));
                        });
    self->field_root_8_thumb_inner_13_width.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_8_state = self->field_root_8_state.get();;return (std::abs(float(tmp_root_8_state - 2)) < std::numeric_limits<float>::epsilon() ? 10 : (std::abs(float(tmp_root_8_state - 3)) < std::numeric_limits<float>::epsilon() ? 14 : 12)); }();
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_root_8_track_10_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? ((self->field_root_8_height.get() -(float) self->field_root_8_thumb_11_y.get()) -(float) 20) : self->field_root_8_rail_9_height.get());
                        });
    self->field_root_8_track_10_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? self->field_root_8_rail_9_width.get() : self->field_root_8_thumb_11_x.get());
                        });
    self->field_root_8_track_10_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? ((self->field_root_8_width.get() -(float) self->field_root_8_track_10_width.get()) /(float) 2) : 10);
                        });
    self->field_root_8_track_10_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? (self->field_root_8_thumb_11_y.get() + 10) : ((self->field_root_8_height.get() -(float) self->field_root_8_track_10_height.get()) /(float) 2));
                        });
    self->field_root_8_vertical_stretch.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? 1 : 0);
                        });
    self->field_rail_9.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_8_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_74->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(704643071) : slint::Color::from_argb_encoded(939524096))) : slint::Brush((self->globals->global_FluentPalette_74->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(+1.92937984e9))));
                        });
    self->field_rail_9.border_radius.set(2);
    self->field_track_10.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_8_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_74->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(704643071) : slint::Color::from_argb_encoded(939524096))) : self->globals->global_FluentPalette_74->field_accent_background.get());
                        });
    self->field_track_10.border_radius.set(2);
    self->field_thumb_11.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush((self->globals->global_FluentPalette_74->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+4.282729797e9) : slint::Color::from_argb_encoded(+4.294967295e9)));
                        });
    self->field_thumb_11.border_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_8_state.get() - 2)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_74->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(+1.92937984e9))) : slint::Brush(slint::Color::from_argb_encoded(0)));
                        });
    self->field_thumb_11.border_radius.set(10);
    self->field_thumb_border_12.border_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->globals->global_FluentPalette_74->field_dark_color_scheme.get() ? [&] { const slint::private_api::GradientStop stops[] = { slint::private_api::GradientStop{ slint::Color::from_argb_encoded(402653183), float(0), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(318767103), float(1), } }; return slint::Brush(slint::private_api::LinearGradientBrush(180, stops, 2)); }() : [&] { const slint::private_api::GradientStop stops[] = { slint::private_api::GradientStop{ slint::Color::from_argb_encoded(251658240), float(0), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(687865856), float(1), } }; return slint::Brush(slint::private_api::LinearGradientBrush(180, stops, 2)); }());
                        });
    self->field_thumb_border_12.border_radius.set(10.5);
    self->field_thumb_border_12.border_width.set(1);
    self->field_thumb_inner_13.background.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_8_state = self->field_root_8_state.get();;return (std::abs(float(tmp_root_8_state - 1)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_74->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(704643071) : slint::Color::from_argb_encoded(939524096))) : (std::abs(float(tmp_root_8_state - 2)) < std::numeric_limits<float>::epsilon() ? self->globals->global_FluentPalette_74->field_accent_background.get().with_alpha(0.8) : (std::abs(float(tmp_root_8_state - 3)) < std::numeric_limits<float>::epsilon() ? self->globals->global_FluentPalette_74->field_accent_background.get().with_alpha(0.9) : self->globals->global_FluentPalette_74->field_accent_background.get()))); }();
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_thumb_inner_13.border_radius.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_root_8_thumb_inner_13_width.get() /(float) 2);
                        });
    self->field_base_14.field_root_5_handle_height.set(20);
    self->field_base_14.field_root_5_handle_width.set(20);
    self->field_base_14.field_root_5_handle_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_8_thumb_11_x.get();
                        });
    self->field_base_14.field_root_5_handle_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_8_thumb_11_y.get();
                        });
    self->field_base_14.field_root_5_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (1 * self->field_root_8_height.get());
                        });
    self->field_base_14.field_root_5_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (1 * self->field_root_8_width.get());
                        });
    self->field_rail_9.border_color.set_constant();
    self->field_rail_9.border_radius.set_constant();
    self->field_rail_9.border_width.set_constant();
    self->field_track_10.border_color.set_constant();
    self->field_track_10.border_radius.set_constant();
    self->field_track_10.border_width.set_constant();
    self->field_thumb_11.border_radius.set_constant();
    self->field_thumb_11.border_width.set_constant();
    self->field_thumb_border_12.background.set_constant();
    self->field_thumb_border_12.border_radius.set_constant();
    self->field_thumb_border_12.border_width.set_constant();
    self->field_thumb_inner_13.border_color.set_constant();
    self->field_thumb_inner_13.border_width.set_constant();
    self->field_base_14.field_root_5_handle_height.set_constant();
    self->field_base_14.field_root_5_handle_width.set_constant();
}

inline auto Slider_root_8::user_init () -> void{
    [[maybe_unused]] auto self = this;
    this->field_base_14.user_init();
}

inline auto Slider_root_8::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = self->field_root_8_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, (self->field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? 20 : 0), layout_info.min_percent, layout_info.preferred, (self->field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? 0 : 1)); }() : [&]{ [[maybe_unused]] auto layout_info = self->field_root_8_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, (self->field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? 0 : 20), layout_info.min_percent, layout_info.preferred, (self->field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? 1 : 0)); }();
}

inline auto Slider_root_8::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_8_height.get()), float(self->field_root_8_width.get()), float(self->field_root_8_x.get()), float(self->field_root_8_y.get())));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_8_rail_9_height.get()), float(self->field_root_8_rail_9_width.get()), float(self->field_root_8_rail_9_x.get()), float(self->field_root_8_rail_9_y.get())));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_8_track_10_height.get()), float(self->field_root_8_track_10_width.get()), float(self->field_root_8_track_10_x.get()), float(self->field_root_8_track_10_y.get())));
        case 3: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(20), float(20), float(self->field_root_8_thumb_11_x.get()), float(self->field_root_8_thumb_11_y.get())));
        case 4: return slint::private_api::convert_anonymous_rect(std::make_tuple(float((1 * self->field_root_8_height.get())), float((1 * self->field_root_8_width.get())), float(0), float(0)));
        case 5: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(21), float(21), float(-0.5), float(-0.5)));
        case 6: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_8_thumb_inner_13_width.get()), float(self->field_root_8_thumb_inner_13_width.get()), float(((20 -(float) self->field_root_8_thumb_inner_13_width.get()) /(float) 2)), float(((20 -(float) self->field_root_8_thumb_inner_13_width.get()) /(float) 2))));
    }
    if (index == 4) {
        return self->field_base_14.item_geometry(0);
    } else if (index >= 7 && index < 9) {
        return self->field_base_14.item_geometry(index - 6);
    } else return {};
}

inline auto Slider_root_8::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::AccessibleRole::Slider;
    }
    if (index == 4) {
        return self->field_base_14.accessible_role(0);
    } else if (index >= 7 && index < 9) {
        return self->field_base_14.accessible_role(index - 6);
    } else return {};
}

inline auto Slider_root_8::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Enabled): return (self->field_base_14.field_touch_area_6.enabled.get() ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Orientation): return [&]() -> slint::SharedString { switch (self->field_base_14.field_root_5_orientation.get()) { case slint::cbindgen_private::Orientation::Horizontal: return "horizontal"; case slint::cbindgen_private::Orientation::Vertical: return "vertical"; default: return {}; } }();
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Value): return slint::SharedString::from_number(self->field_base_14.field_root_5_value.get());
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::ValueMaximum): return slint::SharedString::from_number(self->field_base_14.field_root_5_maximum.get());
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::ValueMinimum): return slint::SharedString::from_number(self->field_base_14.field_root_5_minimum.get());
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::ValueStep): return slint::SharedString::from_number(self->field_root_8_accessible_value_step.get());
    }
    if (index == 4) {
        return self->field_base_14.accessible_string_property(0, what);
    } else if (index >= 7 && index < 9) {
        return self->field_base_14.accessible_string_property(index - 6, what);
    } else return {};
}

inline auto Slider_root_8::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibilityAction::Tag::Decrement): return self->field_root_8_accessible_action_decrement.call();
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibilityAction::Tag::Increment): return self->field_root_8_accessible_action_increment.call();
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibilityAction::Tag::SetValue): { auto arg_0 = action.set_value._0; return self->field_root_8_accessible_action_set_value.call(arg_0); }
    }
    if (index == 4) {
        return self->field_base_14.accessibility_action(0, action);
    } else if (index >= 7 && index < 9) {
        return self->field_base_14.accessibility_action(index - 6, action);
    } else return ;
}

inline auto Slider_root_8::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::SupportedAccessibilityAction_Decrement|slint::cbindgen_private::SupportedAccessibilityAction_Increment|slint::cbindgen_private::SupportedAccessibilityAction_SetValue;
    }
    if (index == 4) {
        return self->field_base_14.supported_accessibility_actions(0);
    } else if (index >= 7 && index < 9) {
        return self->field_base_14.supported_accessibility_actions(index - 6);
    } else return {};
}

inline auto Slider_root_8::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 4) {
        return self->field_base_14.element_infos(0);
    } else if (index >= 7 && index < 9) {
        return self->field_base_14.element_infos(index - 6);
    } else return {};
}

inline auto Slider_root_8::ensure_instantiated () const -> bool{
    [[maybe_unused]] auto self = this;
    bool _changed = false;
    return _changed;
}

inline FluentPalette_74::FluentPalette_74 (const class SharedGlobals *globals)
 : globals(globals)
{
}

inline auto FluentPalette_74::init () -> void{
    (void)this->globals;
    this->field_accent_background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush((this->field_dark_color_scheme.get() ? this->fn_accentify(slint::Color::from_argb_encoded(+4.284534271e9)) : this->fn_accentify(slint::Color::from_argb_encoded(+4.278214584e9))));
                        });
    this->field_dark_color_scheme.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_FluentPalette_74_color_scheme = [&]{ auto _root = (*this->globals->root_weak.lock()).into_dyn(); return slint::cbindgen_private::slint_context_color_scheme(&_root); }();;return (! (tmp_FluentPalette_74_color_scheme == slint::cbindgen_private::ColorScheme::Unknown) ? (tmp_FluentPalette_74_color_scheme == slint::cbindgen_private::ColorScheme::Dark) : ([&]{ auto _root = (*this->globals->root_weak.lock()).into_dyn(); return slint::cbindgen_private::slint_context_color_scheme(&_root); }() == slint::cbindgen_private::ColorScheme::Dark)); }();
                        });
}

inline auto FluentPalette_74::fn_accentify ([[maybe_unused]] slint::Color arg_0) const -> slint::Color{
    [[maybe_unused]] auto self = this;
    return [&]{ [[maybe_unused]] auto local_accent_color = [&]{ auto _root = (*this->globals->root_weak.lock()).into_dyn(); slint::Color col; slint::cbindgen_private::slint_context_accent_color(&_root, &col); return col; }();;return (! (local_accent_color.to_argb_uint().alpha > 0) ? arg_0 : [&]{ [[maybe_unused]] auto local_default_lch = arg_0.to_oklch();;[[maybe_unused]] auto local_accent_lch = local_accent_color.to_oklch();;return slint::Color::from_oklch(std::clamp(static_cast<float>(local_default_lch.lightness), 0.f, 1.f), std::max(static_cast<float>(local_accent_lch.chroma), 0.f), static_cast<float>(local_accent_lch.hue), std::clamp(static_cast<float>(1), 0.f, 1.f)); }()); }();
}

inline const slint::private_api::ItemTreeVTable Component__Transform_22::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, ensure_instantiated, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component__Transform_22>, slint::private_api::dealloc };

inline auto Component__Transform_22::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MainWindow const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const MainWindow>(parent->self_weak.lock().value(), parent);
    self->field__Transform_22_empty_24_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Start, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 1>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_25), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 2 - 1)) ) }.data(), 1), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(5, 5), self->field__Transform_22_rectangle_23_width.get(), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field__Transform_22_empty_24_layout_cache_ortho.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout_ortho([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3){ slint::cbindgen_private::BoxLayoutOrthoData o{}; o.cells = a_0; o.cross_axis_alignment = a_1; o.padding = a_2; o.size = a_3; return o; }(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 1>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_25), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 2 - 1)) ) }.data(), 1), slint::cbindgen_private::CrossAxisAlignment::Center, [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), 30),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field__Transform_22_empty_24_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 1>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_25), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 2 - 1)) ) }.data(), 1),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(5, 5),slint::cbindgen_private::LayoutAlignment::Start);
                        });
    self->field__Transform_22_empty_24_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 1>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_25), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 2 - 1)) ) }.data(), 1),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field__Transform_22_rectangle_23_entry_clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    [&]{ slint::private_api::optional_then(self->parent.lock(), [&](auto&&x) { x->field_root_15_pause.set(false); });slint::private_api::optional_then(self->parent.lock(), [&](auto&&x) { x->field_root_15_shuffle_mode.set(false); });slint::private_api::optional_then(self->parent.lock(), [&](auto&&x) { x->field_root_15_current_song.set([&]{ [[maybe_unused]] auto struct_assignment0 = slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_15_current_song.get(); }));;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3){ MusicInfo o{}; o.curr = a_0; o.image = a_1; o.len = a_2; o.name = a_3; return o; }(struct_assignment0.curr, struct_assignment0.image, struct_assignment0.len, self->field_model_data.get().name); }()); });slint::private_api::optional_then(self->parent.lock(), [&](auto&&x) { x->field_root_15_current_song.set([&]{ [[maybe_unused]] auto struct_assignment1 = slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_15_current_song.get(); }));;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3){ MusicInfo o{}; o.curr = a_0; o.image = a_1; o.len = a_2; o.name = a_3; return o; }(struct_assignment1.curr, self->field_model_data.get().image, struct_assignment1.len, struct_assignment1.name); }()); });slint::private_api::optional_then(self->parent.lock(), [&](auto&&x) { x->field_root_15_entry_clicked.call(); }); }();
                });
    self->field__Transform_22_rectangle_23_song_name.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_model_data.get().name;
                        });
    self->field__Transform_22_rectangle_23_transform_scale.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_touch_26.has_hover.get() ? 1.05 : 1);
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 100, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0.42, 0, 0.58, 1), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field__Transform_22_rectangle_23_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return slint::private_api::layout_cache_access(x->field_root_15_sidePanelContainer_20_layout_cache_ortho.get(), 3, self->field_model_index.get(), 2); }));
                        });
    self->field__Transform_22_rectangle_23_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return slint::private_api::layout_cache_access(x->field_root_15_sidePanelContainer_20_layout_cache_ortho.get(), 2, self->field_model_index.get(), 2); }));
                        });
    self->field__Transform_22_rectangle_23_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return slint::private_api::layout_cache_access(x->field_root_15_sidePanelContainer_20_layout_cache.get(), 2, self->field_model_index.get(), 2); }));
                        });
    self->field__Transform_22.transform_origin.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&](const auto &a_0, const auto &a_1){ slint::LogicalPosition o{}; o.x = a_0; o.y = a_1; return o; }((self->field__Transform_22_rectangle_23_width.get() /(float) 2), 15);
                        });
    self->field__Transform_22.transform_rotation.set(0);
    self->field__Transform_22.transform_scale_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field__Transform_22_rectangle_23_transform_scale.get();
                        });
    self->field__Transform_22.transform_scale_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field__Transform_22_rectangle_23_transform_scale.get();
                        });
    self->field_rectangle_23.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush((slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_15_current_song.get(); })).name == self->field_model_data.get().name ? slint::Color::from_argb_encoded(+4.278222848e9) : (self->field_touch_26.has_hover.get() ? slint::Color::from_argb_encoded(+4.289309097e9) : slint::Color::from_argb_uint8(std::clamp(static_cast<float>(1) * 255., 0., 255.), std::clamp(static_cast<int>(40), 0, 255), std::clamp(static_cast<int>(40), 0, 255), std::clamp(static_cast<int>(40), 0, 255)))));
                        });
    self->field_text_25.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.294967295e9)));
    self->field_text_25.font_size.set(15);
    self->field_text_25.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_25.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field__Transform_22_empty_24_layout_cache_ortho.get()[1];
                        });
    self->field_text_25.overflow.set(slint::cbindgen_private::TextOverflow::Elide);
    self->field_text_25.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_model_data.get().name;
                        });
    self->field_text_25.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field__Transform_22_empty_24_layout_cache.get()[1];
                        });
    self->field_touch_26.clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->field__Transform_22_rectangle_23_entry_clicked.call();
                });
    self->field_touch_26.enabled.set(true);
    self->field__Transform_22.transform_rotation.set_constant();
    self->field_text_25.color.set_constant();
    self->field_text_25.font_family.set_constant();
    self->field_text_25.font_italic.set_constant();
    self->field_text_25.font_size.set_constant();
    self->field_text_25.font_weight.set_constant();
    self->field_text_25.horizontal_alignment.set_constant();
    self->field_text_25.letter_spacing.set_constant();
    self->field_text_25.overflow.set_constant();
    self->field_text_25.stroke.set_constant();
    self->field_text_25.stroke_style.set_constant();
    self->field_text_25.stroke_width.set_constant();
    self->field_text_25.vertical_alignment.set_constant();
    self->field_text_25.wrap.set_constant();
    self->field_touch_26.enabled.set_constant();
    self->field_touch_26.mouse_cursor.set_constant();
}

inline auto Component__Transform_22::user_init () -> void{
    [[maybe_unused]] auto self = this;
    ;
}

inline auto Component__Transform_22::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field__Transform_22_empty_24_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, 90, layout_info.min, 90, layout_info.preferred, layout_info.stretch); }() : [&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field__Transform_22_empty_24_layoutinfo_v.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(30, layout_info.max_percent, 30, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }();
}

inline auto Component__Transform_22::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(30), float(self->field__Transform_22_rectangle_23_width.get()), float(self->field__Transform_22_rectangle_23_x.get()), float(self->field__Transform_22_rectangle_23_y.get())));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(30), float(self->field__Transform_22_rectangle_23_width.get()), float(0), float(0)));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field__Transform_22_empty_24_layout_cache_ortho.get()[1]), float(self->field__Transform_22_empty_24_layout_cache.get()[1]), float(self->field__Transform_22_empty_24_layout_cache.get()[0]), float(self->field__Transform_22_empty_24_layout_cache_ortho.get()[0])));
        case 3: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(30), float(self->field__Transform_22_rectangle_23_width.get()), float(0), float(0)));
    }
    return {};
}

inline auto Component__Transform_22::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 2: return slint::cbindgen_private::AccessibleRole::Text;
    }
    return {};
}

inline auto Component__Transform_22::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (2 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->field__Transform_22_rectangle_23_song_name.get();
    }
    return {};
}

inline auto Component__Transform_22::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto Component__Transform_22::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component__Transform_22::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component__Transform_22::ensure_instantiated () const -> bool{
    [[maybe_unused]] auto self = this;
    bool _changed = false;
    return _changed;
}

inline auto Component__Transform_22::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component__Transform_22*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component__Transform_22*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component__Transform_22::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component__Transform_22::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component__Transform_22::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component__Transform_22::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component__Transform_22::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component__Transform_22*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 7 };
}

inline auto Component__Transform_22::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component__Transform_22::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    auto self = reinterpret_cast<const Component__Transform_22*>(component.instance);
    return self->field_model_index.get();
}

inline auto Component__Transform_22::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(1, 1, 0, 0, false), 
slint::private_api::make_item_node(2, 2, 0, 1, false), 
slint::private_api::make_item_node(0, 4, 1, 2, true), 
slint::private_api::make_item_node(0, 4, 1, 3, false) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component__Transform_22::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(TransformVTable),  offsetof(Component__Transform_22, field__Transform_22) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable),  offsetof(Component__Transform_22, field_rectangle_23) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(Component__Transform_22, field_text_25) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(Component__Transform_22, field_touch_26) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component__Transform_22::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component__Transform_22*>(component.instance)->layout_info(o);
}

inline auto Component__Transform_22::ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool{
    return reinterpret_cast<const Component__Transform_22*>(component.instance)->ensure_instantiated();
}

inline auto Component__Transform_22::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component__Transform_22*>(component.instance)->item_geometry(index);
}

inline auto Component__Transform_22::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component__Transform_22*>(component.instance)->accessible_role(index);
}

inline auto Component__Transform_22::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component__Transform_22*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component__Transform_22::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component__Transform_22*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component__Transform_22::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component__Transform_22*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component__Transform_22::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component__Transform_22::window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component__Transform_22*>(component.instance)->globals->window().window_handle();
}

inline auto Component__Transform_22::create (class MainWindow const * parent) -> slint::ComponentHandle<Component__Transform_22>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component__Transform_22>::make();
    auto self = const_cast<Component__Transform_22 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component__Transform_22>{ self_rc };
}

inline Component__Transform_22::~Component__Transform_22 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component__Transform_22::update_data ([[maybe_unused]] int i, [[maybe_unused]] const MusicInfo &data) const -> void{
    [[maybe_unused]] auto self = this;
    self->field_model_index.set(i);
    self->field_model_data.set(data);
}

inline auto Component__Transform_22::init () -> void{
    user_init();
}

inline auto Component__Transform_22::layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline auto Component__Transform_22::flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo{
    auto base = layout_item_info(o, child_index); return { base.constraint, 0.0f, 0.0f, -1.0f, slint::cbindgen_private::FlexboxLayoutAlignSelf::Auto, 0 };
}

inline const slint::private_api::ItemTreeVTable MainWindow::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, ensure_instantiated, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<MainWindow>, slint::private_api::dealloc };

inline auto MainWindow::fn_empty_16_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->fn_sidePanelScoller_17_layoutinfo_v_with_constraint(arg_0);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, self->field_root_15_sidePanelScoller_17_min_height.get(), layout_info.min_percent, layout_info.preferred, self->field_root_15_sidePanelScoller_17_vertical_stretch.get()); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->fn_mainView_54_layoutinfo_v_with_constraint(arg_0)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
}

inline auto MainWindow::fn_empty_57_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_slider_58.field_root_8_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, self->field_slider_58.field_root_8_min_height.get(), layout_info.min_percent, layout_info.preferred, self->field_slider_58.field_root_8_vertical_stretch.get()); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_59), slint::cbindgen_private::Orientation::Vertical, arg_0, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 38 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, self->field_root_15_text_59_max_height.get(), layout_info.min, self->field_root_15_text_59_min_height.get(), layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->field_image_60), slint::cbindgen_private::Orientation::Vertical, arg_0, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 39 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, self->field_root_15_image_60_max_height.get(), layout_info.min, self->field_root_15_image_60_min_height.get(), layout_info.preferred, layout_info.stretch); }()) ) }.data(), 3),self->field_root_15_empty_57_spacing.get(),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(self->field_root_15_empty_57_padding_top.get(), self->field_root_15_empty_57_padding_bottom.get()),slint::cbindgen_private::LayoutAlignment::Stretch);
}

inline auto MainWindow::fn_empty_62_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_slider_63.field_root_8_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, self->field_slider_63.field_root_8_min_height.get(), layout_info.min_percent, layout_info.preferred, self->field_slider_63.field_root_8_vertical_stretch.get()); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->fn_empty_64_layoutinfo_v_with_constraint(arg_0)) ) }.data(), 2),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
}

inline auto MainWindow::fn_empty_64_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->fn_rectangle_66_layoutinfo_v_with_constraint(arg_0)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->fn_rectangle_70_layoutinfo_v_with_constraint(arg_0)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
}

inline auto MainWindow::fn_horizontal_bar_42_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1));
}

inline auto MainWindow::fn_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return (slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->field_root_15), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) + self->fn_empty_16_layoutinfo_v_with_constraint(arg_0));
}

inline auto MainWindow::fn_mainView_54_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->fn_mainViewContainer_55_layoutinfo_v_with_constraint(arg_0));
}

inline auto MainWindow::fn_mainViewContainer_55_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->fn_rectangle_56_layoutinfo_v_with_constraint(arg_0);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, self->field_root_15_rectangle_56_max_height.get(), layout_info.min, self->field_root_15_rectangle_56_min_height.get(), layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->fn_rectangle_61_layoutinfo_v_with_constraint(arg_0);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, self->field_root_15_rectangle_61_max_height.get(), layout_info.min, self->field_root_15_rectangle_61_min_height.get(), layout_info.preferred, layout_info.stretch); }()) ) }.data(), 2),self->field_root_15_mainViewContainer_55_spacing.get(),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(self->field_root_15_mainViewContainer_55_padding_top.get(), self->field_root_15_mainViewContainer_55_padding_bottom.get()),self->field_root_15_mainViewContainer_55_alignment.get());
}

inline auto MainWindow::fn_rectangle_56_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->fn_empty_57_layoutinfo_v_with_constraint(arg_0));
}

inline auto MainWindow::fn_rectangle_61_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->fn_empty_62_layoutinfo_v_with_constraint(arg_0));
}

inline auto MainWindow::fn_rectangle_66_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->field_root_15_image_67_preferred_height.get(), 0));
}

inline auto MainWindow::fn_rectangle_70_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->field_root_15_image_71_preferred_height.get(), 0));
}

inline auto MainWindow::fn_sidePanelScoller_17_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->field_root_15_flickable_18_max_height.get(), 100, self->field_root_15_flickable_18_min_height.get(), 0, self->field_root_15_flickable_18_preferred_height.get(), self->field_root_15_flickable_18_vertical_stretch.get()));
}

inline auto MainWindow::fn_touch_area_32_update_saved_values () const -> void{
    [[maybe_unused]] auto self = this;
    self->field_root_15_touch_area_32_saved_values.set(std::make_tuple(float(self->field_root_15_vertical_bar_29_maximum.get()), float((- self->field_flickable_18.viewport_y.get())), float(self->field_touch_area_32.mouse_x.get()), float(self->field_touch_area_32.mouse_y.get())));
}

inline auto MainWindow::fn_touch_area_45_update_saved_values () const -> void{
    [[maybe_unused]] auto self = this;
    self->field_root_15_touch_area_45_saved_values.set(std::make_tuple(float(self->field_root_15_horizontal_bar_42_maximum.get()), float((- self->field_flickable_18.viewport_x.get())), float(self->field_touch_area_45.mouse_x.get()), float(self->field_touch_area_45.mouse_y.get())));
}

inline auto MainWindow::fn_vertical_bar_29_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1));
}

inline auto MainWindow::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    this->field_shufflebutton_21.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 7 - 1, tree_index_of_first_child + 9 - 1);
    this->field_slider_58.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 37 - 1, tree_index_of_first_child + 40 - 1);
    this->field_slider_63.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 48 - 1, tree_index_of_first_child + 50 - 1);
    self->field_root_15__Transform_65_transform_scale.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_touch_68.has_hover.get() ? 1.05 : 1);
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 100, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0.42, 0, 0.58, 1), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_root_15__Transform_69_transform_scale.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_touch_72.has_hover.get() ? 1.05 : 1);
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 100, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0.42, 0, 0.58, 1), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_root_15.background.set(slint::Brush(slint::Color::from_argb_uint8(std::clamp(static_cast<float>(1) * 255., 0., 255.), std::clamp(static_cast<int>(70), 0, 255), std::clamp(static_cast<int>(70), 0, 255), std::clamp(static_cast<int>(70), 0, 255))));
    self->field_root_15_current_volume.set(slint::private_api::saturating_float_to_int(100));
    self->field_root_15_down_scroll_button_38_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_down_scroll_button_38.pressed.get() ? 1 : (self->field_down_scroll_button_38.has_hover.get() ? 2 : 0));
                        });
    self->field_root_15_down_scroll_button_51_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_down_scroll_button_51.pressed.get() ? 1 : (self->field_down_scroll_button_51.has_hover.get() ? 2 : 0));
                        });
    self->field_root_15_empty_16_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_sidePanelScoller_17_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, 30, layout_info.min, 30, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_mainViewContainer_55_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), 800, 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_16_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_sidePanelScoller_17_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, 30, layout_info.min, 30, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_mainViewContainer_55_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 1); }()) ) }.data(), 2),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_16_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_sidePanelScoller_17_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, 50, layout_info.min_percent, layout_info.preferred, 1); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_mainViewContainer_55_layoutinfo_v.get())) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_57_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_slider_58.field_root_8_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, (self->field_slider_58.field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? 0 : 20), layout_info.min_percent, layout_info.preferred, (self->field_slider_58.field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? 1 : 0)); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_59), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 38 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, 10, layout_info.min, 10, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->field_image_60), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 39 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, 90, layout_info.min, 90, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 3), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(20, 20), self->field_root_15_mainViewContainer_55_layout_cache.get()[1], 10),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_57_layout_cache_ortho.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout_ortho([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3){ slint::cbindgen_private::BoxLayoutOrthoData o{}; o.cells = a_0; o.cross_axis_alignment = a_1; o.padding = a_2; o.size = a_3; return o; }(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_slider_58.field_root_8_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, 40, layout_info.min, 40, layout_info.preferred, (self->field_slider_58.field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? 0 : 1)); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_59), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 38 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, 90, layout_info.min, 90, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->field_image_60), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 39 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, 90, layout_info.min, 90, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 3), slint::cbindgen_private::CrossAxisAlignment::Center, [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), self->field_root_15_rectangle_56_width.get()),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_57_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_slider_58.field_root_8_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, 40, layout_info.min, 40, layout_info.preferred, (self->field_slider_58.field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? 0 : 1)); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_59), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 38 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, 90, layout_info.min, 90, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->field_image_60), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 39 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, 90, layout_info.min, 90, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 3),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_57_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 3>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_slider_58.field_root_8_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, (self->field_slider_58.field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? 0 : 20), layout_info.min_percent, layout_info.preferred, (self->field_slider_58.field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? 1 : 0)); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_59), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 38 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, 10, layout_info.min, 10, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->field_image_60), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 39 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, 90, layout_info.min, 90, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 3),10,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(20, 20),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_57_padding_bottom.set(20);
    self->field_root_15_empty_57_padding_top.set(20);
    self->field_root_15_empty_57_spacing.set(10);
    self->field_root_15_empty_62_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_slider_63.field_root_8_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, (self->field_slider_63.field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? 0 : 20), layout_info.min_percent, layout_info.preferred, (self->field_slider_63.field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? 1 : 0)); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_64_layoutinfo_v.get()) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), self->field_root_15_mainViewContainer_55_layout_cache.get()[3], 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_62_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_slider_63.field_root_8_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, (self->field_slider_63.field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? 20 : 0), layout_info.min_percent, layout_info.preferred, (self->field_slider_63.field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? 0 : 1)); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_64_layoutinfo_h.get()) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_62_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_slider_63.field_root_8_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, (self->field_slider_63.field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? 0 : 20), layout_info.min_percent, layout_info.preferred, (self->field_slider_63.field_base_14.field_root_5_orientation.get() == slint::cbindgen_private::Orientation::Vertical ? 1 : 0)); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_15_empty_64_layoutinfo_v.get()) ) }.data(), 2),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_62_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_mainViewContainer_55_layout_cache_ortho.get()[3];
                        });
    self->field_root_15_empty_64_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_62_layout_cache.get()[3];
                        });
    self->field_root_15_empty_64_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Center, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->field_root_15_image_67_preferred_width.get(), 0));;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 0); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->field_root_15_image_71_preferred_width.get(), 0));;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 0); }()) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), self->field_root_15_empty_62_width.get(), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_64_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->field_root_15_image_67_preferred_width.get(), 0));;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 0); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->field_root_15_image_71_preferred_width.get(), 0));;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, layout_info.preferred, 0); }()) ) }.data(), 2),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Center);
                        });
    self->field_root_15_empty_64_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->field_root_15_image_67_preferred_height.get(), 0))) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, self->field_root_15_image_71_preferred_height.get(), 0))) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_flickable_18_height.set(600);
    self->field_root_15_flickable_18_horizontal_stretch.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(FlickableVTable), const_cast<slint::cbindgen_private::Flickable*>(&self->field_flickable_18), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 3 - 1).stretch;
                        });
    self->field_root_15_flickable_18_max_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(FlickableVTable), const_cast<slint::cbindgen_private::Flickable*>(&self->field_flickable_18), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 3 - 1).max;
                        });
    self->field_root_15_flickable_18_max_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(FlickableVTable), const_cast<slint::cbindgen_private::Flickable*>(&self->field_flickable_18), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 3 - 1).max;
                        });
    self->field_root_15_flickable_18_min_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(FlickableVTable), const_cast<slint::cbindgen_private::Flickable*>(&self->field_flickable_18), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 3 - 1).min;
                        });
    self->field_root_15_flickable_18_min_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(FlickableVTable), const_cast<slint::cbindgen_private::Flickable*>(&self->field_flickable_18), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 3 - 1).min;
                        });
    self->field_root_15_flickable_18_preferred_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(FlickableVTable), const_cast<slint::cbindgen_private::Flickable*>(&self->field_flickable_18), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 3 - 1).preferred;
                        });
    self->field_root_15_flickable_18_preferred_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(FlickableVTable), const_cast<slint::cbindgen_private::Flickable*>(&self->field_flickable_18), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 3 - 1).preferred;
                        });
    self->field_root_15_flickable_18_vertical_stretch.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(FlickableVTable), const_cast<slint::cbindgen_private::Flickable*>(&self->field_flickable_18), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 3 - 1).stretch;
                        });
    self->field_root_15_flickable_18_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_16_layout_cache.get()[1];
                        });
    self->field_root_15.height.set(600);
    self->field_root_15_horizontal_bar_42_maximum.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_flickable_18.viewport_width.get() -(float) self->field_root_15_flickable_18_width.get());
                        });
    self->field_root_15_horizontal_bar_42_policy.set(slint::cbindgen_private::ScrollBarPolicy::AsNeeded);
    self->field_root_15_horizontal_bar_42_scrolled.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->field_flickable_18.flicked.call();
                });
    self->field_root_15_horizontal_bar_42_size.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_horizontal_bar_42_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? 6 : 2);
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_root_15_horizontal_bar_42_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_touch_area_45.has_hover.get() || self->field_down_scroll_button_51.has_hover.get()) || self->field_up_scroll_button_47.has_hover.get() ? 1 : 0);
                        });
    self->field_root_15_horizontal_bar_42_visible.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_15_horizontal_bar_42_policy = self->field_root_15_horizontal_bar_42_policy.get();;return ((tmp_root_15_horizontal_bar_42_policy == slint::cbindgen_private::ScrollBarPolicy::AlwaysOn) || ((tmp_root_15_horizontal_bar_42_policy == slint::cbindgen_private::ScrollBarPolicy::AsNeeded) && (self->field_root_15_horizontal_bar_42_maximum.get() > 0))); }();
                        });
    self->field_root_15_horizontal_bar_42_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_root_15_vertical_bar_29_visible.get() ? (self->field_root_15_empty_16_layout_cache.get()[1] -(float) 14) : self->field_root_15_empty_16_layout_cache.get()[1]);
                        });
    self->field_root_15_image_60_max_height.set(90);
    self->field_root_15_image_60_min_height.set(90);
    self->field_root_15_image_67_preferred_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->field_image_67), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 61 - 1).preferred;
                        });
    self->field_root_15_image_67_preferred_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->field_image_67), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 61 - 1).preferred;
                        });
    self->field_root_15_image_71_preferred_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->field_image_71), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 64 - 1).preferred;
                        });
    self->field_root_15_image_71_preferred_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->field_image_71), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 64 - 1).preferred;
                        });
    self->field_root_15_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->field_root_15), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) + self->field_root_15_empty_16_layoutinfo_h.get());
                        });
    self->field_root_15_mainView_54_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_16_layout_cache.get()[3];
                        });
    self->field_root_15_mainViewContainer_55_alignment.set(slint::cbindgen_private::LayoutAlignment::Start);
    self->field_root_15_mainViewContainer_55_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Start, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_57_layoutinfo_v.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, 85, layout_info.min, 85, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_62_layoutinfo_v.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, 15, layout_info.min, 15, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(20, 20), 600, 20),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_mainViewContainer_55_layout_cache_ortho.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout_ortho([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3){ slint::cbindgen_private::BoxLayoutOrthoData o{}; o.cells = a_0; o.cross_axis_alignment = a_1; o.padding = a_2; o.size = a_3; return o; }(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_57_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, 90, layout_info.min, 90, layout_info.preferred, 0); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_62_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, 90, layout_info.min, 90, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 2), slint::cbindgen_private::CrossAxisAlignment::Center, [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), self->field_root_15_mainView_54_width.get()),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_mainViewContainer_55_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_57_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, 90, layout_info.min, 90, layout_info.preferred, 0); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_62_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, 90, layout_info.min, 90, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_mainViewContainer_55_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_57_layoutinfo_v.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, 85, layout_info.min, 85, layout_info.preferred, layout_info.stretch); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_15_empty_62_layoutinfo_v.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, 15, layout_info.min, 15, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 2),20,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(20, 20),slint::cbindgen_private::LayoutAlignment::Start);
                        });
    self->field_root_15_mainViewContainer_55_padding_bottom.set(20);
    self->field_root_15_mainViewContainer_55_padding_top.set(20);
    self->field_root_15_mainViewContainer_55_spacing.set(20);
    self->field_root_15_pause.set(true);
    self->field_root_15_rectangle_56_max_height.set(85);
    self->field_root_15_rectangle_56_min_height.set(85);
    self->field_root_15_rectangle_56_song_name.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_current_song.get().name;
                        });
    self->field_root_15_rectangle_56_volume_changed.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->field_root_15_current_volume.set(self->field_root_15_rectangle_56_volume.get());
                });
    self->field_root_15_rectangle_56_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_mainViewContainer_55_layout_cache_ortho.get()[1];
                        });
    self->field_root_15_rectangle_61_max_height.set(15);
    self->field_root_15_rectangle_61_min_height.set(15);
    self->field_root_15_rectangle_61_pause_clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    [&]{ self->field_root_15_pause.set((! self->field_root_15_pause.get()));self->field_root_15_pause.set(self->field_root_15_pause.get()); }();
                });
    self->field_root_15_rectangle_61_skip_clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    (void)self->callback_tracker_root_15_skip.get(), self->field_root_15_skip.call();
                });
    self->field_root_15_rectangle_61_slider_released.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    [&]{ self->field_slider_63.field_base_14.field_root_5_value.set(self->field_root_15_rectangle_61_slider_val.get());(void)self->callback_tracker_root_15_slider_drag.get(), self->field_root_15_slider_drag.call(); }();
                });
    self->field_root_15_rectangle_66_clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->field_root_15_rectangle_61_pause_clicked.call();
                });
    self->field_root_15_rectangle_70_clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->field_root_15_rectangle_61_skip_clicked.call();
                });
    self->field_root_15_shuffle_mode.set(false);
    self->field_root_15_sidePanelContainer_20_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ std::array<int, 2> repeated_indices_array;  std::vector<slint::cbindgen_private::LayoutItemInfo> cells_vector;cells_vector.push_back({ [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_shufflebutton_21.field_root_1_empty_2_layoutinfo_v.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(20, layout_info.max_percent, 20, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) });self->repeater_0.track_instance_changes();repeated_indices_array[0] = cells_vector.size();repeated_indices_array[1] = self->repeater_0.len();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Vertical, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_0.len());
                                }slint::cbindgen_private::Slice<int> repeated_indices = slint::private_api::make_slice(std::span(repeated_indices_array)); slint::cbindgen_private::Slice<slint::cbindgen_private::LayoutItemInfo>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, cells, [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(20, 20), (1 * self->field_root_15_flickable_18_height.get()), 15),repeated_indices); }();
                        });
    self->field_root_15_sidePanelContainer_20_layout_cache_ortho.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ std::array<int, 2> repeated_indices_array;  std::vector<slint::cbindgen_private::LayoutItemInfo> cells_vector;cells_vector.push_back({ [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_shufflebutton_21.field_root_1_empty_2_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(90, layout_info.max_percent, 90, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) });self->repeater_0.track_instance_changes();repeated_indices_array[0] = cells_vector.size();repeated_indices_array[1] = self->repeater_0.len();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Horizontal, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_0.len());
                                }slint::cbindgen_private::Slice<int> repeated_indices = slint::private_api::make_slice(std::span(repeated_indices_array)); slint::cbindgen_private::Slice<slint::cbindgen_private::LayoutItemInfo>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::solve_box_layout_ortho([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3){ slint::cbindgen_private::BoxLayoutOrthoData o{}; o.cells = a_0; o.cross_axis_alignment = a_1; o.padding = a_2; o.size = a_3; return o; }(cells, slint::cbindgen_private::CrossAxisAlignment::Center, [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), (1 * self->field_root_15_flickable_18_width.get())),repeated_indices); }();
                        });
    self->field_root_15_sidePanelContainer_20_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{   std::vector<slint::cbindgen_private::LayoutItemInfo> cells_vector;cells_vector.push_back({ [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_shufflebutton_21.field_root_1_empty_2_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(90, layout_info.max_percent, 90, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) });self->repeater_0.track_instance_changes();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Horizontal, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_0.len());
                                } slint::cbindgen_private::Slice<slint::cbindgen_private::LayoutItemInfo>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::box_layout_info_ortho(cells,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0)); }();
                        });
    self->field_root_15_sidePanelContainer_20_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{   std::vector<slint::cbindgen_private::LayoutItemInfo> cells_vector;cells_vector.push_back({ [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_shufflebutton_21.field_root_1_empty_2_layoutinfo_v.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(20, layout_info.max_percent, 20, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) });self->repeater_0.track_instance_changes();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Vertical, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_0.len());
                                } slint::cbindgen_private::Slice<slint::cbindgen_private::LayoutItemInfo>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::box_layout_info(cells,15,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(20, 20),slint::cbindgen_private::LayoutAlignment::Stretch); }();
                        });
    self->field_root_15_sidePanelScoller_17_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->field_root_15_flickable_18_max_width.get(), 100, self->field_root_15_flickable_18_min_width.get(), 0, self->field_root_15_flickable_18_preferred_width.get(), self->field_root_15_flickable_18_horizontal_stretch.get()));
                        });
    self->field_root_15_sidePanelScoller_17_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->field_root_15_flickable_18_max_height.get(), 100, self->field_root_15_flickable_18_min_height.get(), 0, self->field_root_15_flickable_18_preferred_height.get(), self->field_root_15_flickable_18_vertical_stretch.get()));
                        });
    self->field_root_15_sidePanelScoller_17_min_height.set(50);
    self->field_root_15_sidePanelScoller_17_vertical_scrollbar_policy.set(slint::cbindgen_private::ScrollBarPolicy::AsNeeded);
    self->field_root_15_sidePanelScoller_17_vertical_stretch.set(1);
    self->field_root_15_text_59_max_height.set(10);
    self->field_root_15_text_59_min_height.set(10);
    self->field_root_15_thumb_31_height.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_15_vertical_bar_29_maximum = self->field_root_15_vertical_bar_29_maximum.get();;return ((tmp_root_15_vertical_bar_29_maximum <= (0 /(float) self->globals->window().window_handle().scale_factor()) ? 0 : [&]{ [[maybe_unused]] auto tmp_root_15_vertical_bar_29_page_size = self->field_root_15_flickable_18_height.get();;return (std::max<float>(std::min<float>(16, (self->field_root_15_horizontal_bar_42_visible.get() ? 586 : 600)), (((self->field_root_15_horizontal_bar_42_visible.get() ? 586 : 600) -(float) 32) * (tmp_root_15_vertical_bar_29_page_size /(float) (tmp_root_15_vertical_bar_29_maximum + tmp_root_15_vertical_bar_29_page_size)))) * self->globals->window().window_handle().scale_factor()); }()) /(float) self->globals->window().window_handle().scale_factor()); }();
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_root_15_thumb_31_width.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_vertical_bar_29_size.get();
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_root_15_thumb_31_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (16 + ((((self->field_root_15_horizontal_bar_42_visible.get() ? 586 : 600) -(float) 32) -(float) self->field_root_15_thumb_31_height.get()) * ((- self->field_flickable_18.viewport_y.get()) /(float) self->field_root_15_vertical_bar_29_maximum.get())));
                        });
    self->field_root_15_thumb_44_height.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_horizontal_bar_42_size.get();
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_root_15_thumb_44_width.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_15_horizontal_bar_42_maximum = self->field_root_15_horizontal_bar_42_maximum.get();;return ((tmp_root_15_horizontal_bar_42_maximum <= (0 /(float) self->globals->window().window_handle().scale_factor()) ? 0 : [&]{ [[maybe_unused]] auto tmp_root_15_horizontal_bar_42_page_size = self->field_root_15_flickable_18_width.get();;return (std::max<float>(std::min<float>(16, self->field_root_15_horizontal_bar_42_width.get()), (((self->field_root_15_horizontal_bar_42_width.get() -(float) 32) * tmp_root_15_horizontal_bar_42_page_size) /(float) (tmp_root_15_horizontal_bar_42_maximum + tmp_root_15_horizontal_bar_42_page_size))) * self->globals->window().window_handle().scale_factor()); }()) /(float) self->globals->window().window_handle().scale_factor()); }();
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_root_15_thumb_44_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (16 + (((self->field_root_15_horizontal_bar_42_width.get() -(float) 32) -(float) self->field_root_15_thumb_44_width.get()) * ((- self->field_flickable_18.viewport_x.get()) /(float) self->field_root_15_horizontal_bar_42_maximum.get())));
                        });
    self->field_root_15.title.set(slint::SharedString(u8"Slint Window"));
    self->field_root_15_up_scroll_button_34_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_up_scroll_button_34.pressed.get() ? 1 : (self->field_up_scroll_button_34.has_hover.get() ? 2 : 0));
                        });
    self->field_root_15_up_scroll_button_47_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_up_scroll_button_47.pressed.get() ? 1 : (self->field_up_scroll_button_47.has_hover.get() ? 2 : 0));
                        });
    self->field_root_15_vertical_bar_29_maximum.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_flickable_18.viewport_height.get() -(float) self->field_root_15_flickable_18_height.get());
                        });
    self->field_root_15_vertical_bar_29_scrolled.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->field_flickable_18.flicked.call();
                });
    self->field_root_15_vertical_bar_29_size.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_vertical_bar_29_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? 6 : 2);
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_root_15_vertical_bar_29_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_touch_area_32.has_hover.get() || self->field_down_scroll_button_38.has_hover.get()) || self->field_up_scroll_button_34.has_hover.get() ? 1 : 0);
                        });
    self->field_root_15_vertical_bar_29_visible.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_15_sidePanelScoller_17_vertical_scrollbar_policy = self->field_root_15_sidePanelScoller_17_vertical_scrollbar_policy.get();;return ((tmp_root_15_sidePanelScoller_17_vertical_scrollbar_policy == slint::cbindgen_private::ScrollBarPolicy::AlwaysOn) || ((tmp_root_15_sidePanelScoller_17_vertical_scrollbar_policy == slint::cbindgen_private::ScrollBarPolicy::AsNeeded) && (self->field_root_15_vertical_bar_29_maximum.get() > 0))); }();
                        });
    self->field_root_15.width.set(800);
    self->field_flickable_18.interactive.set(false);
    self->field_flickable_18.viewport_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->field_root_15_flickable_18_height.get(), self->field_root_15_sidePanelContainer_20_layoutinfo_v.get().min);
                        });
    self->field_flickable_18.viewport_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->field_root_15_flickable_18_width.get(), self->field_root_15_sidePanelContainer_20_layoutinfo_h.get().min);
                        });
    self->field_flickable_18.viewport_x.set(0);
    self->field_flickable_18.viewport_y.set(0);
    self->field_shufflebutton_21.field_root_1.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush((self->field_root_15_shuffle_mode.get() ? slint::Color::from_argb_encoded(+4.278222848e9) : (self->field_shufflebutton_21.field_touch_4.has_hover.get() ? slint::Color::from_argb_encoded(+4.289309097e9) : slint::Color::from_argb_uint8(std::clamp(static_cast<float>(1) * 255., 0., 255.), std::clamp(static_cast<int>(40), 0, 255), std::clamp(static_cast<int>(40), 0, 255), std::clamp(static_cast<int>(40), 0, 255)))));
                        });
    self->field_shufflebutton_21.field_root_1_shuffle_clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->field_root_15_shuffle_mode.set((! self->field_root_15_shuffle_mode.get()));
                });
    self->field_shufflebutton_21.field_root_1_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_sidePanelContainer_20_layout_cache_ortho.get()[0];
                        });
    self->field_shufflebutton_21.field_root_1_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_sidePanelContainer_20_layout_cache.get()[0];
                        });
    self->field_vertical_bar_visibility_28.clip.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (! self->field_root_15_vertical_bar_29_visible.get());
                        });
    self->field_vertical_bar_29.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_vertical_bar_29_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_74->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+4.281084972e9) : slint::Color::from_argb_encoded(+4.2939804e9))) : slint::Brush(slint::Color::from_argb_encoded(0)));
                        });
    self->field_vertical_bar_29.border_radius.set(7);
    self->field_vertical_bar_29.border_width.set(1);
    self->field_vertical_bar_clip_30.border_bottom_left_radius.set(7);
    self->field_vertical_bar_clip_30.border_bottom_right_radius.set(7);
    self->field_vertical_bar_clip_30.border_top_left_radius.set(7);
    self->field_vertical_bar_clip_30.border_top_right_radius.set(7);
    self->field_vertical_bar_clip_30.border_width.set(1);
    self->field_vertical_bar_clip_30.clip.set(true);
    self->field_thumb_31.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush((self->globals->global_FluentPalette_74->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(+1.92937984e9)));
                        });
    self->field_thumb_31.border_radius.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_root_15_thumb_31_width.get() /(float) 2);
                        });
    self->field_touch_area_32.enabled.set(true);
    self->field_touch_area_32.moved.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    if (true && self->field_touch_area_32.pressed.get()) { [&]{ if (std::abs(float(std::get<0>(self->field_root_15_touch_area_32_saved_values.get()) - self->field_root_15_vertical_bar_29_maximum.get())) >= std::numeric_limits<float>::epsilon()) { self->fn_touch_area_32_update_saved_values(); } else { ; };self->field_flickable_18.viewport_y.set((- std::max<float>(0, std::min<float>(self->field_root_15_vertical_bar_29_maximum.get(), (std::get<1>(self->field_root_15_touch_area_32_saved_values.get()) + (false ? ((self->field_touch_area_32.mouse_x.get() -(float) std::get<2>(self->field_root_15_touch_area_32_saved_values.get())) * (self->field_root_15_vertical_bar_29_maximum.get() /(float) (((self->field_root_15_horizontal_bar_42_visible.get() ? 586 : 600) -(float) 32) -(float) self->field_root_15_thumb_31_width.get()))) : ((self->field_touch_area_32.mouse_y.get() -(float) std::get<3>(self->field_root_15_touch_area_32_saved_values.get())) * (self->field_root_15_vertical_bar_29_maximum.get() /(float) (((self->field_root_15_horizontal_bar_42_visible.get() ? 586 : 600) -(float) 32) -(float) self->field_root_15_thumb_31_height.get())))))))));self->field_root_15_vertical_bar_29_scrolled.call(); }(); } else { ; };
                });
    self->field_touch_area_32.pointer_event.set_handler(
                [this]([[maybe_unused]] slint::language::PointerEvent arg_0) {
                    [[maybe_unused]] auto self = this;
                    if ((arg_0.button == slint::cbindgen_private::PointerEventButton::Left) && (arg_0.kind == slint::cbindgen_private::PointerEventKind::Down)) { self->fn_touch_area_32_update_saved_values(); } else { ; };
                });
    self->field_touch_area_32.scroll_event.set_handler(
                [this]([[maybe_unused]] slint::language::PointerScrollEvent arg_0) {
                    [[maybe_unused]] auto self = this;
                    return [&]{ [[maybe_unused]] auto returned_expression1 = [&]{ [[maybe_unused]] auto return_check_merge1 = (false && (std::abs(float(arg_0.delta_x - 0)) >= std::numeric_limits<float>::epsilon()) ? std::make_tuple(false, [&]{ self->field_flickable_18.viewport_y.set(std::max<float>((- self->field_root_15_vertical_bar_29_maximum.get()), std::min<float>(0, (self->field_flickable_18.viewport_y.get() + arg_0.delta_x))));return slint::cbindgen_private::EventResult::Accept; }()) : (! ((! false) && (std::abs(float(arg_0.delta_y - 0)) >= std::numeric_limits<float>::epsilon())) ? std::make_tuple(true, slint::cbindgen_private::EventResult::Reject) : std::make_tuple(false, [&]{ self->field_flickable_18.viewport_y.set(std::max<float>((- self->field_root_15_vertical_bar_29_maximum.get()), std::min<float>(0, (self->field_flickable_18.viewport_y.get() + arg_0.delta_y))));return slint::cbindgen_private::EventResult::Accept; }())));;return (std::get<0>(return_check_merge1) ? std::make_tuple(slint::cbindgen_private::EventResult::Reject, true, slint::cbindgen_private::EventResult::Reject) : std::make_tuple(slint::cbindgen_private::EventResult::Reject, false, std::get<1>(return_check_merge1))); }();;return (std::get<1>(returned_expression1) ? std::get<0>(returned_expression1) : std::get<2>(returned_expression1)); }();
                });
    self->field_up_scroll_button_Opacity_33.opacity.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_vertical_bar_29_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? 1 : 0);
                        });
    self->field_up_scroll_button_34.clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->field_flickable_18.viewport_y.set(std::min<float>(0, (self->field_flickable_18.viewport_y.get() + 10)));
                });
    self->field_up_scroll_button_34.enabled.set(true);
    self->field_icon_Opacity_35.opacity.set(1);
    self->field_icon_36.colorize.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_up_scroll_button_34_state.get() - 2)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_74->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+3.388997631e9) : slint::Color::from_argb_encoded(+2.566914048e9))) : slint::Brush((self->globals->global_FluentPalette_74->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(+1.92937984e9))));
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_icon_36.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto image_implicit_size = slint::private_api::load_image_from_embedded_data(slint_embedded_resource_2, "svg").size();;return (image_implicit_size.height /(float) image_implicit_size.width); }() * self->field_icon_36.width.get());
                        });
    self->field_icon_36.source.set(slint::private_api::load_image_from_embedded_data(slint_embedded_resource_2, "svg"));
    self->field_icon_36.width.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_up_scroll_button_34_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? 6 : 8);
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_down_scroll_button_Opacity_37.opacity.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_vertical_bar_29_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? 1 : 0);
                        });
    self->field_down_scroll_button_38.clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->field_flickable_18.viewport_y.set(std::max<float>((- self->field_root_15_vertical_bar_29_maximum.get()), (self->field_flickable_18.viewport_y.get() -(float) 10)));
                });
    self->field_down_scroll_button_38.enabled.set(true);
    self->field_icon_Opacity_39.opacity.set(1);
    self->field_icon_40.colorize.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_down_scroll_button_38_state.get() - 2)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_74->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+3.388997631e9) : slint::Color::from_argb_encoded(+2.566914048e9))) : slint::Brush((self->globals->global_FluentPalette_74->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(+1.92937984e9))));
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_icon_40.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto image_implicit_size = slint::private_api::load_image_from_embedded_data(slint_embedded_resource_0, "svg").size();;return (image_implicit_size.height /(float) image_implicit_size.width); }() * self->field_icon_40.width.get());
                        });
    self->field_icon_40.source.set(slint::private_api::load_image_from_embedded_data(slint_embedded_resource_0, "svg"));
    self->field_icon_40.width.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_down_scroll_button_38_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? 6 : 8);
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_horizontal_bar_visibility_41.clip.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (! self->field_root_15_horizontal_bar_42_visible.get());
                        });
    self->field_horizontal_bar_42.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_horizontal_bar_42_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_74->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+4.281084972e9) : slint::Color::from_argb_encoded(+4.2939804e9))) : slint::Brush(slint::Color::from_argb_encoded(0)));
                        });
    self->field_horizontal_bar_42.border_radius.set(7);
    self->field_horizontal_bar_42.border_width.set(1);
    self->field_horizontal_bar_clip_43.border_bottom_left_radius.set(7);
    self->field_horizontal_bar_clip_43.border_bottom_right_radius.set(7);
    self->field_horizontal_bar_clip_43.border_top_left_radius.set(7);
    self->field_horizontal_bar_clip_43.border_top_right_radius.set(7);
    self->field_horizontal_bar_clip_43.border_width.set(1);
    self->field_horizontal_bar_clip_43.clip.set(true);
    self->field_thumb_44.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush((self->globals->global_FluentPalette_74->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(+1.92937984e9)));
                        });
    self->field_thumb_44.border_radius.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_root_15_thumb_44_height.get() /(float) 2);
                        });
    self->field_touch_area_45.enabled.set(true);
    self->field_touch_area_45.moved.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    if (true && self->field_touch_area_45.pressed.get()) { [&]{ if (std::abs(float(std::get<0>(self->field_root_15_touch_area_45_saved_values.get()) - self->field_root_15_horizontal_bar_42_maximum.get())) >= std::numeric_limits<float>::epsilon()) { self->fn_touch_area_45_update_saved_values(); } else { ; };self->field_flickable_18.viewport_x.set((- std::max<float>(0, std::min<float>(self->field_root_15_horizontal_bar_42_maximum.get(), (std::get<1>(self->field_root_15_touch_area_45_saved_values.get()) + (true ? ((self->field_touch_area_45.mouse_x.get() -(float) std::get<2>(self->field_root_15_touch_area_45_saved_values.get())) * (self->field_root_15_horizontal_bar_42_maximum.get() /(float) ((self->field_root_15_horizontal_bar_42_width.get() -(float) 32) -(float) self->field_root_15_thumb_44_width.get()))) : ((self->field_touch_area_45.mouse_y.get() -(float) std::get<3>(self->field_root_15_touch_area_45_saved_values.get())) * (self->field_root_15_horizontal_bar_42_maximum.get() /(float) ((self->field_root_15_horizontal_bar_42_width.get() -(float) 32) -(float) self->field_root_15_thumb_44_height.get())))))))));self->field_root_15_horizontal_bar_42_scrolled.call(); }(); } else { ; };
                });
    self->field_touch_area_45.pointer_event.set_handler(
                [this]([[maybe_unused]] slint::language::PointerEvent arg_0) {
                    [[maybe_unused]] auto self = this;
                    if ((arg_0.button == slint::cbindgen_private::PointerEventButton::Left) && (arg_0.kind == slint::cbindgen_private::PointerEventKind::Down)) { self->fn_touch_area_45_update_saved_values(); } else { ; };
                });
    self->field_touch_area_45.scroll_event.set_handler(
                [this]([[maybe_unused]] slint::language::PointerScrollEvent arg_0) {
                    [[maybe_unused]] auto self = this;
                    return [&]{ [[maybe_unused]] auto returned_expression2 = [&]{ [[maybe_unused]] auto return_check_merge2 = (true && (std::abs(float(arg_0.delta_x - 0)) >= std::numeric_limits<float>::epsilon()) ? std::make_tuple(false, [&]{ self->field_flickable_18.viewport_x.set(std::max<float>((- self->field_root_15_horizontal_bar_42_maximum.get()), std::min<float>(0, (self->field_flickable_18.viewport_x.get() + arg_0.delta_x))));return slint::cbindgen_private::EventResult::Accept; }()) : (! ((! true) && (std::abs(float(arg_0.delta_y - 0)) >= std::numeric_limits<float>::epsilon())) ? std::make_tuple(true, slint::cbindgen_private::EventResult::Reject) : std::make_tuple(false, [&]{ self->field_flickable_18.viewport_x.set(std::max<float>((- self->field_root_15_horizontal_bar_42_maximum.get()), std::min<float>(0, (self->field_flickable_18.viewport_x.get() + arg_0.delta_y))));return slint::cbindgen_private::EventResult::Accept; }())));;return (std::get<0>(return_check_merge2) ? std::make_tuple(slint::cbindgen_private::EventResult::Reject, true, slint::cbindgen_private::EventResult::Reject) : std::make_tuple(slint::cbindgen_private::EventResult::Reject, false, std::get<1>(return_check_merge2))); }();;return (std::get<1>(returned_expression2) ? std::get<0>(returned_expression2) : std::get<2>(returned_expression2)); }();
                });
    self->field_up_scroll_button_Opacity_46.opacity.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_horizontal_bar_42_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? 1 : 0);
                        });
    self->field_up_scroll_button_47.clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->field_flickable_18.viewport_x.set(std::min<float>(0, (self->field_flickable_18.viewport_x.get() + 10)));
                });
    self->field_up_scroll_button_47.enabled.set(true);
    self->field_icon_Opacity_48.opacity.set(1);
    self->field_icon_49.colorize.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_up_scroll_button_47_state.get() - 2)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_74->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+3.388997631e9) : slint::Color::from_argb_encoded(+2.566914048e9))) : slint::Brush((self->globals->global_FluentPalette_74->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(+1.92937984e9))));
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_icon_49.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto image_implicit_size = slint::private_api::load_image_from_embedded_data(slint_embedded_resource_3, "svg").size();;return (image_implicit_size.height /(float) image_implicit_size.width); }() * self->field_icon_49.width.get());
                        });
    self->field_icon_49.source.set(slint::private_api::load_image_from_embedded_data(slint_embedded_resource_3, "svg"));
    self->field_icon_49.width.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_up_scroll_button_47_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? 4 : 6);
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_down_scroll_button_Opacity_50.opacity.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_horizontal_bar_42_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? 1 : 0);
                        });
    self->field_down_scroll_button_51.clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->field_flickable_18.viewport_x.set(std::max<float>((- self->field_root_15_horizontal_bar_42_maximum.get()), (self->field_flickable_18.viewport_x.get() -(float) 10)));
                });
    self->field_down_scroll_button_51.enabled.set(true);
    self->field_icon_Opacity_52.opacity.set(1);
    self->field_icon_53.colorize.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_down_scroll_button_51_state.get() - 2)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_74->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+3.388997631e9) : slint::Color::from_argb_encoded(+2.566914048e9))) : slint::Brush((self->globals->global_FluentPalette_74->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(+1.92937984e9))));
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_icon_53.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto image_implicit_size = slint::private_api::load_image_from_embedded_data(slint_embedded_resource_1, "svg").size();;return (image_implicit_size.height /(float) image_implicit_size.width); }() * self->field_icon_53.width.get());
                        });
    self->field_icon_53.source.set(slint::private_api::load_image_from_embedded_data(slint_embedded_resource_1, "svg"));
    self->field_icon_53.width.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_down_scroll_button_51_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? 4 : 6);
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_mainView_54.background.set(slint::Brush(slint::Color::from_argb_uint8(std::clamp(static_cast<float>(1) * 255., 0., 255.), std::clamp(static_cast<int>(40), 0, 255), std::clamp(static_cast<int>(40), 0, 255), std::clamp(static_cast<int>(40), 0, 255))));
    self->field_rectangle_56.background.set(slint::Brush(slint::Color::from_argb_uint8(std::clamp(static_cast<float>(1) * 255., 0., 255.), std::clamp(static_cast<int>(70), 0, 255), std::clamp(static_cast<int>(70), 0, 255), std::clamp(static_cast<int>(70), 0, 255))));
    self->field_rectangle_56.border_color.set(slint::Brush(slint::Color::from_argb_uint8(std::clamp(static_cast<float>(1) * 255., 0., 255.), std::clamp(static_cast<int>(70), 0, 255), std::clamp(static_cast<int>(70), 0, 255), std::clamp(static_cast<int>(70), 0, 255))));
    self->field_rectangle_56.border_radius.set(20);
    self->field_rectangle_56.border_width.set(10);
    self->field_slider_58.field_base_14.field_root_5_changed.set_handler(
                [this]([[maybe_unused]] float arg_0) {
                    [[maybe_unused]] auto self = this;
                    [&]{ self->field_root_15_rectangle_56_volume.set(slint::private_api::saturating_float_to_int(self->field_slider_58.field_base_14.field_root_5_value.get()));self->field_root_15_rectangle_56_volume_changed.call(); }();
                });
    self->field_slider_58.field_root_8_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_57_layout_cache.get()[1];
                        });
    self->field_slider_58.field_base_14.field_root_5_maximum.set(100);
    self->field_slider_58.field_base_14.field_root_5_step.set(2);
    self->field_slider_58.field_base_14.field_root_5_value.set(100);
    self->field_slider_58.field_root_8_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_57_layout_cache_ortho.get()[1];
                        });
    self->field_slider_58.field_root_8_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_57_layout_cache_ortho.get()[0];
                        });
    self->field_slider_58.field_root_8_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_57_layout_cache.get()[0];
                        });
    self->field_text_59.color.set(slint::Brush(slint::Color::from_argb_encoded(+4.294967295e9)));
    self->field_text_59.font_size.set(30);
    self->field_text_59.font_weight.set(slint::private_api::saturating_float_to_int(700));
    self->field_text_59.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_57_layout_cache.get()[3];
                        });
    self->field_text_59.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->field_text_59.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_current_song.get().name;
                        });
    self->field_text_59.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_57_layout_cache_ortho.get()[3];
                        });
    self->field_image_60.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_57_layout_cache.get()[5];
                        });
    self->field_image_60.image_fit.set(slint::cbindgen_private::ImageFit::Contain);
    self->field_image_60.source.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_current_song.get().image;
                        });
    self->field_image_60.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_57_layout_cache_ortho.get()[5];
                        });
    self->field_rectangle_61.background.set(slint::Brush(slint::Color::from_argb_uint8(std::clamp(static_cast<float>(1) * 255., 0., 255.), std::clamp(static_cast<int>(70), 0, 255), std::clamp(static_cast<int>(70), 0, 255), std::clamp(static_cast<int>(70), 0, 255))));
    self->field_rectangle_61.border_color.set(slint::Brush(slint::Color::from_argb_uint8(std::clamp(static_cast<float>(1) * 255., 0., 255.), std::clamp(static_cast<int>(70), 0, 255), std::clamp(static_cast<int>(70), 0, 255), std::clamp(static_cast<int>(70), 0, 255))));
    self->field_rectangle_61.border_radius.set(20);
    self->field_rectangle_61.border_width.set(10);
    self->field_slider_63.field_base_14.field_root_5_changed.set_handler(
                [this]([[maybe_unused]] float arg_0) {
                    [[maybe_unused]] auto self = this;
                    [&]{ self->field_root_15_rectangle_61_slider_val.set(self->field_slider_63.field_base_14.field_root_5_value.get());self->field_root_15_rectangle_61_slider_released.call(); }();
                });
    self->field_slider_63.field_root_8_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_62_layout_cache.get()[1];
                        });
    self->field_slider_63.field_base_14.field_root_5_maximum.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_current_song.get().len;
                        });
    self->field_slider_63.field_base_14.field_root_5_value.set(0);
    self->field_slider_63.field_root_8_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_mainViewContainer_55_layout_cache_ortho.get()[3];
                        });
    self->field_slider_63.field_root_8_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_62_layout_cache.get()[0];
                        });
    self->field__Transform_65.transform_origin.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&](const auto &a_0, const auto &a_1){ slint::LogicalPosition o{}; o.x = a_0; o.y = a_1; return o; }((self->field_root_15_empty_64_layout_cache.get()[1] /(float) 2), (self->field_root_15_empty_62_layout_cache.get()[3] /(float) 2));
                        });
    self->field__Transform_65.transform_rotation.set(0);
    self->field__Transform_65.transform_scale_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15__Transform_65_transform_scale.get();
                        });
    self->field__Transform_65.transform_scale_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15__Transform_65_transform_scale.get();
                        });
    self->field_image_67.height.set(50);
    self->field_image_67.source.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_root_15_pause.get() ? slint::Image::load_from_path(slint::SharedString(u8"D:\\pthang\\proj\\music_player\\ui\\assets\\stopping_button.png")) : slint::Image::load_from_path(slint::SharedString(u8"D:\\pthang\\proj\\music_player\\ui\\assets\\playing_button.png")));
                        });
    self->field_image_67.width.set(50);
    self->field_touch_68.clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->field_root_15_rectangle_66_clicked.call();
                });
    self->field_touch_68.enabled.set(true);
    self->field__Transform_69.transform_origin.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&](const auto &a_0, const auto &a_1){ slint::LogicalPosition o{}; o.x = a_0; o.y = a_1; return o; }((self->field_root_15_empty_64_layout_cache.get()[3] /(float) 2), (self->field_root_15_empty_62_layout_cache.get()[3] /(float) 2));
                        });
    self->field__Transform_69.transform_rotation.set(0);
    self->field__Transform_69.transform_scale_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15__Transform_69_transform_scale.get();
                        });
    self->field__Transform_69.transform_scale_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15__Transform_69_transform_scale.get();
                        });
    self->field_image_71.height.set(50);
    self->field_image_71.source.set(slint::Image::load_from_path(slint::SharedString(u8"D:\\pthang\\proj\\music_player\\ui\\assets\\skip_button.png")));
    self->field_image_71.width.set(50);
    self->field_touch_72.clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->field_root_15_rectangle_70_clicked.call();
                });
    self->field_touch_72.enabled.set(true);
    self->field_root_15.always_on_top.set_constant();
    self->field_root_15.background.set_constant();
    self->field_root_15.default_font_family.set_constant();
    self->field_root_15.default_font_size.set_constant();
    self->field_root_15.default_font_weight.set_constant();
    self->field_root_15_empty_57_padding_bottom.set_constant();
    self->field_root_15_empty_57_padding_top.set_constant();
    self->field_root_15_empty_57_spacing.set_constant();
    self->field_root_15.icon.set_constant();
    self->field_root_15_image_60_max_height.set_constant();
    self->field_root_15_image_60_min_height.set_constant();
    self->field_root_15_mainViewContainer_55_alignment.set_constant();
    self->field_root_15_mainViewContainer_55_padding_bottom.set_constant();
    self->field_root_15_mainViewContainer_55_padding_top.set_constant();
    self->field_root_15_mainViewContainer_55_spacing.set_constant();
    self->field_root_15.no_frame.set_constant();
    self->field_root_15_rectangle_56_max_height.set_constant();
    self->field_root_15_rectangle_56_min_height.set_constant();
    self->field_root_15_rectangle_61_max_height.set_constant();
    self->field_root_15_rectangle_61_min_height.set_constant();
    self->field_root_15.resize_border_width.set_constant();
    self->field_root_15_sidePanelScoller_17_min_height.set_constant();
    self->field_root_15_sidePanelScoller_17_vertical_stretch.set_constant();
    self->field_root_15_text_59_max_height.set_constant();
    self->field_root_15_text_59_min_height.set_constant();
    self->field_root_15.title.set_constant();
    self->field_vertical_bar_visibility_28.border_bottom_left_radius.set_constant();
    self->field_vertical_bar_visibility_28.border_bottom_right_radius.set_constant();
    self->field_vertical_bar_visibility_28.border_top_left_radius.set_constant();
    self->field_vertical_bar_visibility_28.border_top_right_radius.set_constant();
    self->field_vertical_bar_visibility_28.border_width.set_constant();
    self->field_vertical_bar_29.border_color.set_constant();
    self->field_vertical_bar_29.border_radius.set_constant();
    self->field_vertical_bar_29.border_width.set_constant();
    self->field_vertical_bar_clip_30.border_bottom_left_radius.set_constant();
    self->field_vertical_bar_clip_30.border_bottom_right_radius.set_constant();
    self->field_vertical_bar_clip_30.border_top_left_radius.set_constant();
    self->field_vertical_bar_clip_30.border_top_right_radius.set_constant();
    self->field_vertical_bar_clip_30.border_width.set_constant();
    self->field_thumb_31.border_color.set_constant();
    self->field_thumb_31.border_width.set_constant();
    self->field_touch_area_32.enabled.set_constant();
    self->field_touch_area_32.mouse_cursor.set_constant();
    self->field_up_scroll_button_34.enabled.set_constant();
    self->field_up_scroll_button_34.mouse_cursor.set_constant();
    self->field_icon_36.image_fit.set_constant();
    self->field_icon_36.image_rendering.set_constant();
    self->field_icon_36.source.set_constant();
    self->field_down_scroll_button_38.enabled.set_constant();
    self->field_down_scroll_button_38.mouse_cursor.set_constant();
    self->field_icon_40.image_fit.set_constant();
    self->field_icon_40.image_rendering.set_constant();
    self->field_icon_40.source.set_constant();
    self->field_horizontal_bar_visibility_41.border_bottom_left_radius.set_constant();
    self->field_horizontal_bar_visibility_41.border_bottom_right_radius.set_constant();
    self->field_horizontal_bar_visibility_41.border_top_left_radius.set_constant();
    self->field_horizontal_bar_visibility_41.border_top_right_radius.set_constant();
    self->field_horizontal_bar_visibility_41.border_width.set_constant();
    self->field_horizontal_bar_42.border_color.set_constant();
    self->field_horizontal_bar_42.border_radius.set_constant();
    self->field_horizontal_bar_42.border_width.set_constant();
    self->field_horizontal_bar_clip_43.border_bottom_left_radius.set_constant();
    self->field_horizontal_bar_clip_43.border_bottom_right_radius.set_constant();
    self->field_horizontal_bar_clip_43.border_top_left_radius.set_constant();
    self->field_horizontal_bar_clip_43.border_top_right_radius.set_constant();
    self->field_horizontal_bar_clip_43.border_width.set_constant();
    self->field_thumb_44.border_color.set_constant();
    self->field_thumb_44.border_width.set_constant();
    self->field_touch_area_45.enabled.set_constant();
    self->field_touch_area_45.mouse_cursor.set_constant();
    self->field_up_scroll_button_47.enabled.set_constant();
    self->field_up_scroll_button_47.mouse_cursor.set_constant();
    self->field_icon_49.image_fit.set_constant();
    self->field_icon_49.image_rendering.set_constant();
    self->field_icon_49.source.set_constant();
    self->field_down_scroll_button_51.enabled.set_constant();
    self->field_down_scroll_button_51.mouse_cursor.set_constant();
    self->field_icon_53.image_fit.set_constant();
    self->field_icon_53.image_rendering.set_constant();
    self->field_icon_53.source.set_constant();
    self->field_mainView_54.background.set_constant();
    self->field_rectangle_56.background.set_constant();
    self->field_rectangle_56.border_color.set_constant();
    self->field_rectangle_56.border_radius.set_constant();
    self->field_rectangle_56.border_width.set_constant();
    self->field_text_59.color.set_constant();
    self->field_text_59.font_size.set_constant();
    self->field_text_59.font_weight.set_constant();
    self->field_text_59.horizontal_alignment.set_constant();
    self->field_text_59.vertical_alignment.set_constant();
    self->field_image_60.colorize.set_constant();
    self->field_image_60.image_fit.set_constant();
    self->field_image_60.image_rendering.set_constant();
    self->field_rectangle_61.background.set_constant();
    self->field_rectangle_61.border_color.set_constant();
    self->field_rectangle_61.border_radius.set_constant();
    self->field_rectangle_61.border_width.set_constant();
    self->field_slider_63.field_root_8_x.set_constant();
    self->field__Transform_65.transform_rotation.set_constant();
    self->field_image_67.colorize.set_constant();
    self->field_image_67.height.set_constant();
    self->field_image_67.image_fit.set_constant();
    self->field_image_67.image_rendering.set_constant();
    self->field_image_67.width.set_constant();
    self->field_touch_68.enabled.set_constant();
    self->field_touch_68.mouse_cursor.set_constant();
    self->field__Transform_69.transform_rotation.set_constant();
    self->field_image_71.colorize.set_constant();
    self->field_image_71.height.set_constant();
    self->field_image_71.image_fit.set_constant();
    self->field_image_71.image_rendering.set_constant();
    self->field_image_71.source.set_constant();
    self->field_image_71.width.set_constant();
    self->field_touch_72.enabled.set_constant();
    self->field_touch_72.mouse_cursor.set_constant();
    self->repeater_0.set_model_binding([self] { (void)self; return self->field_root_15_song_list.get(); });
}

inline auto MainWindow::user_init () -> void{
    [[maybe_unused]] auto self = this;
    this->field_shufflebutton_21.user_init();
    this->field_slider_58.user_init();
    this->field_slider_63.user_init();
    [&]{ [&]{ ;; }();[&]{ ;; }(); }();
    ;
    [&]{ ;; }();
}

inline auto MainWindow::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = self->field_root_15_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(800, layout_info.max_percent, 800, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }() : [&]{ [[maybe_unused]] auto layout_info = self->fn_layoutinfo_v_with_constraint(self->field_root_15_layoutinfo_h.get().preferred);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(600, layout_info.max_percent, 600, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }();
}

inline auto MainWindow::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(600), float(800), float(0), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(600), float(self->field_root_15_empty_16_layout_cache.get()[1]), float(self->field_root_15_empty_16_layout_cache.get()[0]), float(0)));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(600), float(self->field_root_15_empty_16_layout_cache.get()[3]), float(self->field_root_15_empty_16_layout_cache.get()[2]), float(0)));
        case 3: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_flickable_18_height.get()), float(self->field_root_15_flickable_18_width.get()), float(0), float(0)));
        case 4: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(0), float(0), float(0), float(0)));
        case 5: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(0), float(0), float(0), float(0)));
        case 6: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_flickable_18.viewport_height.get()), float(self->field_flickable_18.viewport_width.get()), float(self->field_flickable_18.viewport_x.get()), float(self->field_flickable_18.viewport_y.get())));
        case 7: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(20), float(90), float(self->field_root_15_sidePanelContainer_20_layout_cache_ortho.get()[0]), float(self->field_root_15_sidePanelContainer_20_layout_cache.get()[0])));
        case 11: return slint::private_api::convert_anonymous_rect(std::make_tuple(float((self->field_root_15_horizontal_bar_42_visible.get() ? 586 : 600)), float(14), float(((self->field_root_15_flickable_18_width.get() + 0) -(float) 14)), float(0)));
        case 12: return slint::private_api::convert_anonymous_rect(std::make_tuple(float((self->field_root_15_horizontal_bar_42_visible.get() ? 586 : 600)), float(14), float(0), float(0)));
        case 13: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_thumb_31_height.get()), float(self->field_root_15_thumb_31_width.get()), float((10 -(float) self->field_root_15_thumb_31_width.get())), float(self->field_root_15_thumb_31_y.get())));
        case 14: return slint::private_api::convert_anonymous_rect(std::make_tuple(float((self->field_root_15_horizontal_bar_42_visible.get() ? 586 : 600)), float(14), float(0), float(0)));
        case 15: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(6), float(8), float(3), float(4)));
        case 16: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(6), float(8), float(3), float((((self->field_root_15_horizontal_bar_42_visible.get() ? 586 : 600) -(float) 6) -(float) 4))));
        case 17: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(6), float(8), float(0), float(0)));
        case 18: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_icon_36.height.get()), float(self->field_icon_36.width.get()), float(((8 -(float) self->field_icon_36.width.get()) /(float) 2)), float(((6 -(float) self->field_icon_36.height.get()) /(float) 2))));
        case 19: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_icon_36.height.get()), float(self->field_icon_36.width.get()), float(0), float(0)));
        case 20: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(6), float(8), float(0), float(0)));
        case 21: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_icon_40.height.get()), float(self->field_icon_40.width.get()), float(((8 -(float) self->field_icon_40.width.get()) /(float) 2)), float(((6 -(float) self->field_icon_40.height.get()) /(float) 2))));
        case 22: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_icon_40.height.get()), float(self->field_icon_40.width.get()), float(0), float(0)));
        case 23: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(14), float(self->field_root_15_horizontal_bar_42_width.get()), float(0), float(((self->field_root_15_flickable_18_height.get() + 0) -(float) 14))));
        case 24: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(14), float(self->field_root_15_horizontal_bar_42_width.get()), float(0), float(0)));
        case 25: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_thumb_44_height.get()), float(self->field_root_15_thumb_44_width.get()), float(self->field_root_15_thumb_44_x.get()), float((10 -(float) self->field_root_15_thumb_44_height.get()))));
        case 26: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(14), float(self->field_root_15_horizontal_bar_42_width.get()), float(0), float(0)));
        case 27: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(8), float(6), float(4), float(3)));
        case 28: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(8), float(6), float(((self->field_root_15_horizontal_bar_42_width.get() -(float) 6) -(float) 4)), float(3)));
        case 29: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(8), float(6), float(0), float(0)));
        case 30: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_icon_49.height.get()), float(self->field_icon_49.width.get()), float(((6 -(float) self->field_icon_49.width.get()) /(float) 2)), float(((8 -(float) self->field_icon_49.height.get()) /(float) 2))));
        case 31: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_icon_49.height.get()), float(self->field_icon_49.width.get()), float(0), float(0)));
        case 32: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(8), float(6), float(0), float(0)));
        case 33: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_icon_53.height.get()), float(self->field_icon_53.width.get()), float(((6 -(float) self->field_icon_53.width.get()) /(float) 2)), float(((8 -(float) self->field_icon_53.height.get()) /(float) 2))));
        case 34: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_icon_53.height.get()), float(self->field_icon_53.width.get()), float(0), float(0)));
        case 35: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_mainViewContainer_55_layout_cache.get()[1]), float(self->field_root_15_mainViewContainer_55_layout_cache_ortho.get()[1]), float(self->field_root_15_mainViewContainer_55_layout_cache_ortho.get()[0]), float(self->field_root_15_mainViewContainer_55_layout_cache.get()[0])));
        case 36: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_mainViewContainer_55_layout_cache.get()[3]), float(self->field_root_15_mainViewContainer_55_layout_cache_ortho.get()[3]), float(self->field_root_15_mainViewContainer_55_layout_cache_ortho.get()[2]), float(self->field_root_15_mainViewContainer_55_layout_cache.get()[2])));
        case 37: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_57_layout_cache.get()[1]), float(self->field_root_15_empty_57_layout_cache_ortho.get()[1]), float(self->field_root_15_empty_57_layout_cache_ortho.get()[0]), float(self->field_root_15_empty_57_layout_cache.get()[0])));
        case 38: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_57_layout_cache.get()[3]), float(self->field_root_15_empty_57_layout_cache_ortho.get()[3]), float(self->field_root_15_empty_57_layout_cache_ortho.get()[2]), float(self->field_root_15_empty_57_layout_cache.get()[2])));
        case 39: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_57_layout_cache.get()[5]), float(self->field_root_15_empty_57_layout_cache_ortho.get()[5]), float(self->field_root_15_empty_57_layout_cache_ortho.get()[4]), float(self->field_root_15_empty_57_layout_cache.get()[4])));
        case 48: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_62_layout_cache.get()[1]), float(self->field_root_15_mainViewContainer_55_layout_cache_ortho.get()[3]), float(0), float(self->field_root_15_empty_62_layout_cache.get()[0])));
        case 49: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_62_layout_cache.get()[3]), float(self->field_root_15_mainViewContainer_55_layout_cache_ortho.get()[3]), float(0), float(self->field_root_15_empty_62_layout_cache.get()[2])));
        case 58: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_62_layout_cache.get()[3]), float(self->field_root_15_empty_64_layout_cache.get()[1]), float(self->field_root_15_empty_64_layout_cache.get()[0]), float(0)));
        case 59: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_62_layout_cache.get()[3]), float(self->field_root_15_empty_64_layout_cache.get()[3]), float(self->field_root_15_empty_64_layout_cache.get()[2]), float(0)));
        case 60: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_62_layout_cache.get()[3]), float(self->field_root_15_empty_64_layout_cache.get()[1]), float(0), float(0)));
        case 61: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(50), float(50), float(((self->field_root_15_empty_64_layout_cache.get()[1] -(float) 50) /(float) 2)), float(((self->field_root_15_empty_62_layout_cache.get()[3] -(float) 50) /(float) 2))));
        case 62: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_62_layout_cache.get()[3]), float(self->field_root_15_empty_64_layout_cache.get()[1]), float(0), float(0)));
        case 63: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_62_layout_cache.get()[3]), float(self->field_root_15_empty_64_layout_cache.get()[3]), float(0), float(0)));
        case 64: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(50), float(50), float(((self->field_root_15_empty_64_layout_cache.get()[3] -(float) 50) /(float) 2)), float(((self->field_root_15_empty_62_layout_cache.get()[3] -(float) 50) /(float) 2))));
        case 65: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_62_layout_cache.get()[3]), float(self->field_root_15_empty_64_layout_cache.get()[3]), float(0), float(0)));
    }
    if (index == 7) {
        return self->field_shufflebutton_21.item_geometry(0);
    } else if (index >= 9 && index < 11) {
        return self->field_shufflebutton_21.item_geometry(index - 8);
    } else if (index == 37) {
        return self->field_slider_58.item_geometry(0);
    } else if (index >= 40 && index < 48) {
        return self->field_slider_58.item_geometry(index - 39);
    } else if (index == 48) {
        return self->field_slider_63.item_geometry(0);
    } else if (index >= 50 && index < 58) {
        return self->field_slider_63.item_geometry(index - 49);
    } else return {};
}

inline auto MainWindow::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 37: return slint::cbindgen_private::AccessibleRole::Slider;
        case 38: return slint::cbindgen_private::AccessibleRole::Text;
        case 39: return slint::cbindgen_private::AccessibleRole::Image;
        case 48: return slint::cbindgen_private::AccessibleRole::Slider;
        case 61: return slint::cbindgen_private::AccessibleRole::Image;
        case 64: return slint::cbindgen_private::AccessibleRole::Image;
    }
    if (index == 7) {
        return self->field_shufflebutton_21.accessible_role(0);
    } else if (index >= 9 && index < 11) {
        return self->field_shufflebutton_21.accessible_role(index - 8);
    } else if (index == 37) {
        return self->field_slider_58.accessible_role(0);
    } else if (index >= 40 && index < 48) {
        return self->field_slider_58.accessible_role(index - 39);
    } else if (index == 48) {
        return self->field_slider_63.accessible_role(0);
    } else if (index >= 50 && index < 58) {
        return self->field_slider_63.accessible_role(index - 49);
    } else return {};
}

inline auto MainWindow::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (37 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Enabled): return (self->field_slider_58.field_base_14.field_touch_area_6.enabled.get() ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (37 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Orientation): return [&]() -> slint::SharedString { switch (self->field_slider_58.field_base_14.field_root_5_orientation.get()) { case slint::cbindgen_private::Orientation::Horizontal: return "horizontal"; case slint::cbindgen_private::Orientation::Vertical: return "vertical"; default: return {}; } }();
        case (37 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Value): return slint::SharedString::from_number(self->field_slider_58.field_base_14.field_root_5_value.get());
        case (37 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::ValueMaximum): return slint::SharedString::from_number(self->field_slider_58.field_base_14.field_root_5_maximum.get());
        case (37 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::ValueMinimum): return slint::SharedString::from_number(self->field_slider_58.field_base_14.field_root_5_minimum.get());
        case (37 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::ValueStep): return slint::SharedString::from_number(self->field_slider_58.field_root_8_accessible_value_step.get());
        case (38 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->field_root_15_rectangle_56_song_name.get();
        case (48 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Enabled): return (self->field_slider_63.field_base_14.field_touch_area_6.enabled.get() ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (48 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Orientation): return [&]() -> slint::SharedString { switch (self->field_slider_63.field_base_14.field_root_5_orientation.get()) { case slint::cbindgen_private::Orientation::Horizontal: return "horizontal"; case slint::cbindgen_private::Orientation::Vertical: return "vertical"; default: return {}; } }();
        case (48 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Value): return slint::SharedString::from_number(self->field_slider_63.field_base_14.field_root_5_value.get());
        case (48 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::ValueMaximum): return slint::SharedString::from_number(self->field_slider_63.field_base_14.field_root_5_maximum.get());
        case (48 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::ValueMinimum): return slint::SharedString::from_number(self->field_slider_63.field_base_14.field_root_5_minimum.get());
        case (48 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::ValueStep): return slint::SharedString::from_number(self->field_slider_63.field_root_8_accessible_value_step.get());
    }
    if (index == 7) {
        return self->field_shufflebutton_21.accessible_string_property(0, what);
    } else if (index >= 9 && index < 11) {
        return self->field_shufflebutton_21.accessible_string_property(index - 8, what);
    } else if (index == 37) {
        return self->field_slider_58.accessible_string_property(0, what);
    } else if (index >= 40 && index < 48) {
        return self->field_slider_58.accessible_string_property(index - 39, what);
    } else if (index == 48) {
        return self->field_slider_63.accessible_string_property(0, what);
    } else if (index >= 50 && index < 58) {
        return self->field_slider_63.accessible_string_property(index - 49, what);
    } else return {};
}

inline auto MainWindow::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
        case (37 << 8) | uintptr_t(slint::cbindgen_private::AccessibilityAction::Tag::Decrement): return self->field_slider_58.field_root_8_accessible_action_decrement.call();
        case (37 << 8) | uintptr_t(slint::cbindgen_private::AccessibilityAction::Tag::Increment): return self->field_slider_58.field_root_8_accessible_action_increment.call();
        case (37 << 8) | uintptr_t(slint::cbindgen_private::AccessibilityAction::Tag::SetValue): { auto arg_0 = action.set_value._0; return self->field_slider_58.field_root_8_accessible_action_set_value.call(arg_0); }
        case (48 << 8) | uintptr_t(slint::cbindgen_private::AccessibilityAction::Tag::Decrement): return self->field_slider_63.field_root_8_accessible_action_decrement.call();
        case (48 << 8) | uintptr_t(slint::cbindgen_private::AccessibilityAction::Tag::Increment): return self->field_slider_63.field_root_8_accessible_action_increment.call();
        case (48 << 8) | uintptr_t(slint::cbindgen_private::AccessibilityAction::Tag::SetValue): { auto arg_0 = action.set_value._0; return self->field_slider_63.field_root_8_accessible_action_set_value.call(arg_0); }
    }
    if (index == 7) {
        return self->field_shufflebutton_21.accessibility_action(0, action);
    } else if (index >= 9 && index < 11) {
        return self->field_shufflebutton_21.accessibility_action(index - 8, action);
    } else if (index == 37) {
        return self->field_slider_58.accessibility_action(0, action);
    } else if (index >= 40 && index < 48) {
        return self->field_slider_58.accessibility_action(index - 39, action);
    } else if (index == 48) {
        return self->field_slider_63.accessibility_action(0, action);
    } else if (index >= 50 && index < 58) {
        return self->field_slider_63.accessibility_action(index - 49, action);
    } else return ;
}

inline auto MainWindow::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 37: return slint::cbindgen_private::SupportedAccessibilityAction_Decrement|slint::cbindgen_private::SupportedAccessibilityAction_Increment|slint::cbindgen_private::SupportedAccessibilityAction_SetValue;
        case 48: return slint::cbindgen_private::SupportedAccessibilityAction_Decrement|slint::cbindgen_private::SupportedAccessibilityAction_Increment|slint::cbindgen_private::SupportedAccessibilityAction_SetValue;
    }
    if (index == 7) {
        return self->field_shufflebutton_21.supported_accessibility_actions(0);
    } else if (index >= 9 && index < 11) {
        return self->field_shufflebutton_21.supported_accessibility_actions(index - 8);
    } else if (index == 37) {
        return self->field_slider_58.supported_accessibility_actions(0);
    } else if (index >= 40 && index < 48) {
        return self->field_slider_58.supported_accessibility_actions(index - 39);
    } else if (index == 48) {
        return self->field_slider_63.supported_accessibility_actions(0);
    } else if (index >= 50 && index < 58) {
        return self->field_slider_63.supported_accessibility_actions(index - 49);
    } else return {};
}

inline auto MainWindow::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 7) {
        return self->field_shufflebutton_21.element_infos(0);
    } else if (index >= 9 && index < 11) {
        return self->field_shufflebutton_21.element_infos(index - 8);
    } else if (index == 37) {
        return self->field_slider_58.element_infos(0);
    } else if (index >= 40 && index < 48) {
        return self->field_slider_58.element_infos(index - 39);
    } else if (index == 48) {
        return self->field_slider_63.element_infos(0);
    } else if (index >= 50 && index < 58) {
        return self->field_slider_63.element_infos(index - 49);
    } else return {};
}

inline auto MainWindow::ensure_instantiated () const -> bool{
    [[maybe_unused]] auto self = this;
    bool _changed = false;
    _changed |= self->repeater_0.ensure_updated(self);
    return _changed;
}

inline auto MainWindow::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0: {
                return self->repeater_0.visit(order, visitor);
            } };
        std::abort();
}

inline auto MainWindow::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.track_instance_changes();
                return self->repeater_0.index_range();
            } };
        std::abort();
}

inline auto MainWindow::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                *result = self->repeater_0.instance_at(subtree_index);
                return;
            } };
        std::abort();
}

inline auto MainWindow::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const MainWindow*>(base);
        return self->visit_dynamic_children(dyn_index, order, visitor);
    };
    auto self_rc = reinterpret_cast<const MainWindow*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto MainWindow::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto MainWindow::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
    auto self = reinterpret_cast<const MainWindow*>(component.instance);
    return self->subtree_range(dyn_index);
}

inline auto MainWindow::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
    auto self = reinterpret_cast<const MainWindow*>(component.instance);
    self->subtree_component(dyn_index, subtree_index, result);
}

inline auto MainWindow::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto MainWindow::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
}

inline auto MainWindow::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto MainWindow::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto MainWindow::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(2, 1, 0, 0, false), 
slint::private_api::make_item_node(3, 3, 0, 1, false), 
slint::private_api::make_item_node(2, 35, 0, 2, false), 
slint::private_api::make_item_node(1, 6, 1, 3, false), 
slint::private_api::make_item_node(1, 11, 1, 4, false), 
slint::private_api::make_item_node(1, 23, 1, 5, false), 
slint::private_api::make_item_node(2, 7, 3, 6, false), 
slint::private_api::make_item_node(2, 9, 6, 7, false), 
slint::private_api::make_dyn_node(0, 6), 
slint::private_api::make_item_node(0, 11, 7, 8, true), 
slint::private_api::make_item_node(0, 11, 7, 9, false), 
slint::private_api::make_item_node(1, 12, 4, 10, false), 
slint::private_api::make_item_node(4, 13, 11, 11, false), 
slint::private_api::make_item_node(0, 17, 12, 12, false), 
slint::private_api::make_item_node(0, 17, 12, 13, false), 
slint::private_api::make_item_node(1, 17, 12, 14, false), 
slint::private_api::make_item_node(1, 20, 12, 15, false), 
slint::private_api::make_item_node(1, 18, 15, 16, false), 
slint::private_api::make_item_node(1, 19, 17, 17, false), 
slint::private_api::make_item_node(0, 20, 18, 18, false), 
slint::private_api::make_item_node(1, 21, 16, 19, false), 
slint::private_api::make_item_node(1, 22, 20, 20, false), 
slint::private_api::make_item_node(0, 23, 21, 21, false), 
slint::private_api::make_item_node(1, 24, 5, 22, false), 
slint::private_api::make_item_node(4, 25, 23, 23, false), 
slint::private_api::make_item_node(0, 29, 24, 24, false), 
slint::private_api::make_item_node(0, 29, 24, 25, false), 
slint::private_api::make_item_node(1, 29, 24, 26, false), 
slint::private_api::make_item_node(1, 32, 24, 27, false), 
slint::private_api::make_item_node(1, 30, 27, 28, false), 
slint::private_api::make_item_node(1, 31, 29, 29, false), 
slint::private_api::make_item_node(0, 32, 30, 30, false), 
slint::private_api::make_item_node(1, 33, 28, 31, false), 
slint::private_api::make_item_node(1, 34, 32, 32, false), 
slint::private_api::make_item_node(0, 35, 33, 33, false), 
slint::private_api::make_item_node(3, 37, 2, 34, false), 
slint::private_api::make_item_node(2, 48, 2, 35, false), 
slint::private_api::make_item_node(4, 40, 35, 36, true), 
slint::private_api::make_item_node(0, 48, 35, 37, true), 
slint::private_api::make_item_node(0, 48, 35, 38, true), 
slint::private_api::make_item_node(0, 44, 37, 39, false), 
slint::private_api::make_item_node(0, 44, 37, 40, false), 
slint::private_api::make_item_node(2, 44, 37, 41, false), 
slint::private_api::make_item_node(2, 46, 37, 42, false), 
slint::private_api::make_item_node(0, 46, 42, 43, false), 
slint::private_api::make_item_node(0, 46, 42, 44, false), 
slint::private_api::make_item_node(0, 48, 43, 45, false), 
slint::private_api::make_item_node(0, 48, 43, 46, false), 
slint::private_api::make_item_node(4, 50, 36, 47, true), 
slint::private_api::make_item_node(2, 58, 36, 48, false), 
slint::private_api::make_item_node(0, 54, 48, 49, false), 
slint::private_api::make_item_node(0, 54, 48, 50, false), 
slint::private_api::make_item_node(2, 54, 48, 51, false), 
slint::private_api::make_item_node(2, 56, 48, 52, false), 
slint::private_api::make_item_node(0, 56, 52, 53, false), 
slint::private_api::make_item_node(0, 56, 52, 54, false), 
slint::private_api::make_item_node(0, 58, 53, 55, false), 
slint::private_api::make_item_node(0, 58, 53, 56, false), 
slint::private_api::make_item_node(1, 60, 49, 57, false), 
slint::private_api::make_item_node(1, 63, 49, 58, false), 
slint::private_api::make_item_node(2, 61, 58, 59, false), 
slint::private_api::make_item_node(0, 63, 60, 60, true), 
slint::private_api::make_item_node(0, 63, 60, 61, false), 
slint::private_api::make_item_node(2, 64, 59, 62, false), 
slint::private_api::make_item_node(0, 66, 63, 63, true), 
slint::private_api::make_item_node(0, 66, 63, 64, false) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto MainWindow::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(WindowItemVTable),  offsetof(MainWindow, field_root_15) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_sidePanelScoller_17) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable),  offsetof(MainWindow, field_mainView_54) }, 
{ SLINT_GET_ITEM_VTABLE(FlickableVTable),  offsetof(MainWindow, field_flickable_18) }, 
{ SLINT_GET_ITEM_VTABLE(ClipVTable),  offsetof(MainWindow, field_vertical_bar_visibility_28) }, 
{ SLINT_GET_ITEM_VTABLE(ClipVTable),  offsetof(MainWindow, field_horizontal_bar_visibility_41) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_flickable_viewport_19) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable), offsetof(MainWindow, field_shufflebutton_21) +  offsetof(ShuffleButton_root_1, field_root_1) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable), offsetof(MainWindow, field_shufflebutton_21) +  offsetof(ShuffleButton_root_1, field_text_3) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable), offsetof(MainWindow, field_shufflebutton_21) +  offsetof(ShuffleButton_root_1, field_touch_4) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_vertical_bar_29) }, 
{ SLINT_GET_ITEM_VTABLE(ClipVTable),  offsetof(MainWindow, field_vertical_bar_clip_30) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_thumb_31) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(MainWindow, field_touch_area_32) }, 
{ SLINT_GET_ITEM_VTABLE(OpacityVTable),  offsetof(MainWindow, field_up_scroll_button_Opacity_33) }, 
{ SLINT_GET_ITEM_VTABLE(OpacityVTable),  offsetof(MainWindow, field_down_scroll_button_Opacity_37) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(MainWindow, field_up_scroll_button_34) }, 
{ SLINT_GET_ITEM_VTABLE(OpacityVTable),  offsetof(MainWindow, field_icon_Opacity_35) }, 
{ SLINT_GET_ITEM_VTABLE(ImageItemVTable),  offsetof(MainWindow, field_icon_36) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(MainWindow, field_down_scroll_button_38) }, 
{ SLINT_GET_ITEM_VTABLE(OpacityVTable),  offsetof(MainWindow, field_icon_Opacity_39) }, 
{ SLINT_GET_ITEM_VTABLE(ImageItemVTable),  offsetof(MainWindow, field_icon_40) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_horizontal_bar_42) }, 
{ SLINT_GET_ITEM_VTABLE(ClipVTable),  offsetof(MainWindow, field_horizontal_bar_clip_43) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_thumb_44) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(MainWindow, field_touch_area_45) }, 
{ SLINT_GET_ITEM_VTABLE(OpacityVTable),  offsetof(MainWindow, field_up_scroll_button_Opacity_46) }, 
{ SLINT_GET_ITEM_VTABLE(OpacityVTable),  offsetof(MainWindow, field_down_scroll_button_Opacity_50) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(MainWindow, field_up_scroll_button_47) }, 
{ SLINT_GET_ITEM_VTABLE(OpacityVTable),  offsetof(MainWindow, field_icon_Opacity_48) }, 
{ SLINT_GET_ITEM_VTABLE(ImageItemVTable),  offsetof(MainWindow, field_icon_49) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(MainWindow, field_down_scroll_button_51) }, 
{ SLINT_GET_ITEM_VTABLE(OpacityVTable),  offsetof(MainWindow, field_icon_Opacity_52) }, 
{ SLINT_GET_ITEM_VTABLE(ImageItemVTable),  offsetof(MainWindow, field_icon_53) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_56) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(MainWindow, field_rectangle_61) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(MainWindow, field_slider_58) +  offsetof(Slider_root_8, field_root_8) }, 
{ SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(MainWindow, field_text_59) }, 
{ SLINT_GET_ITEM_VTABLE(ImageItemVTable),  offsetof(MainWindow, field_image_60) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(MainWindow, field_slider_58) +  offsetof(Slider_root_8, field_rail_9) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(MainWindow, field_slider_58) +  offsetof(Slider_root_8, field_track_10) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(MainWindow, field_slider_58) +  offsetof(Slider_root_8, field_thumb_11) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(MainWindow, field_slider_58) + offsetof(Slider_root_8, field_base_14) +  offsetof(SliderBase_root_5, field_root_5) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(MainWindow, field_slider_58) +  offsetof(Slider_root_8, field_thumb_border_12) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(MainWindow, field_slider_58) +  offsetof(Slider_root_8, field_thumb_inner_13) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable), offsetof(MainWindow, field_slider_58) + offsetof(Slider_root_8, field_base_14) +  offsetof(SliderBase_root_5, field_touch_area_6) }, 
{ SLINT_GET_ITEM_VTABLE(FocusScopeVTable), offsetof(MainWindow, field_slider_58) + offsetof(Slider_root_8, field_base_14) +  offsetof(SliderBase_root_5, field_focus_scope_7) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(MainWindow, field_slider_63) +  offsetof(Slider_root_8, field_root_8) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_64) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(MainWindow, field_slider_63) +  offsetof(Slider_root_8, field_rail_9) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(MainWindow, field_slider_63) +  offsetof(Slider_root_8, field_track_10) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(MainWindow, field_slider_63) +  offsetof(Slider_root_8, field_thumb_11) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(MainWindow, field_slider_63) + offsetof(Slider_root_8, field_base_14) +  offsetof(SliderBase_root_5, field_root_5) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(MainWindow, field_slider_63) +  offsetof(Slider_root_8, field_thumb_border_12) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(MainWindow, field_slider_63) +  offsetof(Slider_root_8, field_thumb_inner_13) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable), offsetof(MainWindow, field_slider_63) + offsetof(Slider_root_8, field_base_14) +  offsetof(SliderBase_root_5, field_touch_area_6) }, 
{ SLINT_GET_ITEM_VTABLE(FocusScopeVTable), offsetof(MainWindow, field_slider_63) + offsetof(Slider_root_8, field_base_14) +  offsetof(SliderBase_root_5, field_focus_scope_7) }, 
{ SLINT_GET_ITEM_VTABLE(TransformVTable),  offsetof(MainWindow, field__Transform_65) }, 
{ SLINT_GET_ITEM_VTABLE(TransformVTable),  offsetof(MainWindow, field__Transform_69) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_rectangle_66) }, 
{ SLINT_GET_ITEM_VTABLE(ImageItemVTable),  offsetof(MainWindow, field_image_67) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(MainWindow, field_touch_68) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_rectangle_70) }, 
{ SLINT_GET_ITEM_VTABLE(ImageItemVTable),  offsetof(MainWindow, field_image_71) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(MainWindow, field_touch_72) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto MainWindow::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const MainWindow*>(component.instance)->layout_info(o);
}

inline auto MainWindow::ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool{
    return reinterpret_cast<const MainWindow*>(component.instance)->ensure_instantiated();
}

inline auto MainWindow::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const MainWindow*>(component.instance)->item_geometry(index);
}

inline auto MainWindow::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const MainWindow*>(component.instance)->accessible_role(index);
}

inline auto MainWindow::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const MainWindow*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto MainWindow::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const MainWindow*>(component.instance)->accessibility_action(index, *action);
}

inline auto MainWindow::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const MainWindow*>(component.instance)->supported_accessibility_actions(index);
}

inline auto MainWindow::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto MainWindow::window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const MainWindow*>(component.instance)->globals->window().window_handle();
}

inline auto MainWindow::create () -> slint::ComponentHandle<MainWindow>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, MainWindow>::make();
    auto self = const_cast<MainWindow *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::cbindgen_private::slint_ensure_backend();
    self->globals = &self->m_globals;
    self->m_globals.root_weak = self->self_weak;
    self->m_globals.init_globals();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), self->globals->m_window);
    self->init(self->globals, self->self_weak, 0, 1 );
    auto &window = self->globals->window();
    self->user_init();
    self->m_globals.window();
    slint::cbindgen_private::slint_windowrc_ensure_tree_instantiated(reinterpret_cast<const slint::cbindgen_private::WindowAdapterRcOpaque*>(&window.window_handle()));
    return slint::ComponentHandle<MainWindow>{ self_rc };
}

inline MainWindow::~MainWindow (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto MainWindow::get_curr_second () const -> float{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_slider_63.field_base_14.field_root_5_value.get();
}

inline auto MainWindow::set_curr_second (const float &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_slider_63.field_base_14.field_root_5_value.set(value);
}

inline auto MainWindow::get_current_song () const -> MusicInfo{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_current_song.get();
}

inline auto MainWindow::set_current_song (const MusicInfo &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_current_song.set(value);
}

inline auto MainWindow::get_current_volume () const -> int{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_current_volume.get();
}

inline auto MainWindow::set_current_volume (const int &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_current_volume.set(value);
}

inline auto MainWindow::invoke_entry_clicked () const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_entry_clicked.call();
}

template<std::invocable<> Functor> inline auto MainWindow::on_entry_clicked (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_entry_clicked.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_15_entry_clicked.mark_dirty();
}

inline auto MainWindow::get_pause () const -> bool{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_pause.get();
}

inline auto MainWindow::set_pause (const bool &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_pause.set(value);
}

inline auto MainWindow::get_shuffle_mode () const -> bool{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_shuffle_mode.get();
}

inline auto MainWindow::set_shuffle_mode (const bool &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_shuffle_mode.set(value);
}

inline auto MainWindow::invoke_skip () const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_skip.call();
}

template<std::invocable<> Functor> inline auto MainWindow::on_skip (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_skip.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_15_skip.mark_dirty();
}

inline auto MainWindow::invoke_slider_drag () const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_slider_drag.call();
}

template<std::invocable<> Functor> inline auto MainWindow::on_slider_drag (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_slider_drag.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_15_slider_drag.mark_dirty();
}

inline auto MainWindow::get_song_list () const -> std::shared_ptr<slint::Model<MusicInfo>>{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_15_song_list.get();
}

inline auto MainWindow::set_song_list (const std::shared_ptr<slint::Model<MusicInfo>> &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_15_song_list.set(value);
}

inline auto MainWindow::show () -> void{
    m_globals.window().show();
}

inline auto MainWindow::hide () -> void{
    m_globals.window().hide();
}

inline auto MainWindow::window () const -> slint::Window&{
    return m_globals.window();
}

inline auto MainWindow::run () -> void{
    show();
    slint::run_event_loop();
    hide();
}
