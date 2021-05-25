#ifndef gtk_HPP
#define gtk_HPP








































































































































































































































#include "gtk_import.hpp"


#define LEVEL_BAR_OFFSET_LOW "low"
#define LEVEL_BAR_OFFSET_HIGH "high"
#define LEVEL_BAR_OFFSET_FULL "full"
#define CELL_AREA_WARN_INVALID_CELL_PROPERTY_ID(object,property_id,pspec) GTK_CELL_AREA_WARN_INVALID_CELL_PROPERTY_ID(object,property_id,pspec)
#define PRINT_SETTINGS_ORIENTATION "orientation"
#define PRINT_SETTINGS_PAPER_FORMAT "paper-format"
#define PRINT_SETTINGS_PAPER_WIDTH "paper-width"
#define PRINT_SETTINGS_PAPER_HEIGHT "paper-height"
#define PRINT_SETTINGS_USE_COLOR "use-color"
#define PRINT_SETTINGS_COLLATE "collate"
#define PRINT_SETTINGS_REVERSE "reverse"
#define PRINT_SETTINGS_QUALITY "quality"
#define PRINT_SETTINGS_N_COPIES "n-copies"
#define PRINT_SETTINGS_NUMBER_UP "number-up"
#define PRINT_SETTINGS_NUMBER_UP_LAYOUT "number-up-layout"
#define PRINT_SETTINGS_RESOLUTION "resolution"
#define PRINT_SETTINGS_RESOLUTION_X "resolution-x"
#define PRINT_SETTINGS_RESOLUTION_Y "resolution-y"
#define PRINT_SETTINGS_PRINTER_LPI "printer-lpi"
#define PRINT_SETTINGS_SCALE "scale"
#define PRINT_SETTINGS_PRINT_PAGES "print-pages"
#define PRINT_SETTINGS_PAGE_RANGES "page-ranges"
#define PRINT_SETTINGS_PAGE_SET "page-set"
#define PRINT_SETTINGS_DEFAULT_SOURCE "default-source"
#define PRINT_SETTINGS_MEDIA_TYPE "media-type"
#define PRINT_SETTINGS_DITHER "dither"
#define PRINT_SETTINGS_FINISHINGS "finishings"
#define PRINT_SETTINGS_OUTPUT_BIN "output-bin"
#define PRINT_SETTINGS_OUTPUT_DIR "output-dir"
#define PRINT_SETTINGS_OUTPUT_BASENAME "output-basename"
#define PRINT_SETTINGS_OUTPUT_FILE_FORMAT "output-file-format"
#define PRINT_SETTINGS_OUTPUT_URI "output-uri"
#define PRINT_SETTINGS_WIN32_DRIVER_EXTRA "win32-driver-extra"
#define PRINT_SETTINGS_WIN32_DRIVER_VERSION "win32-driver-version"
#define PAPER_NAME_A3 "iso_a3"
#define PAPER_NAME_A4 "iso_a4"
#define PAPER_NAME_A5 "iso_a5"
#define PAPER_NAME_B5 "iso_b5"
#define PAPER_NAME_LETTER "na_letter"
#define PAPER_NAME_EXECUTIVE "na_executive"
#define PAPER_NAME_LEGAL "na_legal"
#define widget_class_bind_template_child(widget_class,TypeName,member_name) gtk_widget_class_bind_template_child(widget_class,TypeName,member_name)
#define widget_class_bind_template_child_internal(widget_class,TypeName,member_name) gtk_widget_class_bind_template_child_internal(widget_class,TypeName,member_name)
#define widget_class_bind_template_child_private(widget_class,TypeName,member_name) gtk_widget_class_bind_template_child_private(widget_class,TypeName,member_name)
#define widget_class_bind_template_child_internal_private(widget_class,TypeName,member_name) gtk_widget_class_bind_template_child_internal_private(widget_class,TypeName,member_name)

#define widget_class_bind_template_callback(widget_class,callback) gtk_widget_class_bind_template_callback(widget_class,callback)
#define IS_RESIZE_CONTAINER(widget) GTK_IS_RESIZE_CONTAINER(widget)
#define CONTAINER_WARN_INVALID_CHILD_PROPERTY_ID(object,property_id,pspec) GTK_CONTAINER_WARN_INVALID_CHILD_PROPERTY_ID(object,property_id,pspec)

namespace gtk{

GtkApplication* application_new(const gchar* application_id, GApplicationFlags flags){
return gtk_application_new(application_id, flags) ;
}
void application_add_window(GtkApplication* application, GtkWindow* window){
gtk_application_add_window(application, window);
}
void application_remove_window(GtkApplication* application, GtkWindow* window){
gtk_application_remove_window(application, window);
}
GList* application_get_windows(GtkApplication* application){
return gtk_application_get_windows(application) ;
}
GtkWindow* application_get_window_by_id(GtkApplication* application, guint id){
return gtk_application_get_window_by_id(application, id) ;
}
GtkWindow* application_get_active_window(GtkApplication* application){
return gtk_application_get_active_window(application) ;
}
guint application_inhibit(GtkApplication* application, GtkWidget* window, GtkApplicationInhibitFlags flags, const gchar* reason){
return gtk_application_inhibit(application,GTK_WINDOW(window),flags, reason) ;
}
void application_uninhibit(GtkApplication* application, guint cookie){
gtk_application_uninhibit(application, cookie);
}
gboolean application_is_inhibited(GtkApplication* application, GtkApplicationInhibitFlags flags){
return gtk_application_is_inhibited(application, flags) ;
}
gboolean application_prefers_app_menu(GtkApplication* application){
return gtk_application_prefers_app_menu(application) ;
}
GMenuModel* application_get_app_menu(GtkApplication* application){
return gtk_application_get_app_menu(application) ;
}
void application_set_app_menu(GtkApplication* application, GMenuModel* app_menu){
gtk_application_set_app_menu(application, app_menu);
}
GMenuModel* application_get_menubar(GtkApplication* application){
return gtk_application_get_menubar(application) ;
}
void application_set_menubar(GtkApplication* application, GMenuModel* menubar){
gtk_application_set_menubar(application, menubar);
}
GMenu* application_get_menu_by_id(GtkApplication* application, const gchar* id){
return gtk_application_get_menu_by_id(application, id) ;
}







gchar** application_list_action_descriptions(GtkApplication* application){
return gtk_application_list_action_descriptions(application) ;
}
gchar** application_get_accels_for_action(GtkApplication* application, const gchar* detailed_action_name){
return gtk_application_get_accels_for_action(application, detailed_action_name) ;
}
void application_set_accels_for_action(GtkApplication* application, const gchar* detailed_action_name, const gchar* const* accels){
gtk_application_set_accels_for_action(application,detailed_action_name, accels);
}
gchar** application_get_actions_for_accel(GtkApplication* application, const gchar* accel){
return gtk_application_get_actions_for_accel(application, accel) ;
}



GtkWidget* application_window_new(GtkApplication* application){
return gtk_application_window_new(application) ;
}
void application_window_set_show_menubar(GtkApplicationWindow* window, gboolean show_menubar){
gtk_application_window_set_show_menubar(window, show_menubar);
}
gboolean application_window_get_show_menubar(GtkApplicationWindow* window){
return gtk_application_window_get_show_menubar(window) ;
}
guint application_window_get_id(GtkApplicationWindow* window){
return gtk_application_window_get_id(window) ;
}
void application_window_set_help_overlay(GtkApplicationWindow* window, GtkShortcutsWindow* help_overlay){
gtk_application_window_set_help_overlay(window, help_overlay);
}
GtkShortcutsWindow* application_window_get_help_overlay(GtkApplicationWindow* window){
return gtk_application_window_get_help_overlay(window) ;
}



const gchar* actionable_get_action_name(GtkActionable* actionable) {
return gtk_actionable_get_action_name(actionable) ;
}
void actionable_set_action_name(GtkActionable* actionable, const gchar* action_name){
return gtk_actionable_set_action_name(actionable, action_name) ;
}
GVariant* actionable_get_action_target_value(GtkActionable* actionable){
return gtk_actionable_get_action_target_value(actionable) ;
}
void actionable_set_action_target_value(GtkActionable* actionable, GVariant* target_value){
gtk_actionable_set_action_target_value(actionable, target_value);
}
void actionable_set_action_target(GtkActionable* actionable, const gchar* format_str){
gtk_actionable_set_action_target(actionable, format_str);
}
void actionable_set_detailed_action_name(GtkActionable* actionable, const gchar* detailed_action_name){
gtk_actionable_set_detailed_action_name(actionable, detailed_action_name);
}



GtkWidget* window_new(GtkWindowType type){
return gtk_window_new(type) ;
}
void window_set_title(GtkWidget* window, const gchar* title){
gtk_window_set_title(GTK_WINDOW(window), title);
}




void window_set_resizable(GtkWidget* window, gboolean resizable){
gtk_window_set_resizable(GTK_WINDOW(window), resizable);
}
gboolean window_get_resizable(GtkWidget* window){
return gtk_window_get_resizable(GTK_WINDOW(window)) ;
}
void window_add_accel_group(GtkWidget* window, GtkAccelGroup* accel_group){
gtk_window_add_accel_group(GTK_WINDOW(window), accel_group);
}
void window_remove_accel_group(GtkWidget* window, GtkAccelGroup* accel_group){
gtk_window_remove_accel_group(GTK_WINDOW(window), accel_group);
}
gboolean window_activate_focus(GtkWidget* window){
return gtk_window_activate_focus(GTK_WINDOW(window)) ;
}
gboolean window_activate_default(GtkWidget* window){
return gtk_window_activate_default(GTK_WINDOW(window)) ;
}
void window_set_modal(GtkWidget* window, gboolean modal){
gtk_window_set_modal(GTK_WINDOW(window), modal);
}
void window_set_default_size(GtkWidget* window, gint width, gint height){
gtk_window_set_default_size(GTK_WINDOW(window),width, height);
}




void window_set_geometry_hints(GtkWidget* window, GtkWidget* geometry_widget, GdkGeometry* geometry, GdkWindowHints geom_mask){
gtk_window_set_geometry_hints(GTK_WINDOW(window), geometry_widget,geometry,geom_mask);
}
void window_set_gravity(GtkWidget* window, GdkGravity gravity){
gtk_window_set_gravity(GTK_WINDOW(window), gravity);
}
GdkGravity window_get_gravity(GtkWidget* window){
return gtk_window_get_gravity(GTK_WINDOW(window)) ;
}
void window_set_position(GtkWidget* window, GtkWindowPosition position){
gtk_window_set_position(GTK_WINDOW(window), position);
}
void window_set_transient_for(GtkWidget* window, GtkWidget* parent){
gtk_window_set_transient_for(GTK_WINDOW(window), GTK_WINDOW(parent));
}
void window_set_attached_to(GtkWidget* window, GtkWidget* attach_widget){
gtk_window_set_attached_to(GTK_WINDOW(window), attach_widget);
}
void window_set_destroy_with_parent(GtkWidget* window, gboolean setting){
gtk_window_set_destroy_with_parent(GTK_WINDOW(window), setting);
}
void window_set_hide_titlebar_when_maximized(GtkWidget* window, gboolean setting){
gtk_window_set_hide_titlebar_when_maximized(GTK_WINDOW(window), setting);
}
void window_set_screen(GtkWidget* window, GdkScreen* screen){
gtk_window_set_screen(GTK_WINDOW(window), screen);
}
GdkScreen* window_get_screen(GtkWidget* window){
return gtk_window_get_screen(GTK_WINDOW(window)) ;
}
gboolean window_is_active(GtkWidget* window){
return gtk_window_is_active(GTK_WINDOW(window)) ;
}
gboolean window_is_maximized(GtkWidget* window){
return gtk_window_is_maximized(GTK_WINDOW(window)) ;
}
gboolean window_has_toplevel_focus(GtkWidget* window){
return gtk_window_has_toplevel_focus(GTK_WINDOW(window)) ;
}
GList* window_list_toplevels(){
return gtk_window_list_toplevels() ;
}
void window_add_mnemonic(GtkWidget* window, guint keyval, GtkWidget* target){
gtk_window_add_mnemonic(GTK_WINDOW(window),keyval, target);
}
void window_remove_mnemonic(GtkWidget* window, guint keyval, GtkWidget* target){
gtk_window_remove_mnemonic(GTK_WINDOW(window),keyval, target);
}
gboolean window_mnemonic_activate(GtkWidget* window, guint keyval, GdkModifierType modifier){
return gtk_window_mnemonic_activate(GTK_WINDOW(window),keyval, modifier) ;
}
gboolean window_activate_key(GtkWidget* window, GdkEventKey* event){
return gtk_window_activate_key(GTK_WINDOW(window), event) ;
}
gboolean window_propagate_key_event(GtkWidget* window, GdkEventKey* event){
return gtk_window_propagate_key_event(GTK_WINDOW(window), event) ;
}
GtkWidget* window_get_focus(GtkWidget* window){
return gtk_window_get_focus(GTK_WINDOW(window)) ;
}
void window_set_focus(GtkWidget* window, GtkWidget* focus){
gtk_window_set_focus(GTK_WINDOW(window), focus);
}
GtkWidget* window_get_default_widget(GtkWidget* window){
return gtk_window_get_default_widget(GTK_WINDOW(window)) ;
}
void window_set_default(GtkWidget* window, GtkWidget* default_widget){
gtk_window_set_default(GTK_WINDOW(window), default_widget);
}
void window_present(GtkWidget* window){
gtk_window_present(GTK_WINDOW(window));
}
void window_present_with_time(GtkWidget* window, guint32 timestamp){
gtk_window_present_with_time(GTK_WINDOW(window), timestamp);
}
void window_close(GtkWidget* window){
gtk_window_close(GTK_WINDOW(window));
}
void window_iconify(GtkWidget* window){
gtk_window_iconify(GTK_WINDOW(window));
}
void window_deiconify(GtkWidget* window){
gtk_window_deiconify(GTK_WINDOW(window));
}
void window_stick(GtkWidget* window){
gtk_window_stick(GTK_WINDOW(window));
}
void window_unstick(GtkWidget* window){
gtk_window_unstick(GTK_WINDOW(window));
}
void window_maximize(GtkWidget* window){
gtk_window_maximize(GTK_WINDOW(window));
}
void window_unmaximize(GtkWidget* window){
gtk_window_unmaximize(GTK_WINDOW(window));
}
void window_fullscreen(GtkWidget* window){
gtk_window_fullscreen(GTK_WINDOW(window));
}
void window_fullscreen_on_monitor(GtkWidget* window, GdkScreen* screen, gint monitor){
gtk_window_fullscreen_on_monitor(GTK_WINDOW(window),screen, monitor);
}
void window_unfullscreen(GtkWidget* window){
gtk_window_unfullscreen(GTK_WINDOW(window));
}
void window_set_keep_above(GtkWidget* window, gboolean setting){
gtk_window_set_keep_above(GTK_WINDOW(window), setting);
}
void window_set_keep_below(GtkWidget* window, gboolean setting){
gtk_window_set_keep_below(GTK_WINDOW(window), setting);
}
void window_begin_resize_drag(GtkWidget* window, GdkWindowEdge edge, gint button, gint root_x, gint root_y, guint32 timestamp){
gtk_window_begin_resize_drag(GTK_WINDOW(window),edge,button,root_x,root_y, timestamp);
}
void window_begin_move_drag(GtkWidget* window, gint button, gint root_x, gint root_y, guint32 timestamp){
gtk_window_begin_move_drag(GTK_WINDOW(window),button,root_x,root_y, timestamp);
}
void window_set_decorated(GtkWidget* window, gboolean setting){
gtk_window_set_decorated(GTK_WINDOW(window), setting);
}
void window_set_deletable(GtkWidget* window, gboolean setting){
gtk_window_set_deletable(GTK_WINDOW(window), setting);
}
void window_set_mnemonic_modifier(GtkWidget* window, GdkModifierType modifier){
gtk_window_set_mnemonic_modifier(GTK_WINDOW(window), modifier);
}
void window_set_type_hint(GtkWidget* window, GdkWindowTypeHint hint){
gtk_window_set_type_hint(GTK_WINDOW(window), hint);
}
void window_set_skip_taskbar_hint(GtkWidget* window, gboolean setting){
gtk_window_set_skip_taskbar_hint(GTK_WINDOW(window), setting);
}
void window_set_skip_pager_hint(GtkWidget* window, gboolean setting){
gtk_window_set_skip_pager_hint(GTK_WINDOW(window), setting);
}
void window_set_urgency_hint(GtkWidget* window, gboolean setting){
gtk_window_set_urgency_hint(GTK_WINDOW(window), setting);
}
void window_set_accept_focus(GtkWidget* window, gboolean setting){
gtk_window_set_accept_focus(GTK_WINDOW(window), setting);
}
void window_set_focus_on_map(GtkWidget* window, gboolean setting){
gtk_window_set_focus_on_map(GTK_WINDOW(window), setting);
}
void window_set_startup_id(GtkWidget* window, const gchar* startup_id){
gtk_window_set_startup_id(GTK_WINDOW(window), startup_id);
}
void window_set_role(GtkWidget* window, const gchar* role){
gtk_window_set_role(GTK_WINDOW(window), role);
}
gboolean window_get_decorated(GtkWidget* window){
return gtk_window_get_decorated(GTK_WINDOW(window)) ;
}
gboolean window_get_deletable(GtkWidget* window){
return gtk_window_get_deletable(GTK_WINDOW(window)) ;
}
GList* window_get_default_icon_list(){
return gtk_window_get_default_icon_list() ;
}
const gchar* window_get_default_icon_name() {
return gtk_window_get_default_icon_name() ;
}
void window_get_default_size(GtkWidget* window, gint* width, gint* height){
gtk_window_get_default_size(GTK_WINDOW(window),width, height);
}
gboolean window_get_destroy_with_parent(GtkWidget* window){
return gtk_window_get_destroy_with_parent(GTK_WINDOW(window)) ;
}
gboolean window_get_hide_titlebar_when_maximized(GtkWidget* window){
return gtk_window_get_hide_titlebar_when_maximized(GTK_WINDOW(window)) ;
}
GdkPixbuf* window_get_icon(GtkWidget* window){
return gtk_window_get_icon(GTK_WINDOW(window)) ;
}
GList* window_get_icon_list(GtkWidget* window){
return gtk_window_get_icon_list(GTK_WINDOW(window)) ;
}
const gchar* window_get_icon_name(GtkWidget* window) {
return gtk_window_get_icon_name(GTK_WINDOW(window)) ;
}
GdkModifierType window_get_mnemonic_modifier(GtkWidget* window){
return gtk_window_get_mnemonic_modifier(GTK_WINDOW(window)) ;
}
gboolean window_get_modal(GtkWidget* window){
return gtk_window_get_modal(GTK_WINDOW(window)) ;
}
void window_get_position(GtkWidget* window, gint* root_x, gint* root_y){
gtk_window_get_position(GTK_WINDOW(window),root_x, root_y);
}
const gchar* window_get_role(GtkWidget* window) {
return gtk_window_get_role(GTK_WINDOW(window)) ;
}
void window_get_size(GtkWidget* window, gint* width, gint* height){
gtk_window_get_size(GTK_WINDOW(window),width, height);
}
const gchar* window_get_title(GtkWidget* window) {
return gtk_window_get_title(GTK_WINDOW(window)) ;
}
GtkWindow* window_get_transient_for(GtkWidget* window){
return gtk_window_get_transient_for(GTK_WINDOW(window)) ;
}
GtkWidget* window_get_attached_to(GtkWidget* window){
return gtk_window_get_attached_to(GTK_WINDOW(window)) ;
}
GdkWindowTypeHint window_get_type_hint(GtkWidget* window){
return gtk_window_get_type_hint(GTK_WINDOW(window)) ;
}
gboolean window_get_skip_taskbar_hint(GtkWidget* window){
return gtk_window_get_skip_taskbar_hint(GTK_WINDOW(window)) ;
}
gboolean window_get_skip_pager_hint(GtkWidget* window){
return gtk_window_get_skip_pager_hint(GTK_WINDOW(window)) ;
}
gboolean window_get_urgency_hint(GtkWidget* window){
return gtk_window_get_urgency_hint(GTK_WINDOW(window)) ;
}
gboolean window_get_accept_focus(GtkWidget* window){
return gtk_window_get_accept_focus(GTK_WINDOW(window)) ;
}
gboolean window_get_focus_on_map(GtkWidget* window){
return gtk_window_get_focus_on_map(GTK_WINDOW(window)) ;
}
GtkWindowGroup* window_get_group(GtkWidget* window){
return gtk_window_get_group(GTK_WINDOW(window)) ;
}
gboolean window_has_group(GtkWidget* window){
return gtk_window_has_group(GTK_WINDOW(window)) ;
}
GtkWindowType window_get_window_type(GtkWidget* window){
return gtk_window_get_window_type(GTK_WINDOW(window)) ;
}
void window_move(GtkWidget* window, gint x, gint y){
gtk_window_move(GTK_WINDOW(window),x, y);
}





void window_resize(GtkWidget* window, gint width, gint height){
gtk_window_resize(GTK_WINDOW(window),width, height);
}




void window_set_default_icon_list(GList* list){
gtk_window_set_default_icon_list(list);
}
void window_set_default_icon(GdkPixbuf* icon){
gtk_window_set_default_icon(icon);
}
gboolean window_set_default_icon_from_file(const gchar* filename, GError** err){
return gtk_window_set_default_icon_from_file(filename, err) ;
}
void window_set_default_icon_name(const gchar* name){
gtk_window_set_default_icon_name(name);
}
void window_set_icon(GtkWidget* window, GdkPixbuf* icon){
gtk_window_set_icon(GTK_WINDOW(window), icon);
}
void window_set_icon_list(GtkWidget* window, GList* list){
gtk_window_set_icon_list(GTK_WINDOW(window), list);
}
gboolean window_set_icon_from_file(GtkWidget* window, const gchar* filename, GError** err){
return gtk_window_set_icon_from_file(GTK_WINDOW(window),filename, err) ;
}
void window_set_icon_name(GtkWidget* window, const gchar* name){
gtk_window_set_icon_name(GTK_WINDOW(window), name);
}
void window_set_auto_startup_notification(gboolean setting){
gtk_window_set_auto_startup_notification(setting);
}





gboolean window_get_mnemonics_visible(GtkWidget* window){
return gtk_window_get_mnemonics_visible(GTK_WINDOW(window)) ;
}
void window_set_mnemonics_visible(GtkWidget* window, gboolean setting){
gtk_window_set_mnemonics_visible(GTK_WINDOW(window), setting);
}
gboolean window_get_focus_visible(GtkWidget* window){
return gtk_window_get_focus_visible(GTK_WINDOW(window)) ;
}
void window_set_focus_visible(GtkWidget* window, gboolean setting){
gtk_window_set_focus_visible(GTK_WINDOW(window), setting);
}










GtkApplication* window_get_application(GtkWidget* window){
return gtk_window_get_application(GTK_WINDOW(window)) ;
}
void window_set_application(GtkWidget* window, GtkApplication* application){
gtk_window_set_application(GTK_WINDOW(window), application);
}
void window_set_has_user_ref_count(GtkWidget* window, gboolean setting){
gtk_window_set_has_user_ref_count(GTK_WINDOW(window), setting);
}
void window_set_titlebar(GtkWidget* window, GtkWidget* titlebar){
gtk_window_set_titlebar(GTK_WINDOW(window), titlebar);
}
GtkWidget* window_get_titlebar(GtkWidget* window){
gtk_window_get_titlebar(GTK_WINDOW(window));
}
void window_set_interactive_debugging(gboolean enable){
gtk_window_set_interactive_debugging(enable);
}



GtkWidget* dialog_new(){
return gtk_dialog_new() ;
}
template <typename... ID>
GtkWidget* dialog_new_with_buttons(const gchar* title, GtkWidget* window, GtkDialogFlags flags, const gchar* first_button_text, ID... ids){
return (gtk_dialog_new_with_buttons(title, GTK_WINDOW(window),flags,first_button_text,ids),...) ;
}
gint dialog_run(GtkDialog* dialog){
return gtk_dialog_run(dialog) ;
}
void dialog_response(GtkDialog* dialog, gint response_id){
gtk_dialog_response(dialog, response_id);
}
GtkWidget* dialog_add_button(GtkDialog* dialog, const gchar* button_text, gint response_id){
return gtk_dialog_add_button(dialog,button_text, response_id) ;
}
template <typename... ID>
void dialog_add_buttons(GtkDialog* dialog, const gchar* button_text, ID... ids){
(gtk_dialog_add_buttons(dialog,button_text,ids), ...);
}
void dialog_add_action_widget(GtkDialog* dialog, GtkWidget* child, gint response_id){
gtk_dialog_add_action_widget(dialog,child, response_id);
}
void dialog_set_default_response(GtkDialog* dialog, gint response_id){
gtk_dialog_set_default_response(dialog, response_id);
}
void dialog_set_response_sensitive(GtkDialog* dialog, gint response_id, gboolean setting){
gtk_dialog_set_response_sensitive(dialog,response_id, setting);
}
gint dialog_get_response_for_widget(GtkDialog* dialog, GtkWidget* widget){
return gtk_dialog_get_response_for_widget(dialog, widget) ;
}
GtkWidget* dialog_get_widget_for_response(GtkDialog* dialog, gint response_id){
return gtk_dialog_get_widget_for_response(dialog, response_id) ;
}


GtkWidget* dialog_get_content_area(GtkDialog* dialog){
return gtk_dialog_get_content_area(dialog) ;
}
GtkWidget* dialog_get_header_bar(GtkDialog* dialog){
return gtk_dialog_get_header_bar(dialog) ;
}














template <typename... Arguments>
GtkWidget* message_dialog_new(GtkWidget* window, GtkDialogFlags flags, GtkMessageType type, GtkButtonsType buttons, const gchar* message_format, Arguments... args){
return (gtk_message_dialog_new(GTK_WINDOW(window),flags,type,buttons,message_format,args), ...) ;
}
template <typename... Arguments>
GtkWidget* message_dialog_new_with_markup(GtkWidget* parent, GtkDialogFlags flags, GtkMessageType type, GtkButtonsType buttons, const gchar* message_format, Arguments... args){
return (gtk_message_dialog_new_with_markup(GTK_WINDOW(parent),flags,type,buttons,message_format,args), ...) ;
}
void message_dialog_set_markup(GtkMessageDialog* message_dialog, const gchar* str){
gtk_message_dialog_set_markup(message_dialog, str);
}





template <typename... Arguments>
void message_dialog_format_secondary_text(GtkMessageDialog* message_dialog, const gchar* message_format, Arguments... args){
(gtk_message_dialog_format_secondary_text(message_dialog,message_format,args), ...);
}
template <typename... Arguments>
void message_dialog_format_secondary_markup(GtkMessageDialog* message_dialog, const gchar* message_format, Arguments... args){
(gtk_message_dialog_format_secondary_markup(message_dialog,message_format,args), ...);
}
GtkWidget* message_dialog_get_message_area(GtkMessageDialog* message_dialog){
return gtk_message_dialog_get_message_area(message_dialog) ;
}



GtkWidget* about_dialog_new(){
return gtk_about_dialog_new() ;
}
const gchar* about_dialog_get_program_name(GtkAboutDialog* about) {
return gtk_about_dialog_get_program_name(about) ;
}
void about_dialog_set_program_name(GtkAboutDialog* about, const gchar* name){
gtk_about_dialog_set_program_name(about, name);
}
const gchar* about_dialog_get_version(GtkAboutDialog* about) {
return gtk_about_dialog_get_version(about) ;
}
void about_dialog_set_version(GtkAboutDialog* dialog, const gchar* version){
gtk_about_dialog_set_version(dialog, version);
}
const gchar* about_dialog_get_copyright(GtkAboutDialog* dialog) {
return gtk_about_dialog_get_copyright(dialog) ;
}
void about_dialog_set_copyright(GtkAboutDialog* about, const gchar* copyright){
gtk_about_dialog_set_copyright(about, copyright);
}
const gchar* about_dialog_get_comments(GtkAboutDialog* about) {
return gtk_about_dialog_get_comments(about) ;
}
void about_dialog_set_comments(GtkAboutDialog* about, const gchar* comments){
gtk_about_dialog_set_comments(about, comments);
}
const gchar* about_dialog_get_license(GtkAboutDialog* about) {
return gtk_about_dialog_get_license(about) ;
}
void about_dialog_set_license(GtkAboutDialog* about, const gchar* license){
gtk_about_dialog_set_license(about, license);
}
gboolean about_dialog_get_wrap_license(GtkAboutDialog* about){
return gtk_about_dialog_get_wrap_license(about) ;
}
void about_dialog_set_wrap_license(GtkAboutDialog* about, gboolean wrap_license){
gtk_about_dialog_set_wrap_license(about, wrap_license);
}
GtkLicense about_dialog_get_license_type(GtkAboutDialog* about){
return gtk_about_dialog_get_license_type(about) ;
}
void about_dialog_set_license_type(GtkAboutDialog* about, GtkLicense license_type){
gtk_about_dialog_set_license_type(about, license_type);
}
const gchar* about_dialog_get_website(GtkAboutDialog* about) {
return gtk_about_dialog_get_website(about) ;
}
void about_dialog_set_website(GtkAboutDialog* about, const gchar* website){
gtk_about_dialog_set_website(about, website);
}
const gchar* about_dialog_get_website_label(GtkAboutDialog* about) {
return gtk_about_dialog_get_website_label(about) ;
}
void about_dialog_set_website_label(GtkAboutDialog* about, const gchar* website_label){
gtk_about_dialog_set_website_label(about, website_label);
}
const gchar* const * about_dialog_get_authors(GtkAboutDialog* about) {
return gtk_about_dialog_get_authors(about) ;
}
void about_dialog_set_authors(GtkAboutDialog* about, const gchar** authors){
gtk_about_dialog_set_authors(about, authors);
}
const gchar* const * about_dialog_get_artists(GtkAboutDialog* about) {
return gtk_about_dialog_get_artists(about) ;
}
void about_dialog_set_artists(GtkAboutDialog* about, const gchar** artists){
gtk_about_dialog_set_artists(about, artists);
}
const gchar* const * about_dialog_get_documenters(GtkAboutDialog* about) {
return gtk_about_dialog_get_documenters(about) ;
}
void about_dialog_set_documenters(GtkAboutDialog* about, const gchar** documenters){
gtk_about_dialog_set_documenters(about, documenters);
}
const gchar* about_dialog_get_translator_credits(GtkAboutDialog* about) {
return gtk_about_dialog_get_translator_credits(about) ;
}
void about_dialog_set_translator_credits(GtkAboutDialog* about, const gchar* translator_credits){
gtk_about_dialog_set_translator_credits(about, translator_credits);
}
GdkPixbuf* about_dialog_get_logo(GtkAboutDialog* about){
return gtk_about_dialog_get_logo(about) ;
}
void about_dialog_set_logo(GtkAboutDialog* about, GdkPixbuf* logo){
gtk_about_dialog_set_logo(about, logo);
}
const gchar* about_dialog_get_logo_icon_name(GtkAboutDialog* about) {
return gtk_about_dialog_get_logo_icon_name(about) ;
}
void about_dialog_set_logo_icon_name(GtkAboutDialog* about, const gchar* icon_name){
gtk_about_dialog_set_logo_icon_name(about, icon_name);
}
void about_dialog_add_credit_section(GtkAboutDialog* about, const gchar* section_name, const gchar** people){
gtk_about_dialog_add_credit_section(about,section_name, people);
}
template <typename... Value>
void show_about_dialog(GtkWidget* parent, const gchar* first_property_name, Value... first_property){
(gtk_show_about_dialog(GTK_WINDOW(parent),first_property_name,first_property), ...);
}



GtkWidget* assistant_new(){
return gtk_assistant_new() ;
}
gint assistant_get_current_page(GtkAssistant* assistant){
return gtk_assistant_get_current_page(assistant) ;
}
void assistant_set_current_page(GtkAssistant* assistant, gint page_num){
gtk_assistant_set_current_page(assistant, page_num);
}
gint assistant_get_n_pages(GtkAssistant* assistant){
return gtk_assistant_get_n_pages(assistant) ;
}
GtkWidget* assistant_get_nth_page(GtkAssistant* assistant, gint page_num){
return gtk_assistant_get_nth_page(assistant, page_num) ;
}
gint assistant_prepend_page(GtkAssistant* assistant, GtkWidget* page){
return gtk_assistant_prepend_page(assistant, page) ;
}
gint assistant_append_page(GtkAssistant* assistant, GtkWidget* page){
return gtk_assistant_append_page(assistant, page) ;
}
gint assistant_insert_page(GtkAssistant* assistant, GtkWidget* page, gint position){
return gtk_assistant_insert_page(assistant,page, position) ;
}
void assistant_remove_page(GtkAssistant* assistant, gint page_num){
gtk_assistant_remove_page(assistant, page_num);
}



void assistant_set_forward_page_func(GtkAssistant* assistant, GtkAssistantPageFunc page_func, gpointer data, GDestroyNotify destroy){
gtk_assistant_set_forward_page_func(assistant,page_func,data, destroy);
}
void assistant_set_page_type(GtkAssistant* assistant, GtkWidget* page, GtkAssistantPageType type){
gtk_assistant_set_page_type(assistant,page, type);
}
GtkAssistantPageType assistant_get_page_type(GtkAssistant* assistant, GtkWidget* page){
return gtk_assistant_get_page_type(assistant, page) ;
}
void assistant_set_page_title(GtkAssistant* assistant, GtkWidget* page, const gchar* title){
gtk_assistant_set_page_title(assistant,page, title);
}
const gchar* assistant_get_page_title(GtkAssistant* assistant, GtkWidget* page) {
return gtk_assistant_get_page_title(assistant, page) ;
}














void assistant_set_page_complete(GtkAssistant* assistant, GtkWidget* page, gboolean complete){
gtk_assistant_set_page_complete(assistant,page, complete);
}
gboolean assistant_get_page_complete(GtkAssistant* assistant, GtkWidget* page){
return gtk_assistant_get_page_complete(assistant, page) ;
}
void assistant_set_page_has_padding(GtkAssistant* assistant, GtkWidget* page, gboolean has_padding){
gtk_assistant_set_page_has_padding(assistant,page, has_padding);
}
gboolean assistant_get_page_has_padding(GtkAssistant* assistant, GtkWidget* page){
return gtk_assistant_get_page_has_padding(assistant, page) ;
}
void assistant_add_action_widget(GtkAssistant* assistant, GtkWidget* child){
gtk_assistant_add_action_widget(assistant, child);
}
void assistant_remove_action_widget(GtkAssistant* assistant, GtkWidget* child){
gtk_assistant_remove_action_widget(assistant, child);
}
void assistant_update_buttons_state(GtkAssistant* assistant){
gtk_assistant_update_buttons_state(assistant);
}
void assistant_commit(GtkAssistant* assistant){
gtk_assistant_commit(assistant);
}
void assistant_next_page(GtkAssistant* assistant){
gtk_assistant_next_page(assistant);
}
void assistant_previous_page(GtkAssistant* assistant){
gtk_assistant_previous_page(assistant);
}



GtkWidget* invisible_new(){
return gtk_invisible_new() ;
}
GtkWidget* invisible_new_for_screen(GdkScreen* screen){
return gtk_invisible_new_for_screen(screen) ;
}
void invisible_set_screen(GtkInvisible* invisible, GdkScreen* screen){
gtk_invisible_set_screen(invisible, screen);
}
GdkScreen* invisible_get_screen(GtkInvisible* invisible){
return gtk_invisible_get_screen(invisible) ;
}



GtkWidget* offscreen_window_new(){
return gtk_offscreen_window_new() ;
}
cairo_surface_t* offscreen_window_get_surface(GtkOffscreenWindow* offscreen){
return gtk_offscreen_window_get_surface(offscreen) ;
}
GdkPixbuf* offscreen_window_get_pixbuf(GtkOffscreenWindow* offscreen){
return gtk_offscreen_window_get_pixbuf(offscreen) ;
}



GtkWindowGroup* window_group_new(){
return gtk_window_group_new() ;
}
void window_group_add_window(GtkWindowGroup* window_group, GtkWidget* window){
gtk_window_group_add_window(window_group, GTK_WINDOW(window));
}
void window_group_remove_window(GtkWindowGroup* window_group, GtkWidget* window){
gtk_window_group_remove_window(window_group, GTK_WINDOW(window));
}
GList* window_group_list_windows(GtkWindowGroup* window_group){
return gtk_window_group_list_windows(window_group) ;
}
GtkWidget* window_group_get_current_grab(GtkWindowGroup* window_group){
return gtk_window_group_get_current_grab(window_group) ;
}
GtkWidget* window_group_get_current_device_grab(GtkWindowGroup* window_group, GdkDevice* device){
return gtk_window_group_get_current_device_grab(window_group, device) ;
}



GtkWidget* box_new(GtkOrientation orientation, gint spacing){
return gtk_box_new(orientation, spacing) ;
}
void box_pack_start(GtkBox* box, GtkWidget* child, gboolean expand, gboolean fill, guint padding){
gtk_box_pack_start(box,child,expand,fill, padding);
}
void box_pack_end(GtkBox* box, GtkWidget* child, gboolean expand, gboolean fill, guint padding){
gtk_box_pack_end(box,child,expand,fill, padding);
}
gboolean box_get_homogeneous(GtkBox* box){
return gtk_box_get_homogeneous(box) ;
}
void box_set_homogeneous(GtkBox* box, gboolean homogeneous){
gtk_box_set_homogeneous(box, homogeneous);
}
gint box_get_spacing(GtkBox* box){
return gtk_box_get_spacing(box) ;
}
void box_set_spacing(GtkBox* box, gint spacing){
gtk_box_set_spacing(box, spacing);
}
void box_reorder_child(GtkBox* box, GtkWidget* child, gint position){
gtk_box_reorder_child(box,child, position);
}
void box_query_child_packing(GtkBox* box, GtkWidget* child, gboolean* expand, gboolean* fill, guint* padding, GtkPackType* pack_type){
gtk_box_query_child_packing(box,child,expand,fill,padding, pack_type);
}
void box_set_child_packing(GtkBox* box, GtkWidget* child, gboolean expand, gboolean fill, guint padding, GtkPackType pack_type){
gtk_box_set_child_packing(box,child,expand,fill,padding, pack_type);
}
GtkBaselinePosition box_get_baseline_position(GtkBox* box){
return gtk_box_get_baseline_position(box) ;
}
void box_set_baseline_position(GtkBox* box, GtkBaselinePosition position){
gtk_box_set_baseline_position(box, position);
}
GtkWidget* box_get_center_widget(GtkBox* box){
return gtk_box_get_center_widget(box) ;
}
void box_set_center_widget(GtkBox* box, GtkWidget* widget){
gtk_box_set_center_widget(box, widget);
}



GtkWidget* grid_new(){
return gtk_grid_new() ;
}
void grid_attach(GtkGrid* grid, GtkWidget* child, gint left, gint top, gint width, gint height){
gtk_grid_attach(grid,child,left,top,width, height);
}
void grid_attach_next_to(GtkGrid* grid, GtkWidget* child, GtkWidget* sibling, GtkPositionType side, gint width, gint height){
gtk_grid_attach_next_to(grid,child,sibling,side,width, height);
}
GtkWidget* grid_get_child_at(GtkGrid* grid, gint left, gint top){
return gtk_grid_get_child_at(grid,left, top) ;
}
void grid_insert_row(GtkGrid* grid, gint position){
gtk_grid_insert_row(grid, position);
}
void grid_insert_column(GtkGrid* grid, gint position){
gtk_grid_insert_column(grid, position);
}
void grid_remove_row(GtkGrid* grid, gint position){
gtk_grid_remove_row(grid, position);
}
void grid_remove_column(GtkGrid* grid, gint position){
gtk_grid_remove_column(grid, position);
}
void grid_insert_next_to(GtkGrid* grid, GtkWidget* sibling, GtkPositionType side){
gtk_grid_insert_next_to(grid,sibling, side);
}
void grid_set_row_homogeneous(GtkGrid* grid, gboolean homogeneous){
gtk_grid_set_row_homogeneous(grid, homogeneous);
}
gboolean grid_get_row_homogeneous(GtkGrid* grid){
return gtk_grid_get_row_homogeneous(grid) ;
}
void grid_set_row_spacing(GtkGrid* grid, guint spacing){
gtk_grid_set_row_spacing(grid, spacing);
}
guint grid_get_row_spacing(GtkGrid* grid){
return gtk_grid_get_row_spacing(grid) ;
}
void grid_set_column_homogeneous(GtkGrid* grid, gboolean homogeneous){
gtk_grid_set_column_homogeneous(grid, homogeneous);
}
gboolean grid_get_column_homogeneous(GtkGrid* grid){
return gtk_grid_get_column_homogeneous(grid) ;
}
void grid_set_column_spacing(GtkGrid* grid, guint spacing){
gtk_grid_set_column_spacing(grid, spacing);
}
guint grid_get_column_spacing(GtkGrid* grid){
return gtk_grid_get_column_spacing(grid) ;
}
guint grid_get_baseline_row(GtkGrid* grid){
return gtk_grid_get_baseline_row(grid) ;
}
void grid_set_baseline_row(GtkGrid* grid, gint row){
gtk_grid_set_baseline_row(grid, row);
}
GtkBaselinePosition grid_get_row_baseline_position(GtkGrid* grid, gint row){
return gtk_grid_get_row_baseline_position(grid, row) ;
}
void grid_set_row_baseline_position(GtkGrid* grid, gint row, GtkBaselinePosition pos){
gtk_grid_set_row_baseline_position(grid,row, pos);
}



GtkWidget* revealer_new(){
return gtk_revealer_new() ;
}
gboolean revealer_get_reveal_child(GtkRevealer* revealer){
return gtk_revealer_get_reveal_child(revealer) ;
}
void revealer_set_reveal_child(GtkRevealer* revealer, gboolean reveal_child){
gtk_revealer_set_reveal_child(revealer, reveal_child);
}
gboolean revealer_get_child_revealed(GtkRevealer* revealer){
return gtk_revealer_get_child_revealed(revealer) ;
}
guint revealer_get_transition_duration(GtkRevealer* revealer){
return gtk_revealer_get_transition_duration(revealer) ;
}
void revealer_set_transition_duration(GtkRevealer* revealer, guint duration){
gtk_revealer_set_transition_duration(revealer, duration);
}
GtkRevealerTransitionType revealer_get_transition_type(GtkRevealer* revealer){
return gtk_revealer_get_transition_type(revealer) ;
}
void revealer_set_transition_type(GtkRevealer* revealer, GtkRevealerTransitionType transition){
gtk_revealer_set_transition_type(revealer, transition);
}














GtkWidget* list_box_new(){
return gtk_list_box_new() ;
}
void list_box_prepend(GtkListBox* box, GtkWidget* child){
gtk_list_box_prepend(box, child);
}
void list_box_insert(GtkListBox* box, GtkWidget* child, gint position){
gtk_list_box_insert(box,child, position);
}
void list_box_select_row(GtkListBox* box, GtkListBoxRow* row){
gtk_list_box_select_row(box, row);
}
void list_box_unselect_row(GtkListBox* box, GtkListBoxRow* row){
gtk_list_box_unselect_row(box, row);
}
void list_box_select_all(GtkListBox* box){
gtk_list_box_select_all(box);
}
void list_box_unselect_all(GtkListBox* box){
gtk_list_box_unselect_all(box);
}
GtkListBoxRow* list_box_get_selected_row(GtkListBox* box){
return gtk_list_box_get_selected_row(box) ;
}




void list_box_selected_foreach(GtkListBox* box, GtkListBoxForeachFunc func, gpointer data){
gtk_list_box_selected_foreach(box,func, data);
}
GList* list_box_get_selected_rows(GtkListBox* box){
return gtk_list_box_get_selected_rows(box) ;
}
void list_box_set_selection_mode(GtkListBox* box, GtkSelectionMode mode){
gtk_list_box_set_selection_mode(box, mode);
}
GtkSelectionMode list_box_get_selection_mode(GtkListBox* box){
return gtk_list_box_get_selection_mode(box) ;
}
void list_box_set_activate_on_single_click(GtkListBox* box, gboolean single){
gtk_list_box_set_activate_on_single_click(box, single);
}
gboolean list_box_get_activate_on_single_click(GtkListBox* box){
return gtk_list_box_get_activate_on_single_click(box) ;
}
GtkAdjustment* list_box_get_adjustment(GtkListBox* box){
return gtk_list_box_get_adjustment(box) ;
}
void list_box_set_adjustment(GtkListBox* box, GtkAdjustment* adjustment){
gtk_list_box_set_adjustment(box, adjustment);
}
void list_box_set_placeholder(GtkListBox* box, GtkWidget* placeholder){
gtk_list_box_set_placeholder(box, placeholder);
}
GtkListBoxRow* list_box_get_row_at_index(GtkListBox* box, gint index_){
return gtk_list_box_get_row_at_index(box, index_) ;
}
GtkListBoxRow* list_box_get_row_at_y(GtkListBox* box, gint y){
return gtk_list_box_get_row_at_y(box, y) ;
}
void list_box_invalidate_filter(GtkListBox* box){
gtk_list_box_invalidate_filter(box);
}
void list_box_invalidate_headers(GtkListBox* box){
gtk_list_box_invalidate_headers(box);
}
void list_box_invalidate_sort(GtkListBox* box){
gtk_list_box_invalidate_sort(box);
}
void list_box_set_filter_func(GtkListBox* box, GtkListBoxFilterFunc filter_func, gpointer user_data, GDestroyNotify destroy){
gtk_list_box_set_filter_func(box,filter_func,user_data, destroy);
}
void list_box_set_header_func(GtkListBox* box, GtkListBoxUpdateHeaderFunc update_header, gpointer user_data, GDestroyNotify destroy){
gtk_list_box_set_header_func(box,update_header,user_data, destroy);
}
void list_box_set_sort_func(GtkListBox* box, GtkListBoxSortFunc sort_func, gpointer user_data, GDestroyNotify destroy){
gtk_list_box_set_sort_func(box,sort_func,user_data, destroy);
}
void list_box_drag_highlight_row(GtkListBox* box, GtkListBoxRow* row){
gtk_list_box_drag_highlight_row(box, row);
}
void list_box_drag_unhighlight_row(GtkListBox* box){
gtk_list_box_drag_unhighlight_row(box);
}



void list_box_bind_model(GtkListBox* box, GListModel* model, GtkListBoxCreateWidgetFunc create_widget_func, gpointer user_data, GDestroyNotify user_data_free_func){
gtk_list_box_bind_model(box,model,create_widget_func,user_data, user_data_free_func);
}
GtkWidget* list_box_row_new(){
return gtk_list_box_row_new() ;
}
void list_box_row_changed(GtkListBoxRow* row){
gtk_list_box_row_changed(row);
}
gboolean list_box_row_is_selected(GtkListBoxRow* row){
return gtk_list_box_row_is_selected(row) ;
}
GtkWidget* list_box_row_get_header(GtkListBoxRow* row){
return gtk_list_box_row_get_header(row) ;
}
void list_box_row_set_header(GtkListBoxRow* row, GtkWidget* header){
gtk_list_box_row_set_header(row, header);
}
gint list_box_row_get_index(GtkListBoxRow* row){
return gtk_list_box_row_get_index(row) ;
}
void list_box_row_set_activatable(GtkListBoxRow* row, gboolean activatable){
gtk_list_box_row_set_activatable(row, activatable);
}
gboolean list_box_row_get_activatable(GtkListBoxRow* row){
return gtk_list_box_row_get_activatable(row) ;
}
void list_box_row_set_selectable(GtkListBoxRow* row, gboolean selectable){
gtk_list_box_row_set_selectable(row, selectable);
}
gboolean list_box_row_get_selectable(GtkListBoxRow* row){
return gtk_list_box_row_get_selectable(row) ;
}



GtkWidget* flow_box_new(){
return gtk_flow_box_new() ;
}
void flow_box_insert(GtkFlowBox* box, GtkWidget* widget, gint position){
gtk_flow_box_insert(box,widget, position);
}
GtkFlowBoxChild* flow_box_get_child_at_index(GtkFlowBox* box, gint idx){
return gtk_flow_box_get_child_at_index(box, idx) ;
}
GtkFlowBoxChild* flow_box_get_child_at_pos(GtkFlowBox* box, gint x, gint y){
return gtk_flow_box_get_child_at_pos(box,x, y) ;
}
void flow_box_set_hadjustment(GtkFlowBox* box, GtkAdjustment* adjustment){
gtk_flow_box_set_hadjustment(box, adjustment);
}
void flow_box_set_vadjustment(GtkFlowBox* box, GtkAdjustment* adjustment){
gtk_flow_box_set_vadjustment(box, adjustment);
}
void flow_box_set_homogeneous(GtkFlowBox* box, gboolean homogeneous){
gtk_flow_box_set_homogeneous(box, homogeneous);
}
gboolean flow_box_get_homogeneous(GtkFlowBox* box){
return gtk_flow_box_get_homogeneous(box) ;
}
void flow_box_set_row_spacing(GtkFlowBox* box, guint spacing){
gtk_flow_box_set_row_spacing(box, spacing);
}
guint flow_box_get_row_spacing(GtkFlowBox* box){
return gtk_flow_box_get_row_spacing(box) ;
}
void flow_box_set_column_spacing(GtkFlowBox* box, guint spacing){
gtk_flow_box_set_column_spacing(box, spacing);
}
guint flow_box_get_column_spacing(GtkFlowBox* box){
return gtk_flow_box_get_column_spacing(box) ;
}
void flow_box_set_min_children_per_line(GtkFlowBox* box, guint n_children){
gtk_flow_box_set_min_children_per_line(box, n_children);
}
guint flow_box_get_min_children_per_line(GtkFlowBox* box){
return gtk_flow_box_get_min_children_per_line(box) ;
}
void flow_box_set_max_children_per_line(GtkFlowBox* box, guint n_children){
gtk_flow_box_set_max_children_per_line(box, n_children);
}
guint flow_box_get_max_children_per_line(GtkFlowBox* box){
return gtk_flow_box_get_max_children_per_line(box) ;
}
void flow_box_set_activate_on_single_click(GtkFlowBox* box, gboolean single){
gtk_flow_box_set_activate_on_single_click(box, single);
}
gboolean flow_box_get_activate_on_single_click(GtkFlowBox* box){
return gtk_flow_box_get_activate_on_single_click(box) ;
}




void flow_box_selected_foreach(GtkFlowBox* box, GtkFlowBoxForeachFunc func, gpointer data){
gtk_flow_box_selected_foreach(box,func, data);
}
GList* flow_box_get_selected_children(GtkFlowBox* box){
return gtk_flow_box_get_selected_children(box) ;
}
void flow_box_select_child(GtkFlowBox* box, GtkFlowBoxChild* child){
gtk_flow_box_select_child(box, child);
}
void flow_box_unselect_child(GtkFlowBox* box, GtkFlowBoxChild* child){
gtk_flow_box_unselect_child(box, child);
}
void flow_box_select_all(GtkFlowBox* box){
gtk_flow_box_select_all(box);
}
void flow_box_unselect_all(GtkFlowBox* box){
gtk_flow_box_unselect_all(box);
}
void flow_box_set_selection_mode(GtkFlowBox* box, GtkSelectionMode mode){
gtk_flow_box_set_selection_mode(box, mode);
}
GtkSelectionMode flow_box_get_selection_mode(GtkFlowBox* box){
return gtk_flow_box_get_selection_mode(box) ;
}



void flow_box_set_filter_func(GtkFlowBox* box, GtkFlowBoxFilterFunc filter_func, gpointer user_data, GDestroyNotify destroy){
gtk_flow_box_set_filter_func(box,filter_func,user_data, destroy);
}
void flow_box_invalidate_filter(GtkFlowBox* box){
gtk_flow_box_invalidate_filter(box);
}




void flow_box_set_sort_func(GtkFlowBox* box, GtkFlowBoxSortFunc sort_func, gpointer user_data, GDestroyNotify destroy){
gtk_flow_box_set_sort_func(box,sort_func,user_data,destroy);
}
void flow_box_invalidate_sort(GtkFlowBox* box){
gtk_flow_box_invalidate_sort(box);
}



void flow_box_bind_model(GtkFlowBox* box, GListModel *model, GtkFlowBoxCreateWidgetFunc create_widget_func, gpointer user_data, GDestroyNotify user_data_free_func){
gtk_flow_box_bind_model(box,model,create_widget_func,user_data, user_data_free_func);
}
GtkWidget* flow_box_child_new(){
return gtk_flow_box_child_new() ;
}
gint flow_box_child_get_index(GtkFlowBoxChild* child){
return gtk_flow_box_child_get_index(child) ;
}
gboolean flow_box_child_is_selected(GtkFlowBoxChild* child){
return gtk_flow_box_child_is_selected(child) ;
}
void flow_box_child_changed(GtkFlowBoxChild* child){
gtk_flow_box_child_changed(child);
}



GtkWidget* stack_new(){
return gtk_stack_new() ;
}
void stack_add_named(GtkStack* stack, GtkWidget* child, const gchar* name){
gtk_stack_add_named(stack,child, name);
}
void stack_add_titled(GtkStack* stack, GtkWidget* child, const gchar* name, const gchar* title){
gtk_stack_add_titled(stack,child,name, title);
}
GtkWidget* stack_get_child_by_name(GtkStack* stack, const gchar* name){
return gtk_stack_get_child_by_name(stack, name) ;
}
void stack_set_visible_child(GtkStack* stack, GtkWidget* child){
gtk_stack_set_visible_child(stack, child);
}
GtkWidget* stack_get_visible_child(GtkStack* stack){
return gtk_stack_get_visible_child(stack) ;
}
void stack_set_visible_child_name(GtkStack* stack, const gchar* name){
gtk_stack_set_visible_child_name(stack, name);
}
const gchar* stack_get_visible_child_name(GtkStack* stack) {
return gtk_stack_get_visible_child_name(stack) ;
}
void stack_set_visible_child_full(GtkStack* stack, const gchar* name, GtkStackTransitionType transition){
gtk_stack_set_visible_child_full(stack,name, transition);
}
void stack_set_homogeneous(GtkStack* stack, gboolean homogeneous){
gtk_stack_set_homogeneous(stack, homogeneous);
}
gboolean stack_get_homogeneous(GtkStack* stack){
return gtk_stack_get_homogeneous(stack) ;
}
void stack_set_hhomogeneous(GtkStack* stack, gboolean hhomogeneous){
gtk_stack_set_hhomogeneous(stack, hhomogeneous);
}
gboolean stack_get_hhomogeneous(GtkStack* stack){
return gtk_stack_get_hhomogeneous(stack) ;
}
void stack_set_vhomogeneous(GtkStack* stack, gboolean vhomogeneous){
gtk_stack_set_vhomogeneous(stack, vhomogeneous);
}
gboolean stack_get_vhomogeneous(GtkStack* stack){
return gtk_stack_get_vhomogeneous(stack) ;
}
void stack_set_transition_duration(GtkStack* stack, guint duration){
gtk_stack_set_transition_duration(stack, duration);
}
guint stack_get_transition_duration(GtkStack* stack){
return gtk_stack_get_transition_duration(stack) ;
}
void stack_set_transition_type(GtkStack* stack, GtkStackTransitionType transition){
gtk_stack_set_transition_type(stack, transition);
}
GtkStackTransitionType stack_get_transition_type(GtkStack* stack){
return gtk_stack_get_transition_type(stack) ;
}
gboolean stack_get_transition_running(GtkStack* stack){
return gtk_stack_get_transition_running(stack) ;
}
gboolean stack_get_interpolate_size(GtkStack* stack){
return gtk_stack_get_interpolate_size(stack) ;
}
void stack_set_interpolate_size(GtkStack* stack, gboolean interpolate_size){
gtk_stack_set_interpolate_size(stack, interpolate_size);
}



GtkWidget* stack_switcher_new(){
return gtk_stack_switcher_new() ;
}
void stack_switcher_set_stack(GtkStackSwitcher* switcher, GtkStack* stack){
gtk_stack_switcher_set_stack(switcher, stack);
}
GtkStack* stack_switcher_get_stack(GtkStackSwitcher* switcher){
return gtk_stack_switcher_get_stack(switcher) ;
}



GtkWidget* stack_sidebar_new(){
return gtk_stack_sidebar_new() ;
}
void stack_sidebar_set_stack(GtkStackSidebar* sidebar, GtkStack* stack){
gtk_stack_sidebar_set_stack(sidebar, stack);
}
GtkStack* stack_sidebar_get_stack(GtkStackSidebar* sidebar){
return gtk_stack_sidebar_get_stack(sidebar) ;
}



GtkWidget* action_bar_new(){
return gtk_action_bar_new() ;
}
void action_bar_pack_start(GtkActionBar* action_bar, GtkWidget* child){
gtk_action_bar_pack_start(action_bar, child);
}
void action_bar_pack_end(GtkActionBar* action_bar, GtkWidget* child){
gtk_action_bar_pack_end(action_bar, child);
}
GtkWidget* action_bar_get_center_widget(GtkActionBar* action_bar){
return gtk_action_bar_get_center_widget(action_bar) ;
}
void action_bar_set_center_widget(GtkActionBar* action_bar, GtkWidget* center_widget){
gtk_action_bar_set_center_widget(action_bar, center_widget);
}



GtkWidget* header_bar_new(){
return gtk_header_bar_new() ;
}
void header_bar_set_title(GtkHeaderBar* bar, const gchar* title){
gtk_header_bar_set_title(bar, title);
}
const gchar* header_bar_get_title(GtkHeaderBar* bar) {
return gtk_header_bar_get_title(bar) ;
}
void header_bar_set_subtitle(GtkHeaderBar* bar, const gchar* subtitle){
gtk_header_bar_set_subtitle(bar, subtitle);
}
const gchar* header_bar_get_subtitle(GtkHeaderBar* bar) {
return gtk_header_bar_get_subtitle(bar) ;
}
void header_bar_set_has_subtitle(GtkHeaderBar* bar, gboolean setting){
gtk_header_bar_set_has_subtitle(bar, setting);
}
gboolean header_bar_get_has_subtitle(GtkHeaderBar* bar){
return gtk_header_bar_get_has_subtitle(bar) ;
}
void header_bar_set_custom_title(GtkHeaderBar* bar, GtkWidget* title_widget){
gtk_header_bar_set_custom_title(bar, title_widget);
}
GtkWidget* header_bar_get_custom_title(GtkHeaderBar* bar){
return gtk_header_bar_get_custom_title(bar) ;
}
void header_bar_pack_start(GtkHeaderBar* bar, GtkWidget* child){
gtk_header_bar_pack_start(bar, child);
}
void header_bar_pack_end(GtkHeaderBar* bar, GtkWidget* child){
gtk_header_bar_pack_end(bar, child);
}
void header_bar_set_show_close_button(GtkHeaderBar* bar, gboolean setting){
gtk_header_bar_set_show_close_button(bar, setting);
}
gboolean header_bar_get_show_close_button(GtkHeaderBar* bar){
return gtk_header_bar_get_show_close_button(bar) ;
}
void header_bar_set_decoration_layout(GtkHeaderBar* bar, const gchar* layout){
gtk_header_bar_set_decoration_layout(bar, layout);
}
const gchar* header_bar_get_decoration_layout(GtkHeaderBar* bar) {
return gtk_header_bar_get_decoration_layout(bar) ;
}



GtkWidget* overlay_new(){
return gtk_overlay_new() ;
}
void overlay_add_overlay(GtkOverlay* overlay, GtkWidget* widget){
gtk_overlay_add_overlay(overlay, widget);
}
void overlay_reorder_overlay(GtkOverlay* overlay, GtkWidget* child, int index_){
gtk_overlay_reorder_overlay(overlay,child, index_);
}
gboolean overlay_get_overlay_pass_through(GtkOverlay* overlay, GtkWidget* widget){
return gtk_overlay_get_overlay_pass_through(overlay, widget) ;
}
void overlay_set_overlay_pass_through(GtkOverlay* overlay, GtkWidget* widget, gboolean pass_through){
gtk_overlay_set_overlay_pass_through(overlay,widget, pass_through);
}



GtkWidget* button_box_new(GtkOrientation orientation){
return gtk_button_box_new(orientation) ;
}
GtkButtonBoxStyle button_box_get_layout(GtkButtonBox* widget){
return gtk_button_box_get_layout(widget) ;
}
gboolean button_box_get_child_secondary(GtkButtonBox* widget, GtkWidget* child){
return gtk_button_box_get_child_secondary(widget, child) ;
}
gboolean button_box_get_child_non_homogeneous(GtkButtonBox* widget, GtkWidget* child){
return gtk_button_box_get_child_non_homogeneous(widget, child) ;
}
void button_box_set_layout(GtkButtonBox* widget, GtkButtonBoxStyle layout_style){
gtk_button_box_set_layout(widget, layout_style);
}
void button_box_set_child_secondary(GtkButtonBox* widget, GtkWidget* child, gboolean is_secondary){
gtk_button_box_set_child_secondary(widget,child, is_secondary);
}
void button_box_set_child_non_homogeneous(GtkButtonBox* widget, GtkWidget* child, gboolean non_homogeneous){
gtk_button_box_set_child_non_homogeneous(widget,child, non_homogeneous);
}



GtkWidget* paned_new(GtkOrientation orientation){
return gtk_paned_new(orientation) ;
}
void paned_add1(GtkPaned* paned, GtkWidget* child){
gtk_paned_add1(paned, child);
}
void paned_add2(GtkPaned* paned, GtkWidget* child){
gtk_paned_add2(paned, child);
}
void paned_pack1(GtkPaned* paned, GtkWidget* child, gboolean resize, gboolean shrink){
gtk_paned_pack1(paned,child,resize, shrink);
}
void paned_pack2(GtkPaned* paned, GtkWidget* child, gboolean resize, gboolean shrink){
gtk_paned_pack2(paned,child,resize, shrink);
}
GtkWidget* paned_get_child1(GtkPaned* paned){
return gtk_paned_get_child1(paned) ;
}
GtkWidget* paned_get_child2(GtkPaned* paned){
return gtk_paned_get_child2(paned) ;
}
void paned_set_position(GtkPaned* paned, gint position){
gtk_paned_set_position(paned, position);
}
gint paned_get_position(GtkPaned* paned){
return gtk_paned_get_position(paned) ;
}
GdkWindow* paned_get_handle_window(GtkPaned* paned){
return gtk_paned_get_handle_window(paned) ;
}
void paned_set_wide_handle(GtkPaned* paned, gboolean wide){
gtk_paned_set_wide_handle(paned, wide);
}
gboolean paned_get_wide_handle(GtkPaned* paned){
return gtk_paned_get_wide_handle(paned) ;
}



GtkWidget* layout_new(GtkAdjustment *hadjustment, GtkAdjustment *vadjustment){
return gtk_layout_new(hadjustment, vadjustment) ;
}
void layout_put(GtkLayout* layout, GtkWidget* child_widget, gint x, gint y){
gtk_layout_put(layout,child_widget,x, y);
}
void layout_move(GtkLayout* layout, GtkWidget* child_widget, gint x, gint y){
gtk_layout_move(layout,child_widget,x, y);
}
void layout_set_size(GtkLayout* layout, guint width, guint height){
gtk_layout_set_size(layout,width, height);
}
void layout_get_size(GtkLayout* layout, guint* width, guint* height){
gtk_layout_get_size(layout,width, height);
}




GdkWindow* layout_get_bin_window(GtkLayout* layout){
return gtk_layout_get_bin_window(layout) ;
}



GtkWidget* notebook_new(){
return gtk_notebook_new() ;
}
gint notebook_append_page(GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label){
return gtk_notebook_append_page(notebook,child, tab_label) ;
}
gint notebook_append_page_menu(GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label, GtkWidget* menu_label){
return gtk_notebook_append_page_menu(notebook,child,tab_label, menu_label) ;
}
gint notebook_prepend_page(GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label){
return gtk_notebook_prepend_page(notebook,child, tab_label) ;
}
gint notebook_prepend_page_menu(GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label, GtkWidget* menu_label){
return gtk_notebook_prepend_page_menu(notebook,child,tab_label, menu_label) ;
}
gint notebook_insert_page(GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label, gint position){
return gtk_notebook_insert_page(notebook,child,tab_label, position) ;
}
gint notebook_insert_page_menu(GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label, GtkWidget* menu_label, gint position){
return gtk_notebook_insert_page_menu(notebook,child,tab_label,menu_label, position) ;
}
void notebook_remove_page(GtkNotebook* notebook, gint page_num){
gtk_notebook_remove_page(notebook, page_num);
}
void notebook_detach_tab(GtkNotebook* notebook, GtkWidget* child){
gtk_notebook_detach_tab(notebook, child);
}
gint notebook_page_num(GtkNotebook* notebook, GtkWidget* child){
return gtk_notebook_page_num(notebook, child) ;
}
void notebook_next_page(GtkNotebook* notebook){
gtk_notebook_next_page(notebook);
}
void notebook_prev_page(GtkNotebook* notebook){
gtk_notebook_prev_page(notebook);
}
void notebook_reorder_child(GtkNotebook* notebook, GtkWidget* child, gint position){
gtk_notebook_reorder_child(notebook,child, position);
}
void notebook_set_tab_pos(GtkNotebook* notebook, GtkPositionType pos){
gtk_notebook_set_tab_pos(notebook, pos);
}
void notebook_set_show_tabs(GtkNotebook* notebook, gboolean show_tabs){
gtk_notebook_set_show_tabs(notebook, show_tabs);
}
void notebook_set_show_border(GtkNotebook* notebook, gboolean show_border){
gtk_notebook_set_show_border(notebook, show_border);
}
void notebook_set_scrollable(GtkNotebook* notebook, gboolean scrollable){
gtk_notebook_set_scrollable(notebook, scrollable);
}
void notebook_popup_enable(GtkNotebook* notebook){
gtk_notebook_popup_enable(notebook);
}
void notebook_popup_disable(GtkNotebook* notebook){
gtk_notebook_popup_disable(notebook);
}
gint notebook_get_current_page(GtkNotebook* notebook){
return gtk_notebook_get_current_page(notebook) ;
}
GtkWidget* notebook_get_menu_label(GtkNotebook* notebook, GtkWidget* child){
return gtk_notebook_get_menu_label(notebook, child) ;
}
GtkWidget* notebook_get_nth_page(GtkNotebook* notebook, gint page_num){
return gtk_notebook_get_nth_page(notebook, page_num) ;
}
gint notebook_get_n_pages(GtkNotebook* notebook){
return gtk_notebook_get_n_pages(notebook) ;
}
GtkWidget* notebook_get_tab_label(GtkNotebook* notebook, GtkWidget* child){
return gtk_notebook_get_tab_label(notebook, child) ;
}
void notebook_set_menu_label(GtkNotebook* notebook, GtkWidget* child, GtkWidget* menu_label){
gtk_notebook_set_menu_label(notebook,child, menu_label);
}
void notebook_set_menu_label_text(GtkNotebook* notebook, GtkWidget* child, const gchar* menu_text){
gtk_notebook_set_menu_label_text(notebook,child, menu_text);
}
void notebook_set_tab_label(GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label){
gtk_notebook_set_tab_label(notebook,child, tab_label);
}
void notebook_set_tab_label_text(GtkNotebook* notebook, GtkWidget* child, const gchar* tab_text){
gtk_notebook_set_tab_label_text(notebook,child, tab_text);
}
void notebook_set_tab_reorderable(GtkNotebook* notebook, GtkWidget* child, gboolean reorderable){
gtk_notebook_set_tab_reorderable(notebook,child, reorderable);
}
void notebook_set_tab_detachable(GtkNotebook* notebook, GtkWidget* child, gboolean detachable){
gtk_notebook_set_tab_detachable(notebook,child, detachable);
}
const gchar* notebook_get_menu_label_text(GtkNotebook* notebook, GtkWidget* child) {
return gtk_notebook_get_menu_label_text(notebook, child) ;
}
gboolean notebook_get_scrollable(GtkNotebook* notebook){
return gtk_notebook_get_scrollable(notebook) ;
}
gboolean notebook_get_show_border(GtkNotebook* notebook){
return gtk_notebook_get_show_border(notebook) ;
}
gboolean notebook_get_show_tabs(GtkNotebook* notebook){
return gtk_notebook_get_show_tabs(notebook) ;
}
const gchar* notebook_get_tab_label_text(GtkNotebook* notebook, GtkWidget* child) {
return gtk_notebook_get_tab_label_text(notebook, child) ;
}
GtkPositionType notebook_get_tab_pos(GtkNotebook* notebook){
return gtk_notebook_get_tab_pos(notebook) ;
}
gboolean notebook_get_tab_reorderable(GtkNotebook* notebook, GtkWidget* child){
return gtk_notebook_get_tab_reorderable(notebook, child) ;
}
gboolean notebook_get_tab_detachable(GtkNotebook* notebook, GtkWidget* child){
return gtk_notebook_get_tab_detachable(notebook, child) ;
}


void notebook_set_current_page(GtkNotebook* notebook, gint page_num){
gtk_notebook_set_current_page(notebook, page_num);
}
void notebook_set_group_name(GtkNotebook* notebook, const gchar* group_name){
gtk_notebook_set_group_name(notebook, group_name);
}
const gchar* notebook_get_group_name(GtkNotebook* notebook) {
return gtk_notebook_get_group_name(notebook) ;
}
void notebook_set_action_widget(GtkNotebook* notebook, GtkWidget* widget, GtkPackType pack_type){
gtk_notebook_set_action_widget(notebook,widget, pack_type);
}
GtkWidget* notebook_get_action_widget(GtkNotebook* notebook, GtkPackType pack_type){
return gtk_notebook_get_action_widget(notebook, pack_type) ;
}



GtkWidget* expander_new(const gchar* label){
return gtk_expander_new(label) ;
}
GtkWidget* expander_new_with_mnemonic(const gchar* label){
return gtk_expander_new_with_mnemonic(label) ;
}
void expander_set_expanded(GtkExpander* expander, gboolean expanded){
gtk_expander_set_expanded(expander, expanded);
}
gboolean expander_get_expanded(GtkExpander* expander){
return gtk_expander_get_expanded(expander) ;
}



void expander_set_label(GtkExpander* expander, const gchar* label){
gtk_expander_set_label(expander, label);
}
const gchar* expander_get_label(GtkExpander* expander) {
return gtk_expander_get_label(expander) ;
}
void expander_set_use_underline(GtkExpander* expander, gboolean use_underline){
gtk_expander_set_use_underline(expander, use_underline);
}
gboolean expander_get_use_underline(GtkExpander* expander){
return gtk_expander_get_use_underline(expander) ;
}
void expander_set_use_markup(GtkExpander* expander, gboolean use_markup){
gtk_expander_set_use_markup(expander, use_markup);
}
gboolean expander_get_use_markup(GtkExpander* expander){
return gtk_expander_get_use_markup(expander) ;
}
void expander_set_label_widget(GtkExpander* expander, GtkWidget* label_widget){
gtk_expander_set_label_widget(expander, label_widget);
}
GtkWidget* expander_get_label_widget(GtkExpander* expander){
return gtk_expander_get_label_widget(expander) ;
}
void expander_set_label_fill(GtkExpander* expander, gboolean label_fill){
gtk_expander_set_label_fill(expander, label_fill);
}
gboolean expander_get_label_fill(GtkExpander* expander){
return gtk_expander_get_label_fill(expander) ;
}
void expander_set_resize_toplevel(GtkExpander* expander, gboolean resize_toplevel){
gtk_expander_set_resize_toplevel(expander, resize_toplevel);
}
gboolean expander_get_resize_toplevel(GtkExpander* expander){
return gtk_expander_get_resize_toplevel(expander) ;
}



GtkOrientation orientable_get_orientation(GtkOrientable* orientable){
return gtk_orientable_get_orientation(orientable) ;
}
void orientable_set_orientation(GtkOrientable* orientable, GtkOrientation orientation){
gtk_orientable_set_orientation(orientable, orientation);
}



GtkWidget* aspect_frame_new(const gchar* label, gfloat xalign, gfloat yalign, gfloat ratio, gboolean obey_child){
return gtk_aspect_frame_new(label,xalign,yalign,ratio, obey_child) ;
}
void aspect_frame_set(GtkAspectFrame* aspect_frame, gfloat xalign, gfloat yalign, gfloat ratio, gboolean obey_child){
gtk_aspect_frame_set(aspect_frame,xalign,yalign,ratio, obey_child);
}



GtkWidget* fixed_new(){
return gtk_fixed_new() ;
}
void fixed_put(GtkFixed* fixed, GtkWidget* widget, gint x, gint y){
gtk_fixed_put(fixed,widget,x, y);
}
void fixed_move(GtkFixed* fixed, GtkWidget* widget, gint x, gint y){
gtk_fixed_move(fixed,widget,x, y);
}



GtkWidget* label_new(const gchar* str){
return gtk_label_new(str) ;
}
void label_set_text(GtkLabel* label, const gchar* str){
gtk_label_set_text(label, str);
}
void label_set_attributes(GtkLabel* label, PangoAttrList* attrs){
gtk_label_set_attributes(label, attrs);
}
void label_set_markup(GtkLabel* label, const gchar* str){
gtk_label_set_markup(label, str);
}
void label_set_markup_with_mnemonic(GtkLabel* label, const gchar* str){
gtk_label_set_markup_with_mnemonic(label, str);
}
void label_set_pattern(GtkLabel* label, const gchar* pattern){
gtk_label_set_pattern(label, pattern);
}
void label_set_justify(GtkLabel* label, GtkJustification jtype){
gtk_label_set_justify(label, jtype);
}
void label_set_xalign(GtkLabel* label, gfloat xalign){
gtk_label_set_xalign(label, xalign);
}
void label_set_yalign(GtkLabel* label, gfloat yalign){
gtk_label_set_yalign(label, yalign);
}
void label_set_ellipsize(GtkLabel* label, PangoEllipsizeMode mode){
gtk_label_set_ellipsize(label, mode);
}
void label_set_width_chars(GtkLabel* label, gint n_chars){
gtk_label_set_width_chars(label, n_chars);
}
void label_set_max_width_chars(GtkLabel* label, gint n_chars){
gtk_label_set_max_width_chars(label, n_chars);
}
void label_set_line_wrap(GtkLabel* label, gboolean wrap){
gtk_label_set_line_wrap(label, wrap);
}
void label_set_line_wrap_mode(GtkLabel* label, PangoWrapMode wrap_mode){
gtk_label_set_line_wrap_mode(label, wrap_mode);
}
void label_set_lines(GtkLabel* label, gint lines){
gtk_label_set_lines(label, lines);
}
void label_get_layout_offsets(GtkLabel* label, gint* x, gint* y){
gtk_label_get_layout_offsets(label,x, y);
}
guint label_get_mnemonic_keyval(GtkLabel* label){
return gtk_label_get_mnemonic_keyval(label) ;
}
gboolean label_get_selectable(GtkLabel* label){
return gtk_label_get_selectable(label) ;
}
const gchar* label_get_text(GtkLabel* label) {
return gtk_label_get_text(label) ;
}
GtkWidget* label_new_with_mnemonic(const gchar* str){
return gtk_label_new_with_mnemonic(str) ;
}
void label_select_region(GtkLabel* label, gint start_offset, gint end_offset){
gtk_label_select_region(label,start_offset, end_offset);
}
void label_set_mnemonic_widget(GtkLabel* label, GtkWidget* widget){
gtk_label_set_mnemonic_widget(label, widget);
}
void label_set_selectable(GtkLabel* label, gboolean setting){
gtk_label_set_selectable(label, setting);
}
void label_set_text_with_mnemonic(GtkLabel* label, const gchar* str){
gtk_label_set_text_with_mnemonic(label, str);
}
PangoAttrList* label_get_attributes(GtkLabel* label){
return gtk_label_get_attributes(label) ;
}
GtkJustification label_get_justify(GtkLabel* label){
return gtk_label_get_justify(label) ;
}
gfloat label_get_xalign(GtkLabel* label){
return gtk_label_get_xalign(label) ;
}
gfloat label_get_yalign(GtkLabel* label){
return gtk_label_get_yalign(label) ;
}
PangoEllipsizeMode label_get_ellipsize(GtkLabel* label){
return gtk_label_get_ellipsize(label) ;
}
gint label_get_width_chars(GtkLabel* label){
return gtk_label_get_width_chars(label) ;
}
gint label_get_max_width_chars(GtkLabel* label){
return gtk_label_get_max_width_chars(label) ;
}
const gchar* label_get_label(GtkLabel* label) {
return gtk_label_get_label(label) ;
}
PangoLayout* label_get_layout(GtkLabel* label){
return gtk_label_get_layout(label) ;
}
gboolean label_get_line_wrap(GtkLabel* label){
return gtk_label_get_line_wrap(label) ;
}
PangoWrapMode label_get_line_wrap_mode(GtkLabel* label){
return gtk_label_get_line_wrap_mode(label) ;
}
gint label_get_lines(GtkLabel* label){
return gtk_label_get_lines(label) ;
}
GtkWidget* label_get_mnemonic_widget(GtkLabel* label){
return gtk_label_get_mnemonic_widget(label) ;
}
gboolean label_get_selection_bounds(GtkLabel* label, gint* start, gint* end){
return gtk_label_get_selection_bounds(label,start, end) ;
}
gboolean label_get_use_markup(GtkLabel* label){
return gtk_label_get_use_markup(label) ;
}
gboolean label_get_use_underline(GtkLabel* label){
return gtk_label_get_use_underline(label) ;
}
gboolean label_get_single_line_mode(GtkLabel* label){
return gtk_label_get_single_line_mode(label) ;
}
gdouble label_get_angle(GtkLabel* label){
return gtk_label_get_angle(label) ;
}
void label_set_label(GtkLabel* label, const gchar* str){
gtk_label_set_label(label, str);
}
void label_set_use_markup(GtkLabel* label, gboolean setting){
gtk_label_set_use_markup(label, setting);
}
void label_set_use_underline(GtkLabel* label, gboolean setting){
gtk_label_set_use_underline(label, setting);
}
void label_set_single_line_mode(GtkLabel* label, gboolean single_line_mode){
gtk_label_set_single_line_mode(label, single_line_mode);
}
void label_set_angle(GtkLabel* label, gdouble angle){
gtk_label_set_angle(label, angle);
}
const gchar* label_get_current_uri(GtkLabel* label) {
return gtk_label_get_current_uri(label) ;
}
void label_set_track_visited_links(GtkLabel* label, gboolean track_links){
gtk_label_set_track_visited_links(label, track_links);
}
gboolean label_get_track_visited_links(GtkLabel* label){
return gtk_label_get_track_visited_links(label) ;
}






GdkPixbuf* image_get_pixbuf(GtkImage* image){
return gtk_image_get_pixbuf(image) ;
}



GdkPixbufAnimation* image_get_animation(GtkImage* image){
return gtk_image_get_animation(image) ;
}
void image_get_icon_name(GtkImage* image, const gchar** icon_name, GtkIconSize* size){
gtk_image_get_icon_name(image,icon_name, size);
}
void image_get_gicon(GtkImage* image, GIcon** gicon, GtkIconSize* size){
gtk_image_get_gicon(image,gicon, size);
}
GtkImageType image_get_storage_type(GtkImage* image){
return gtk_image_get_storage_type(image) ;
}
GtkWidget* image_new_from_file(const gchar* filename){
return gtk_image_new_from_file(filename) ;
}


GtkWidget* image_new_from_pixbuf(GdkPixbuf* pixbuf){
return gtk_image_new_from_pixbuf(pixbuf) ;
}


GtkWidget* image_new_from_animation(GdkPixbufAnimation* animation){
return gtk_image_new_from_animation(animation) ;
}
GtkWidget* image_new_from_icon_name(const gchar* icon_name, GtkIconSize size){
return gtk_image_new_from_icon_name(icon_name, size) ;
}
GtkWidget* image_new_from_gicon(GIcon* icon, GtkIconSize size){
return gtk_image_new_from_gicon(icon, size) ;
}
GtkWidget* image_new_from_resource(const gchar* resource_path){
return gtk_image_new_from_resource(resource_path) ;
}
GtkWidget* image_new_from_surface(cairo_surface_t* surface){
return gtk_image_new_from_surface(surface) ;
}
void image_set_from_file(GtkImage* image, const gchar* filename){
gtk_image_set_from_file(image, filename);
}



void image_set_from_pixbuf(GtkImage* image, GdkPixbuf* pixbuf){
gtk_image_set_from_pixbuf(image, pixbuf);
}



void image_set_from_animation(GtkImage* image, GdkPixbufAnimation* animation){
gtk_image_set_from_animation(image, animation);
}
void image_set_from_icon_name(GtkImage* image, const gchar* icon_name, GtkIconSize size){
gtk_image_set_from_icon_name(image,icon_name, size);
}
void image_set_from_gicon(GtkImage* image, GIcon* icon, GtkIconSize size){
gtk_image_set_from_gicon(image,icon, size);
}
void image_set_from_resource(GtkImage* image, const gchar* resource_path){
gtk_image_set_from_resource(image, resource_path);
}
void image_set_from_surface(GtkImage* image, cairo_surface_t* surface){
gtk_image_set_from_surface(image, surface);
}
void image_clear(GtkImage* image){
gtk_image_clear(image);
}
GtkWidget* image_new(){
return gtk_image_new() ;
}
void image_set_pixel_size(GtkImage* image, gint pixel_size){
gtk_image_set_pixel_size(image, pixel_size);
}
gint image_get_pixel_size(GtkImage* image){
return gtk_image_get_pixel_size(image) ;
}



GtkWidget* spinner_new(){
return gtk_spinner_new() ;
}
void spinner_start(GtkSpinner* spinner){
gtk_spinner_start(spinner);
}
void spinner_stop(GtkSpinner* spinner){
gtk_spinner_stop(spinner);
}



GtkWidget* info_bar_new(){
return gtk_info_bar_new() ;
}
template <typename... ID>
GtkWidget* info_bar_new_with_buttons(const gchar* first_button_text, ID... ids){
return (gtk_info_bar_new_with_buttons(first_button_text,ids), ...) ;
}
void info_bar_add_action_widget(GtkInfoBar* info_bar, GtkWidget* child, gint response_id){
gtk_info_bar_add_action_widget(info_bar,child, response_id);
}
GtkWidget* info_bar_add_button(GtkInfoBar* info_bar, const gchar* button_text, gint response_id){
return gtk_info_bar_add_button(info_bar,button_text, response_id) ;
}
template <typename... ID>
void info_bar_add_buttons(GtkInfoBar* info_bar, const gchar* first_button_text, ID... ids){
(gtk_info_bar_add_buttons(info_bar,first_button_text,ids), ...);
}
void info_bar_set_response_sensitive(GtkInfoBar* info_bar, gint response_id, gboolean setting){
gtk_info_bar_set_response_sensitive(info_bar,response_id, setting);
}
void info_bar_set_default_response(GtkInfoBar* info_bar, gint response_id){
gtk_info_bar_set_default_response(info_bar, response_id);
}
void info_bar_response(GtkInfoBar* info_bar, gint response_id){
gtk_info_bar_response(info_bar, response_id);
}
void info_bar_set_message_type(GtkInfoBar* info_bar, GtkMessageType message_type){
gtk_info_bar_set_message_type(info_bar, message_type);
}
GtkMessageType info_bar_get_message_type(GtkInfoBar* info_bar){
return gtk_info_bar_get_message_type(info_bar) ;
}
GtkWidget* info_bar_get_action_area(GtkInfoBar* info_bar){
return gtk_info_bar_get_action_area(info_bar) ;
}
GtkWidget* info_bar_get_content_area(GtkInfoBar* info_bar){
return gtk_info_bar_get_content_area(info_bar) ;
}
gboolean info_bar_get_show_close_button(GtkInfoBar* info_bar){
return gtk_info_bar_get_show_close_button(info_bar) ;
}
void info_bar_set_show_close_button(GtkInfoBar* info_bar, gboolean setting){
gtk_info_bar_set_show_close_button(info_bar, setting);
}
gboolean info_bar_get_revealed(GtkInfoBar* info_bar){
return gtk_info_bar_get_revealed(info_bar) ;
}
void info_bar_set_revealed(GtkInfoBar* info_bar, gboolean revealed){
gtk_info_bar_set_revealed(info_bar, revealed);
}



GtkWidget* progress_bar_new(){
return gtk_progress_bar_new() ;
}
void progress_bar_pulse(GtkProgressBar* pbar){
gtk_progress_bar_pulse(pbar);
}
void progress_bar_set_fraction(GtkProgressBar* pbar, gdouble fraction){
gtk_progress_bar_set_fraction(pbar, fraction);
}
gdouble progress_bar_get_fraction(GtkProgressBar* pbar){
return gtk_progress_bar_get_fraction(pbar) ;
}
void progress_bar_set_inverted(GtkProgressBar* pbar, gboolean inverted){
gtk_progress_bar_set_inverted(pbar, inverted);
}
gboolean progress_bar_get_inverted(GtkProgressBar* pbar){
return gtk_progress_bar_get_inverted(pbar) ;
}
void progress_bar_set_show_text(GtkProgressBar* pbar, gboolean show_text){
gtk_progress_bar_set_show_text(pbar, show_text);
}
gboolean progress_bar_get_show_text(GtkProgressBar* pbar){
return gtk_progress_bar_get_show_text(pbar) ;
}
void progress_bar_set_text(GtkProgressBar* pbar, const gchar* text){
gtk_progress_bar_set_text(pbar, text);
}
const gchar* progress_bar_get_text(GtkProgressBar* pbar) {
return gtk_progress_bar_get_text(pbar) ;
}
void progress_bar_set_ellipsize(GtkProgressBar* pbar, PangoEllipsizeMode mode){
gtk_progress_bar_set_ellipsize(pbar, mode);
}
PangoEllipsizeMode progress_bar_get_ellipsize(GtkProgressBar* pbar){
return gtk_progress_bar_get_ellipsize(pbar) ;
}
void progress_bar_set_pulse_step(GtkProgressBar* pbar, gdouble fraction){
gtk_progress_bar_set_pulse_step(pbar, fraction);
}
gdouble progress_bar_get_pulse_step(GtkProgressBar* pbar){
return gtk_progress_bar_get_pulse_step(pbar) ;
}



GtkWidget* level_bar_new(){
return gtk_level_bar_new() ;
}
GtkWidget* level_bar_new_for_interval(gdouble min_value, gdouble max_value){
return gtk_level_bar_new_for_interval(min_value, max_value) ;
}
void level_bar_set_mode(GtkLevelBar* self, GtkLevelBarMode mode){
gtk_level_bar_set_mode(self, mode);
}
GtkLevelBarMode level_bar_get_mode(GtkLevelBar* self){
return gtk_level_bar_get_mode(self) ;
}
void level_bar_set_value(GtkLevelBar* self, gdouble value){
gtk_level_bar_set_value(self, value);
}
gdouble level_bar_get_value(GtkLevelBar* self){
return gtk_level_bar_get_value(self) ;
}
void level_bar_set_min_value(GtkLevelBar* self, gdouble value){
gtk_level_bar_set_min_value(self, value);
}
gdouble level_bar_get_min_value(GtkLevelBar* self){
return gtk_level_bar_get_min_value(self) ;
}
void level_bar_set_max_value(GtkLevelBar* self, gdouble value){
gtk_level_bar_set_max_value(self, value);
}
gdouble level_bar_get_max_value(GtkLevelBar* self){
return gtk_level_bar_get_max_value(self) ;
}
void level_bar_set_inverted(GtkLevelBar* self, gdouble inverted){
gtk_level_bar_set_inverted(self, inverted);
}
gboolean level_bar_get_inverted(GtkLevelBar* self){
return gtk_level_bar_get_inverted(self) ;
}
void level_bar_add_offset_value(GtkLevelBar* self, const gchar* name, gdouble value){
gtk_level_bar_add_offset_value(self,name, value);
}
void level_bar_remove_offset_value(GtkLevelBar* self, const gchar* name){
gtk_level_bar_remove_offset_value(self, name);
}
gboolean level_bar_get_offset_value(GtkLevelBar* self, const gchar* name, gdouble* value){
return gtk_level_bar_get_offset_value(self,name, value) ;
}



GtkWidget* statusbar_new(){
return gtk_statusbar_new() ;
}
guint statusbar_get_context_id(GtkStatusbar* statusbar, const gchar* context_description){
return gtk_statusbar_get_context_id(statusbar, context_description) ;
}
guint statusbar_push(GtkStatusbar* statusbar, guint context_id, const gchar* text){
return gtk_statusbar_push(statusbar,context_id, text) ;
}
void statusbar_pop(GtkStatusbar* statusbar, guint context_id){
gtk_statusbar_pop(statusbar, context_id);
}
void statusbar_remove(GtkStatusbar* statusbar, guint context_id, guint message_id){
gtk_statusbar_remove(statusbar,context_id, message_id);
}
void statusbar_remove_all(GtkStatusbar* statusbar, guint context_id){
gtk_statusbar_remove_all(statusbar, context_id);
}
GtkWidget* statusbar_get_message_area(GtkStatusbar* statusbar){
return gtk_statusbar_get_message_area(statusbar) ;
}



GtkWidget* accel_label_new(const gchar* str){
return gtk_accel_label_new(str) ;
}
void accel_label_set_accel_closure(GtkAccelLabel* accel_label, GClosure* accel_closure){
gtk_accel_label_set_accel_closure(accel_label, accel_closure);
}
GtkWidget* accel_label_get_accel_widget(GtkAccelLabel* accel_label){
return gtk_accel_label_get_accel_widget(accel_label) ;
}
void accel_label_set_accel_widget(GtkAccelLabel* accel_label, GtkWidget* accel_widget){
gtk_accel_label_set_accel_widget(accel_label, accel_widget);
}
guint accel_label_get_accel_width(GtkAccelLabel* accel_label){
return gtk_accel_label_get_accel_width(accel_label) ;
}
void accel_label_set_accel(GtkAccelLabel* accel_label, guint accelerator_key, GdkModifierType accelerator_mods){
gtk_accel_label_set_accel(accel_label,accelerator_key, accelerator_mods);
}
void accel_label_get_accel(GtkAccelLabel* accel_label, guint* accelerator_key, GdkModifierType* accelerator_mods){
gtk_accel_label_get_accel(accel_label,accelerator_key, accelerator_mods);
}
gboolean accel_label_refetch(GtkAccelLabel* accel_label){
return gtk_accel_label_refetch(accel_label) ;
}



GtkWidget* button_new(){
return gtk_button_new() ;
}
GtkWidget* button_new_with_label(const gchar* label){
return gtk_button_new_with_label(label) ;
}
GtkWidget* button_new_with_mnemonic(const gchar* label){
return gtk_button_new_with_mnemonic(label) ;
}
GtkWidget* button_new_from_icon_name(const gchar* icon_name, GtkIconSize size){
return gtk_button_new_from_icon_name(icon_name, size) ;
}



void button_clicked(GtkButton* button){
gtk_button_clicked(button);
}


void button_set_relief(GtkButton* button, GtkReliefStyle relief){
gtk_button_set_relief(button, relief);
}
GtkReliefStyle button_get_relief(GtkButton* button){
return gtk_button_get_relief(button) ;
}
const gchar* button_get_label(GtkButton* button) {
return gtk_button_get_label(button) ;
}
void button_set_label(GtkButton* button, const gchar* label){
gtk_button_set_label(button, label);
}



gboolean button_get_use_underline(GtkButton* button){
return gtk_button_get_use_underline(button) ;
}
void button_set_use_underline(GtkButton* button, gboolean use_underline){
gtk_button_set_use_underline(button, use_underline);
}









void button_set_image(GtkButton* button, GtkWidget* image){
gtk_button_set_image(button, image);
}
GtkWidget* button_get_image(GtkButton* button){
return gtk_button_get_image(button) ;
}
void button_set_image_position(GtkButton* button, GtkPositionType position){
gtk_button_set_image_position(button, position);
}
GtkPositionType button_get_image_position(GtkButton* button){
return gtk_button_get_image_position(button) ;
}
void button_set_always_show_image(GtkButton* button, gboolean always_show){
gtk_button_set_always_show_image(button, always_show);
}
gboolean button_get_always_show_image(GtkButton* button){
return gtk_button_get_always_show_image(button) ;
}
GdkWindow* button_get_event_window(GtkButton* button){
return gtk_button_get_event_window(button) ;
}



GtkWidget* check_button_new(){
return gtk_check_button_new() ;
}
GtkWidget* check_button_new_with_label(const gchar* label){
return gtk_check_button_new_with_label(label) ;
}
GtkWidget* check_button_new_with_mnemonic(const gchar* label){
return gtk_check_button_new_with_mnemonic(label) ;
}



GtkWidget* radio_button_new(GSList* group){
return gtk_radio_button_new(group) ;
}
GtkWidget* radio_button_new_from_widget(GtkRadioButton* radio_group_member){
return gtk_radio_button_new_from_widget(radio_group_member) ;
}
GtkWidget* radio_button_new_with_label(GSList* group, const gchar* label){
return gtk_radio_button_new_with_label(group, label) ;
}
GtkWidget* radio_button_new_with_label_from_widget(GtkRadioButton* radio_group_member, const gchar* label){
return gtk_radio_button_new_with_label_from_widget(radio_group_member, label) ;
}
GtkWidget* radio_button_new_with_mnemonic(GSList* group, const gchar* label){
return gtk_radio_button_new_with_mnemonic(group, label) ;
}
GtkWidget* radio_button_new_with_mnemonic_from_widget(GtkRadioButton* radio_group_member, const gchar* label){
return gtk_radio_button_new_with_mnemonic_from_widget(radio_group_member, label) ;
}
void radio_button_set_group(GtkRadioButton* radio_button, GSList* group){
gtk_radio_button_set_group(radio_button, group);
}
GSList* radio_button_get_group(GtkRadioButton* radio_button){
return gtk_radio_button_get_group(radio_button) ;
}
void radio_button_join_group(GtkRadioButton* radio_button, GtkRadioButton* group_source){
gtk_radio_button_join_group(radio_button, group_source);
}



GtkWidget* toggle_button_new(){
return gtk_toggle_button_new() ;
}
GtkWidget* toggle_button_new_with_label(const gchar* label){
return gtk_toggle_button_new_with_label(label) ;
}
GtkWidget* toggle_button_new_with_mnemonic(const gchar* label){
return gtk_toggle_button_new_with_mnemonic(label) ;
}
void toggle_button_set_mode(GtkToggleButton* toggle_button, gboolean draw_indicator){
gtk_toggle_button_set_mode(toggle_button, draw_indicator);
}
gboolean toggle_button_get_mode(GtkToggleButton* toggle_button){
return gtk_toggle_button_get_mode(toggle_button) ;
}
void toggle_button_toggled(GtkToggleButton* toggle_button){
gtk_toggle_button_toggled(toggle_button);
}
gboolean toggle_button_get_active(GtkToggleButton* toggle_button){
return gtk_toggle_button_get_active(toggle_button) ;
}
void toggle_button_set_active(GtkToggleButton* toggle_button, gboolean is_active){
gtk_toggle_button_set_active(toggle_button, is_active);
}
gboolean toggle_button_get_inconsistent(GtkToggleButton* toggle_button){
return gtk_toggle_button_get_inconsistent(toggle_button) ;
}
void toggle_button_set_inconsistent(GtkToggleButton* toggle_button, gboolean setting){
gtk_toggle_button_set_inconsistent(toggle_button, setting);
}



GtkWidget* link_button_new(const gchar* uri){
return gtk_link_button_new(uri) ;
}
GtkWidget* link_button_new_with_label(const gchar* uri, const gchar* label){
return gtk_link_button_new_with_label(uri, label) ;
}
const gchar* link_button_get_uri(GtkLinkButton* link_button) {
return gtk_link_button_get_uri(link_button) ;
}
void link_button_set_uri(GtkLinkButton* link_button, const gchar* uri){
gtk_link_button_set_uri(link_button, uri);
}
gboolean link_button_get_visited(GtkLinkButton* link_button){
return gtk_link_button_get_visited(link_button) ;
}
void link_button_set_visited(GtkLinkButton* link_button, gboolean visited){
gtk_link_button_set_visited(link_button, visited);
}



GtkWidget* menu_button_new(){
return gtk_menu_button_new() ;
}
void menu_button_set_popup(GtkMenuButton* menu_button, GtkWidget* menu){
gtk_menu_button_set_popup(menu_button, menu);
}
GtkMenu* menu_button_get_popup(GtkMenuButton* menu_button){
return gtk_menu_button_get_popup(menu_button) ;
}
void menu_button_set_popover(GtkMenuButton* menu_button, GtkWidget* popover){
gtk_menu_button_set_popover(menu_button, popover);
}
GtkPopover* menu_button_get_popover(GtkMenuButton* menu_button){
return gtk_menu_button_get_popover(menu_button) ;
}
void menu_button_set_menu_model(GtkMenuButton* menu_button, GMenuModel* menu_model){
gtk_menu_button_set_menu_model(menu_button, menu_model);
}
GMenuModel* menu_button_get_menu_model(GtkMenuButton* menu_button){
return gtk_menu_button_get_menu_model(menu_button) ;
}
void menu_button_set_use_popover(GtkMenuButton* menu_button, gboolean use_popover){
gtk_menu_button_set_use_popover(menu_button, use_popover);
}
gboolean menu_button_get_use_popover(GtkMenuButton* menu_button){
return gtk_menu_button_get_use_popover(menu_button) ;
}
void menu_button_set_direction(GtkMenuButton* menu_button, GtkArrowType direction){
gtk_menu_button_set_direction(menu_button, direction);
}
GtkArrowType menu_button_get_direction(GtkMenuButton* menu_button){
return gtk_menu_button_get_direction(menu_button) ;
}
void menu_button_set_align_widget(GtkMenuButton* menu_button, GtkWidget* align_widget){
gtk_menu_button_set_align_widget(menu_button, align_widget);
}
GtkWidget* menu_button_get_align_widget(GtkMenuButton* menu_button){
return gtk_menu_button_get_align_widget(menu_button) ;
}



GtkWidget* switch_new(){
return gtk_switch_new() ;
}
void switch_set_active(GtkSwitch* sw, gboolean is_active){
gtk_switch_set_active(sw, is_active);
}
gboolean switch_get_active(GtkSwitch* sw){
return gtk_switch_get_active(sw) ;
}
void switch_set_state(GtkSwitch* sw, gboolean state){
gtk_switch_set_state(sw, state);
}
gboolean switch_get_state(GtkSwitch* sw){
return gtk_switch_get_state(sw) ;
}



GtkWidget* scale_button_new(GtkIconSize size, gdouble min, gdouble max, gdouble step, const gchar** icons){
return gtk_scale_button_new(size,min,max,step, icons) ;
}
void scale_button_set_adjustment(GtkScaleButton* button, GtkAdjustment* adjustment){
gtk_scale_button_set_adjustment(button, adjustment);
}
void scale_button_set_icons(GtkScaleButton* button, const gchar** icons){
gtk_scale_button_set_icons(button, icons);
}
void scale_button_set_value(GtkScaleButton* button, gdouble value){
gtk_scale_button_set_value(button, value);
}
GtkAdjustment* scale_button_get_adjustment(GtkScaleButton* button){
return gtk_scale_button_get_adjustment(button) ;
}
gdouble scale_button_get_value(GtkScaleButton* button){
return gtk_scale_button_get_value(button) ;
}
GtkWidget* scale_button_get_popup(GtkScaleButton* button){
return gtk_scale_button_get_popup(button) ;
}
GtkWidget* scale_button_get_plus_button(GtkScaleButton* button){
return gtk_scale_button_get_plus_button(button) ;
}
GtkWidget* scale_button_get_minus_button(GtkScaleButton* button){
return gtk_scale_button_get_minus_button(button) ;
}



GtkWidget* volume_button_new(){
return gtk_volume_button_new() ;
}



GtkWidget* lock_button_new(GPermission* permission){
return gtk_lock_button_new(permission) ;
}
GPermission* lock_button_get_permission(GtkLockButton* button){
return gtk_lock_button_get_permission(button) ;
}
void lock_button_set_permission(GtkLockButton* button, GPermission* permission){
gtk_lock_button_set_permission(button, permission);
}



GtkWidget* model_button_new(){
return gtk_model_button_new() ;
}



GtkWidget* entry_new(){
return gtk_entry_new() ;
}
GtkWidget* entry_new_with_buffer(GtkEntryBuffer* buffer){
return gtk_entry_new_with_buffer(buffer) ;
}
GtkEntryBuffer* entry_get_buffer(GtkEntry* entry){
return gtk_entry_get_buffer(entry) ;
}
void entry_set_buffer(GtkEntry* entry, GtkEntryBuffer* buffer){
gtk_entry_set_buffer(entry, buffer);
}
void entry_set_text(GtkEntry* entry, const gchar* text){
gtk_entry_set_text(entry, text);
}
const gchar * entry_get_text(GtkEntry* entry) {
return gtk_entry_get_text(entry) ;
}
guint16 entry_get_text_length(GtkEntry* entry){
return gtk_entry_get_text_length(entry) ;
}
void entry_get_text_area(GtkEntry* entry, GdkRectangle* text_area){
gtk_entry_get_text_area(entry, text_area);
}
void entry_set_visibility(GtkEntry* entry, gboolean visible){
gtk_entry_set_visibility(entry, visible);
}
void entry_set_invisible_char(GtkEntry* entry, gunichar ch){
gtk_entry_set_invisible_char(entry, ch);
}
void entry_unset_invisible_char(GtkEntry* entry){
gtk_entry_unset_invisible_char(entry);
}
void entry_set_max_length(GtkEntry* entry, gint max){
gtk_entry_set_max_length(entry, max);
}
gboolean entry_get_activates_default(GtkEntry* entry){
return gtk_entry_get_activates_default(entry) ;
}
gboolean entry_get_has_frame(GtkEntry* entry){
return gtk_entry_get_has_frame(entry) ;
}

gint entry_get_width_chars(GtkEntry* entry){
return gtk_entry_get_width_chars(entry) ;
}
gint entry_get_max_width_chars(GtkEntry* entry){
return gtk_entry_get_max_width_chars(entry) ;
}
void entry_set_activates_default(GtkEntry* entry, gboolean setting){
gtk_entry_set_activates_default(entry, setting);
}
void entry_set_has_frame(GtkEntry* entry, gboolean setting){
gtk_entry_set_has_frame(entry, setting);
}


void entry_set_width_chars(GtkEntry* entry, gint n_chars){
gtk_entry_set_width_chars(entry, n_chars);
}
void entry_set_max_width_chars(GtkEntry* entry, gint n_chars){
gtk_entry_set_max_width_chars(entry, n_chars);
}
gunichar entry_get_invisible_char(GtkEntry* entry){
return gtk_entry_get_invisible_char(entry) ;
}
void entry_set_alignment(GtkEntry* entry, gfloat xalign){
gtk_entry_set_alignment(entry, xalign);
}
gfloat entry_get_alignment(GtkEntry* entry){
return gtk_entry_get_alignment(entry) ;
}
void entry_set_placeholder_text(GtkEntry* entry, const gchar* text){
gtk_entry_set_placeholder_text(entry, text);
}
const gchar* entry_get_placeholder_text(GtkEntry* entry) {
return gtk_entry_get_placeholder_text(entry) ;
}
void entry_set_overwrite_mode(GtkEntry* entry, gboolean overwrite){
gtk_entry_set_overwrite_mode(entry, overwrite);
}
gboolean entry_get_overwrite_mode(GtkEntry* entry){
return gtk_entry_get_overwrite_mode(entry) ;
}
PangoLayout* entry_get_layout(GtkEntry* entry){
return gtk_entry_get_layout(entry) ;
}
void entry_get_layout_offsets(GtkEntry* entry, gint* x, gint* y){
gtk_entry_get_layout_offsets(entry,x, y);
}
gint entry_layout_index_to_text_index(GtkEntry* entry, gint layout_index){
return gtk_entry_layout_index_to_text_index(entry, layout_index) ;
}
gint entry_text_index_to_layout_index(GtkEntry* entry, gint text_index){
return gtk_entry_text_index_to_layout_index(entry, text_index) ;
}
void entry_set_attributes(GtkEntry* entry, PangoAttrList* attrs){
gtk_entry_set_attributes(entry, attrs);
}
PangoAttrList* entry_get_attributes(GtkEntry* entry){
return gtk_entry_get_attributes(entry) ;
}
gint entry_get_max_length(GtkEntry* entry){
return gtk_entry_get_max_length(entry) ;
}
gboolean entry_get_visibility(GtkEntry* entry){
return gtk_entry_get_visibility(entry) ;
}
void entry_set_completion(GtkEntry* entry, GtkEntryCompletion* completion){
gtk_entry_set_completion(entry, completion);
}
GtkEntryCompletion* entry_get_completion(GtkEntry* entry){
return gtk_entry_get_completion(entry) ;
}
void entry_set_cursor_hadjustment(GtkEntry* entry, GtkAdjustment* adjustment){
gtk_entry_set_cursor_hadjustment(entry, adjustment);
}
GtkAdjustment* entry_get_cursor_hadjustment(GtkEntry* entry){
return gtk_entry_get_cursor_hadjustment(entry) ;
}
void entry_set_progress_fraction(GtkEntry* entry, gdouble fraction){
gtk_entry_set_progress_fraction(entry, fraction);
}
gdouble entry_get_progress_fraction(GtkEntry* entry){
return gtk_entry_get_progress_fraction(entry) ;
}
void entry_set_progress_pulse_step(GtkEntry* entry, gdouble fraction){
gtk_entry_set_progress_pulse_step(entry, fraction);
}
gdouble entry_get_progress_pulse_step(GtkEntry* entry){
return gtk_entry_get_progress_pulse_step(entry) ;
}
void entry_progress_pulse(GtkEntry* entry){
gtk_entry_progress_pulse(entry);
}
gboolean entry_im_context_filter_keypress(GtkEntry* entry, GdkEventKey* event){
return gtk_entry_im_context_filter_keypress(entry, event) ;
}
void entry_reset_im_context(GtkEntry* entry){
gtk_entry_reset_im_context(entry);
}
PangoTabArray* entry_get_tabs(GtkEntry* entry){
return gtk_entry_get_tabs(entry) ;
}
void entry_set_tabs(GtkEntry* entry, PangoTabArray* tabs){
gtk_entry_set_tabs(entry, tabs);
}
void entry_set_icon_from_pixbuf(GtkEntry* entry, GtkEntryIconPosition icon_pos, GdkPixbuf* pixbuf){
gtk_entry_set_icon_from_pixbuf(entry,icon_pos, pixbuf);
}



void entry_set_icon_from_icon_name(GtkEntry* entry, GtkEntryIconPosition icon_pos, const gchar* icon_name){
gtk_entry_set_icon_from_icon_name(entry,icon_pos, icon_name);
}
void entry_set_icon_from_gicon(GtkEntry* entry, GtkEntryIconPosition icon_pos, GIcon* icon){
gtk_entry_set_icon_from_gicon(entry,icon_pos, icon);
}
GtkImageType entry_get_icon_storage_type(GtkEntry* entry, GtkEntryIconPosition icon_pos){
return gtk_entry_get_icon_storage_type(entry,icon_pos) ;
}
GdkPixbuf* entry_get_icon_pixbuf(GtkEntry* entry, GtkEntryIconPosition icon_pos){
return gtk_entry_get_icon_pixbuf(entry, icon_pos) ;
}


const gchar* entry_get_icon_name(GtkEntry* entry, GtkEntryIconPosition icon_pos) {
return gtk_entry_get_icon_name(entry, icon_pos) ;
}
GIcon* entry_get_icon_gicon(GtkEntry* entry, GtkEntryIconPosition icon_pos){
return gtk_entry_get_icon_gicon(entry, icon_pos) ;
}
void entry_set_icon_activatable(GtkEntry* entry, GtkEntryIconPosition icon_pos, gboolean activatable){
gtk_entry_set_icon_activatable(entry,icon_pos, activatable);
}
gboolean entry_get_icon_activatable(GtkEntry* entry, GtkEntryIconPosition icon_pos){
return gtk_entry_get_icon_activatable(entry, icon_pos) ;
}
void entry_set_icon_sensitive(GtkEntry* entry, GtkEntryIconPosition icon_pos, gboolean sensitive){
gtk_entry_set_icon_sensitive(entry,icon_pos, sensitive);
}
gboolean entry_get_icon_sensitive(GtkEntry* entry, GtkEntryIconPosition icon_pos){
return gtk_entry_get_icon_sensitive(entry, icon_pos) ;
}
gint entry_get_icon_at_pos(GtkEntry* entry, gint x, gint y){
return gtk_entry_get_icon_at_pos(entry,x, y) ;
}
void entry_set_icon_tooltip_text(GtkEntry* entry, GtkEntryIconPosition icon_pos, const gchar* tooltip){
gtk_entry_set_icon_tooltip_text(entry,icon_pos, tooltip);
}
gchar* entry_get_icon_tooltip_text(GtkEntry* entry, GtkEntryIconPosition icon_pos){
return gtk_entry_get_icon_tooltip_text(entry, icon_pos) ;
}
void entry_set_icon_tooltip_markup(GtkEntry* entry, GtkEntryIconPosition icon_pos, const gchar* tooltip){
gtk_entry_set_icon_tooltip_markup(entry,icon_pos, tooltip);
}
gchar* entry_get_icon_tooltip_markup(GtkEntry* entry, GtkEntryIconPosition icon_pos){
return gtk_entry_get_icon_tooltip_markup(entry, icon_pos) ;
}
void entry_set_icon_drag_source(GtkEntry* entry, GtkEntryIconPosition icon_pos, GtkTargetList* target_list, GdkDragAction actions){
gtk_entry_set_icon_drag_source(entry,icon_pos,target_list, actions);
}
gint entry_get_current_icon_drag_source(GtkEntry* entry){
return gtk_entry_get_current_icon_drag_source(entry) ;
}
void entry_get_icon_area(GtkEntry* entry, GtkEntryIconPosition icon_pos, GdkRectangle* icon_area){
gtk_entry_get_icon_area(entry,icon_pos, icon_area);
}
void entry_set_input_purpose(GtkEntry* entry, GtkInputPurpose purpose){
gtk_entry_set_input_purpose(entry, purpose);
}
GtkInputPurpose entry_get_input_purpose(GtkEntry* entry){
return gtk_entry_get_input_purpose(entry) ;
}
void entry_set_input_hints(GtkEntry* entry, GtkInputHints hints){
gtk_entry_set_input_hints(entry, hints);
}
GtkInputHints entry_get_input_hints(GtkEntry* entry){
return gtk_entry_get_input_hints(entry) ;
}
void entry_grab_focus_without_selecting(GtkEntry* entry){
gtk_entry_grab_focus_without_selecting(entry);
}



GtkEntryBuffer* entry_buffer_new(const gchar* initial_chars, gint n_initial_chars){
return gtk_entry_buffer_new(initial_chars, n_initial_chars) ;
}
const gchar* entry_buffer_get_text(GtkEntryBuffer* buffer) {
return gtk_entry_buffer_get_text(buffer) ;
}
void entry_buffer_set_text(GtkEntryBuffer* buffer, const gchar* chars, gint n_chars){
gtk_entry_buffer_set_text(buffer,chars, n_chars);
}
gsize entry_buffer_get_bytes(GtkEntryBuffer* buffer){
return gtk_entry_buffer_get_bytes(buffer) ;
}
guint entry_buffer_get_length(GtkEntryBuffer* buffer){
return gtk_entry_buffer_get_length(buffer) ;
}
gint entry_buffer_get_max_length(GtkEntryBuffer* buffer){
return gtk_entry_buffer_get_max_length(buffer) ;
}
void entry_buffer_set_max_length(GtkEntryBuffer* buffer, gint max_length){
gtk_entry_buffer_set_max_length(buffer, max_length);
}
guint entry_buffer_insert_text(GtkEntryBuffer* buffer, guint position, const gchar* chars, gint n_chars){
return gtk_entry_buffer_insert_text(buffer,position,chars, n_chars) ;
}
guint entry_buffer_delete_text(GtkEntryBuffer* buffer, guint position, gint n_chars){
return gtk_entry_buffer_delete_text(buffer,position, n_chars) ;
}
void entry_buffer_emit_deleted_text(GtkEntryBuffer* buffer, guint position, guint n_chars){
gtk_entry_buffer_emit_deleted_text(buffer,position, n_chars);
}
void entry_buffer_emit_inserted_text(GtkEntryBuffer* buffer, guint position, const gchar* chars, guint n_chars){
gtk_entry_buffer_emit_inserted_text(buffer,position,chars, n_chars);
}








GtkEntryCompletion* entry_completion_new(){
return gtk_entry_completion_new() ;
}
GtkEntryCompletion* entry_completion_new_with_area(GtkCellArea* area){
return gtk_entry_completion_new_with_area(area) ;
}
GtkWidget* entry_completion_get_entry(GtkEntryCompletion* completion){
return gtk_entry_completion_get_entry(completion) ;
}
void entry_completion_set_model(GtkEntryCompletion* completion, GtkTreeModel* model){
gtk_entry_completion_set_model(completion, model);
}
GtkTreeModel* entry_completion_get_model(GtkEntryCompletion* completion){
return gtk_entry_completion_get_model(completion) ;
}
void entry_completion_set_match_func(GtkEntryCompletion* completion, GtkEntryCompletionMatchFunc func, gpointer func_data, GDestroyNotify func_notify){
gtk_entry_completion_set_match_func(completion,func,func_data, func_notify);
}
void entry_completion_set_minimum_key_length(GtkEntryCompletion* completion, gint length){
gtk_entry_completion_set_minimum_key_length(completion, length);
}
gint entry_completion_get_minimum_key_length(GtkEntryCompletion* completion){
return gtk_entry_completion_get_minimum_key_length(completion) ;
}
gchar* entry_completion_compute_prefix(GtkEntryCompletion* completion, const char* key){
return gtk_entry_completion_compute_prefix(completion, key) ;
}
void entry_completion_complete(GtkEntryCompletion* completion){
gtk_entry_completion_complete(completion);
}
const gchar* entry_completion_get_completion_prefix(GtkEntryCompletion* completion) {
return gtk_entry_completion_get_completion_prefix(completion) ;
}
void entry_completion_insert_prefix(GtkEntryCompletion* completion){
gtk_entry_completion_insert_prefix(completion);
}
void entry_completion_insert_action_text(GtkEntryCompletion* completion, gint index_, const gchar* text){
gtk_entry_completion_insert_action_text(completion,index_, text);
}
void entry_completion_insert_action_markup(GtkEntryCompletion* completion, gint index_, const gchar* markup){
gtk_entry_completion_insert_action_markup(completion,index_, markup);
}
void entry_completion_delete_action(GtkEntryCompletion* completion, gint index_){
gtk_entry_completion_delete_action(completion, index_);
}
void entry_completion_set_text_column(GtkEntryCompletion* completion, gint column){
gtk_entry_completion_set_text_column(completion, column);
}
gint entry_completion_get_text_column(GtkEntryCompletion* completion){
return gtk_entry_completion_get_text_column(completion) ;
}
void entry_completion_set_inline_completion(GtkEntryCompletion* completion, gboolean inline_completion){
gtk_entry_completion_set_inline_completion(completion, inline_completion);
}
gboolean entry_completion_get_inline_completion(GtkEntryCompletion* completion){
return gtk_entry_completion_get_inline_completion(completion) ;
}
void entry_completion_set_inline_selection(GtkEntryCompletion* completion, gboolean inline_selection){
gtk_entry_completion_set_inline_selection(completion, inline_selection);
}
gboolean entry_completion_get_inline_selection(GtkEntryCompletion* completion){
return gtk_entry_completion_get_inline_selection(completion) ;
}
void entry_completion_set_popup_completion(GtkEntryCompletion* completion, gboolean popup_completion){
gtk_entry_completion_set_popup_completion(completion, popup_completion);
}
gboolean entry_completion_get_popup_completion(GtkEntryCompletion* completion){
return gtk_entry_completion_get_popup_completion(completion) ;
}
void entry_completion_set_popup_set_width(GtkEntryCompletion* completion, gboolean popup_set_width){
gtk_entry_completion_set_popup_set_width(completion, popup_set_width);
}
gboolean entry_completion_get_popup_set_width(GtkEntryCompletion* completion){
return gtk_entry_completion_get_popup_set_width(completion) ;
}
void entry_completion_set_popup_single_match(GtkEntryCompletion* completion, gboolean popup_single_match){
gtk_entry_completion_set_popup_single_match(completion, popup_single_match);
}
gboolean entry_completion_get_popup_single_match(GtkEntryCompletion* completion){
return gtk_entry_completion_get_popup_single_match(completion) ;
}



GtkWidget* scale_new(GtkOrientation orientation, GtkAdjustment* adjustment){
return gtk_scale_new(orientation, adjustment) ;
}
GtkWidget* scale_new_with_range(GtkOrientation orientation, gdouble min, gdouble max, gdouble step){
return gtk_scale_new_with_range(orientation,min,max, step) ;
}
void scale_set_digits(GtkScale* scale, gint digits){
gtk_scale_set_digits(scale, digits);
}
void scale_set_draw_value(GtkScale* scale, gboolean draw_value){
gtk_scale_set_draw_value(scale, draw_value);
}
void scale_set_has_origin(GtkScale* scale, gboolean has_origin){
gtk_scale_set_has_origin(scale, has_origin);
}
void scale_set_value_pos(GtkScale* scale, GtkPositionType pos){
gtk_scale_set_value_pos(scale, pos);
}
gint scale_get_digits(GtkScale* scale){
return gtk_scale_get_digits(scale) ;
}
gboolean scale_get_draw_value(GtkScale* scale){
return gtk_scale_get_draw_value(scale) ;
}
gboolean scale_get_has_origin(GtkScale* scale){
return gtk_scale_get_has_origin(scale) ;
}
GtkPositionType scale_get_value_pos(GtkScale* scale){
return gtk_scale_get_value_pos(scale) ;
}
PangoLayout* scale_get_layout(GtkScale* scale){
return gtk_scale_get_layout(scale) ;
}
void scale_get_layout_offsets(GtkScale* scale, gint* x, gint* y){
gtk_scale_get_layout_offsets(scale,x, y);
}
void scale_add_mark(GtkScale* scale, gdouble value, GtkPositionType position, const gchar* markup){
gtk_scale_add_mark(scale,value,position, markup);
}
void scale_clear_marks(GtkScale* scale){
gtk_scale_clear_marks(scale);
}



void spin_button_configure(GtkSpinButton* spin_button, GtkAdjustment* adjustment, gdouble climb_rate, guint digits){
gtk_spin_button_configure(spin_button,adjustment,climb_rate, digits);
}
GtkWidget* spin_button_new(GtkAdjustment* adjustment, gdouble climb_rate, guint digits){
return gtk_spin_button_new(adjustment,climb_rate, digits) ;
}
GtkWidget* spin_button_new_with_range(gdouble min, gdouble max, gdouble step){
return gtk_spin_button_new_with_range(min,max, step) ;
}
void spin_button_set_adjustment(GtkSpinButton* spin_button, GtkAdjustment* adjustment){
gtk_spin_button_set_adjustment(spin_button, adjustment);
}
GtkAdjustment* spin_button_get_adjustment(GtkSpinButton* spin_button){
return gtk_spin_button_get_adjustment(spin_button) ;
}
void spin_button_set_digits(GtkSpinButton* spin_button, guint digits){
gtk_spin_button_set_digits(spin_button, digits);
}
void spin_button_set_increments(GtkSpinButton* spin_button, gdouble sep, gdouble page){
gtk_spin_button_set_increments(spin_button,sep, page);
}
void spin_button_set_range(GtkSpinButton* spin_button, gdouble min, gdouble max){
gtk_spin_button_set_range(spin_button,min, max);
}
gint spin_button_get_value_as_int(GtkSpinButton* spin_button){
return gtk_spin_button_get_value_as_int(spin_button) ;
}
void spin_button_set_value(GtkSpinButton* spin_button, gdouble value){
gtk_spin_button_set_value(spin_button, value);
}
void spin_button_set_update_policy(GtkSpinButton* spin_button, GtkSpinButtonUpdatePolicy policy){
gtk_spin_button_set_update_policy(spin_button, policy);
}
void spin_button_set_numeric(GtkSpinButton* spin_button, gboolean numeric){
gtk_spin_button_set_numeric(spin_button, numeric);
}
void spin_button_spin(GtkSpinButton* spin_button, GtkSpinType direction, gdouble increment){
gtk_spin_button_spin(spin_button,direction, increment);
}
void spin_button_set_wrap(GtkSpinButton* spin_button, gdouble wrap){
gtk_spin_button_set_wrap(spin_button, wrap);
}
void spin_button_set_snap_to_ticks(GtkSpinButton* spin_button, gboolean snap_to_ticks){
gtk_spin_button_set_snap_to_ticks(spin_button, snap_to_ticks);
}
void spin_button_update(GtkSpinButton* spin_button){
gtk_spin_button_update(spin_button);
}
guint spin_button_get_digits(GtkSpinButton* spin_button){
return gtk_spin_button_get_digits(spin_button) ;
}
void spin_button_get_increments(GtkSpinButton* spin_button, gdouble* step, gdouble* page){
gtk_spin_button_get_increments(spin_button,step, page);
}
gdouble spin_button_get_numeric(GtkSpinButton* spin_button){
return gtk_spin_button_get_numeric(spin_button) ;
}
void spin_button_get_range(GtkSpinButton* spin_button, gdouble* min, gdouble* max){
gtk_spin_button_get_range(spin_button,min, max);
}
gboolean spin_button_get_snap_to_ticks(GtkSpinButton* spin_button){
return gtk_spin_button_get_snap_to_ticks(spin_button) ;
}
GtkSpinButtonUpdatePolicy spin_button_get_update_policy(GtkSpinButton* spin_button){
return gtk_spin_button_get_update_policy(spin_button) ;
}
gdouble spin_button_get_value(GtkSpinButton* spin_button){
return gtk_spin_button_get_value(spin_button) ;
}
gboolean spin_button_get_wrap(GtkSpinButton* spin_button){
return gtk_spin_button_get_wrap(spin_button) ;
}



GtkWidget* search_entry_new(){
return gtk_search_entry_new() ;
}
gboolean search_entry_handle_event(GtkSearchEntry* entry, GdkEvent* event){
return gtk_search_entry_handle_event(entry, event) ;
}



GtkWidget* search_bar_new(){
return gtk_search_bar_new() ;
}
void search_bar_connect_entry(GtkSearchBar* bar, GtkEntry* entry){
gtk_search_bar_connect_entry(bar, entry);
}
gboolean search_bar_get_search_mode(GtkSearchBar* bar){
return gtk_search_bar_get_search_mode(bar) ;
}
void search_bar_set_search_mode(GtkSearchBar* bar, gboolean search_mode){
gtk_search_bar_set_search_mode(bar, search_mode);
}
gboolean search_bar_get_show_close_button(GtkSearchBar* bar){
return gtk_search_bar_get_show_close_button(bar) ;
}
void search_bar_set_show_close_button(GtkSearchBar* bar, gboolean visible){
gtk_search_bar_set_show_close_button(bar, visible);
}
gboolean search_bar_handle_event(GtkSearchBar* bar, GdkEvent* event){
return gtk_search_bar_handle_event(bar, event) ;
}



void editable_select_region(GtkEditable* editable, gint start_pos, gint end_pos){
gtk_editable_select_region(editable,start_pos, end_pos);
}
gboolean editable_get_selection_bounds(GtkEditable* editable, gint* start_pos, gint* end_pos){
return gtk_editable_get_selection_bounds(editable,start_pos, end_pos) ;
}
void editable_insert_text(GtkEditable* editable, const gchar* new_text, gint new_text_length, gint* position){
gtk_editable_insert_text(editable,new_text,new_text_length, position);
}
void editable_delete_text(GtkEditable* editable, gint start_pos, gint end_pos){
gtk_editable_delete_text(editable,start_pos, end_pos);
}
gchar* editable_get_chars(GtkEditable* editable, gint start_pos, gint end_pos){
return gtk_editable_get_chars(editable,start_pos, end_pos) ;
}
void editable_cut_clipboard(GtkEditable* editable){
return gtk_editable_cut_clipboard(editable) ;
}
void editable_copy_clipboard(GtkEditable* editable){
return gtk_editable_copy_clipboard(editable) ;
}
void editable_delete_selection(GtkEditable* editable){
gtk_editable_delete_selection(editable);
}
void editable_set_position(GtkEditable* editable, gint position){
gtk_editable_set_position(editable, position);
}
gint editable_get_position(GtkEditable* editable){
return gtk_editable_get_position(editable) ;
}
void editable_set_editable(GtkEditable* editable, gboolean is_editable){
gtk_editable_set_editable(editable, is_editable);
}
gboolean editable_get_editable(GtkEditable* editable){
return gtk_editable_get_editable(editable) ;
}










GtkTextBuffer* text_iter_get_buffer(const GtkTextIter* iter){
return gtk_text_iter_get_buffer(iter) ;
}
GtkTextIter* text_iter_copy(const GtkTextIter* iter){
return gtk_text_iter_copy(iter) ;
}
void text_iter_assign(GtkTextIter* iter, const GtkTextIter* other){
gtk_text_iter_assign(iter, other);
}
void text_iter_free(GtkTextIter* iter){
gtk_text_iter_free(iter);
}
gint text_iter_get_offset(const GtkTextIter* iter){
return gtk_text_iter_get_offset(iter) ;
}
gint text_iter_get_line(const GtkTextIter* iter){
return gtk_text_iter_get_line(iter) ;
}
gint text_iter_get_line_offset(const GtkTextIter* iter){
return gtk_text_iter_get_line_offset(iter) ;
}
gint text_iter_get_line_index(const GtkTextIter* iter){
return gtk_text_iter_get_line_index(iter) ;
}
gint text_iter_get_visible_line_index(const GtkTextIter* iter){
return gtk_text_iter_get_visible_line_index(iter) ;
}
gint text_iter_get_visible_line_offset(const GtkTextIter* iter){
return gtk_text_iter_get_visible_line_offset(iter) ;
}
gunichar text_iter_get_char(const GtkTextIter* iter){
return gtk_text_iter_get_char(iter) ;
}
gchar* text_iter_get_slice(const GtkTextIter* start, const GtkTextIter* end){
return gtk_text_iter_get_slice(start, end) ;
}
gchar* text_iter_get_text(const GtkTextIter* start, const GtkTextIter* end){
return gtk_text_iter_get_text(start, end) ;
}
gchar* text_iter_get_visible_slice(const GtkTextIter* start, const GtkTextIter* end){
return gtk_text_iter_get_visible_slice(start, end) ;
}
gchar* text_iter_get_visible_text(const GtkTextIter* start, const GtkTextIter* end){
return gtk_text_iter_get_visible_text(start, end) ;
}
GdkPixbuf* text_iter_get_pixbuf(const GtkTextIter* iter){
return gtk_text_iter_get_pixbuf(iter) ;
}
GSList* text_iter_get_marks(const GtkTextIter* iter){
return gtk_text_iter_get_marks(iter) ;
}
GSList* text_iter_get_toggled_tags(const GtkTextIter* iter, gboolean toggled_on){
return gtk_text_iter_get_toggled_tags(iter, toggled_on) ;
}
GtkTextChildAnchor* text_iter_get_child_anchor(const GtkTextIter* iter){
return gtk_text_iter_get_child_anchor(iter) ;
}
gboolean text_iter_starts_tag(const GtkTextIter* iter, GtkTextTag* tag){
return gtk_text_iter_starts_tag(iter, tag) ;
}


gboolean text_iter_ends_tag(const GtkTextIter* iter, GtkTextTag* tag){
return gtk_text_iter_ends_tag(iter, tag) ;
}
gboolean text_iter_toggles_tag(const GtkTextIter* iter, GtkTextTag* tag){
return gtk_text_iter_toggles_tag(iter, tag) ;
}
gboolean text_iter_has_tag(const GtkTextIter* iter, GtkTextTag* tag){
return gtk_text_iter_has_tag(iter, tag) ;
}
GSList* text_iter_get_tags(const GtkTextIter* iter){
return gtk_text_iter_get_tags(iter) ;
}
gboolean text_iter_editable(const GtkTextIter* iter, gboolean default_setting){
return gtk_text_iter_editable(iter, default_setting) ;
}
gboolean text_iter_can_insert(const GtkTextIter* iter, gboolean default_editability){
return gtk_text_iter_can_insert(iter, default_editability) ;
}
gboolean text_iter_starts_word(const GtkTextIter* iter){
return gtk_text_iter_starts_word(iter) ;
}
gboolean text_iter_ends_word(const GtkTextIter* iter){
return gtk_text_iter_ends_word(iter) ;
}
gboolean text_iter_inside_word(const GtkTextIter* iter){
return gtk_text_iter_inside_word(iter) ;
}
gboolean text_iter_starts_line(const GtkTextIter* iter){
return gtk_text_iter_starts_line(iter) ;
}
gboolean text_iter_ends_line(const GtkTextIter* iter){
return gtk_text_iter_ends_line(iter) ;
}
gboolean text_iter_starts_sentence(const GtkTextIter* iter){
return gtk_text_iter_starts_sentence(iter) ;
}
gboolean text_iter_ends_sentence(const GtkTextIter* iter){
return gtk_text_iter_ends_sentence(iter) ;
}
gboolean text_iter_inside_sentence(const GtkTextIter* iter){
return gtk_text_iter_inside_sentence(iter) ;
}
gboolean text_iter_is_cursor_position(const GtkTextIter* iter){
return gtk_text_iter_is_cursor_position(iter) ;
}
gint text_iter_get_chars_in_line(const GtkTextIter* iter){
return gtk_text_iter_get_chars_in_line(iter) ;
}
gint text_iter_get_bytes_in_line(const GtkTextIter* iter){
return gtk_text_iter_get_bytes_in_line(iter) ;
}
gboolean text_iter_get_attributes(const GtkTextIter* iter, GtkTextAttributes* values){
return gtk_text_iter_get_attributes(iter, values) ;
}
PangoLanguage* text_iter_get_language(const GtkTextIter* iter){
return gtk_text_iter_get_language(iter) ;
}
gboolean text_iter_is_end(const GtkTextIter* iter){
return gtk_text_iter_is_end(iter) ;
}
gboolean text_iter_is_start(const GtkTextIter* iter){
return gtk_text_iter_is_start(iter) ;
}
gboolean text_iter_forward_char(GtkTextIter* iter){
return gtk_text_iter_forward_char(iter) ;
}
gboolean text_iter_backward_char(GtkTextIter* iter){
return gtk_text_iter_backward_char(iter) ;
}
gboolean text_iter_forward_chars(GtkTextIter* iter, gint count){
return gtk_text_iter_forward_chars(iter, count) ;
}
gboolean text_iter_backward_chars(GtkTextIter* iter, gint count){
return gtk_text_iter_backward_chars(iter, count) ;
}
gboolean text_iter_forward_line(GtkTextIter* iter){
return gtk_text_iter_forward_line(iter) ;
}
gboolean text_iter_backward_line(GtkTextIter* iter){
return gtk_text_iter_backward_line(iter) ;
}
gboolean text_iter_forward_lines(GtkTextIter* iter, gint count){
return gtk_text_iter_forward_lines(iter, count) ;
}
gboolean text_iter_backward_lines(GtkTextIter* iter, gint count){
return gtk_text_iter_backward_lines(iter, count) ;
}
gboolean text_iter_forward_word_ends(GtkTextIter* iter, gint count){
return gtk_text_iter_forward_word_ends(iter, count) ;
}
gboolean text_iter_backward_word_starts(GtkTextIter* iter, gint count){
return gtk_text_iter_backward_word_starts(iter, count) ;
}
gboolean text_iter_forward_word_end(GtkTextIter* iter){
return gtk_text_iter_forward_word_end(iter) ;
}
gboolean text_iter_backward_word_start(GtkTextIter* iter){
return gtk_text_iter_backward_word_start(iter) ;
}
gboolean text_iter_forward_cursor_position(GtkTextIter* iter){
return gtk_text_iter_forward_cursor_position(iter) ;
}
gboolean text_iter_backward_cursor_position(GtkTextIter* iter){
return gtk_text_iter_backward_cursor_position(iter) ;
}
gboolean text_iter_forward_cursor_positions(GtkTextIter* iter, gint count){
return gtk_text_iter_forward_cursor_positions(iter, count) ;
}
gboolean text_iter_backward_cursor_positions(GtkTextIter* iter, gint count){
return gtk_text_iter_backward_cursor_positions(iter, count) ;
}
gboolean text_iter_backward_sentence_start(GtkTextIter* iter){
return gtk_text_iter_backward_sentence_start(iter) ;
}
gboolean text_iter_backward_sentence_starts(GtkTextIter* iter, gint count){
return gtk_text_iter_backward_sentence_starts(iter, count) ;
}
gboolean text_iter_forward_sentence_end(GtkTextIter* iter){
return gtk_text_iter_forward_sentence_end(iter) ;
}
gboolean text_iter_forward_sentence_ends(GtkTextIter* iter, gint count){
return gtk_text_iter_forward_sentence_ends(iter, count) ;
}
gboolean text_iter_forward_visible_word_ends(GtkTextIter* iter, gint count){
return gtk_text_iter_forward_visible_word_ends(iter, count) ;
}
gboolean text_iter_backward_visible_word_starts(GtkTextIter* iter, gint count){
return gtk_text_iter_backward_visible_word_starts(iter, count) ;
}
gboolean text_iter_forward_visible_word_end(GtkTextIter* iter){
return gtk_text_iter_forward_visible_word_end(iter) ;
}
gboolean text_iter_backward_visible_word_start(GtkTextIter* iter){
return gtk_text_iter_backward_visible_word_start(iter) ;
}
gboolean text_iter_forward_visible_cursor_position(GtkTextIter* iter){
return gtk_text_iter_forward_visible_cursor_position(iter) ;
}
gboolean text_iter_backward_visible_cursor_position(GtkTextIter* iter){
return gtk_text_iter_backward_visible_cursor_position(iter) ;
}
gboolean text_iter_forward_visible_cursor_positions(GtkTextIter* iter, gint count){
return gtk_text_iter_forward_visible_cursor_positions(iter, count) ;
}
gboolean text_iter_backward_visible_cursor_positions(GtkTextIter* iter, gint count){
return gtk_text_iter_backward_visible_cursor_positions(iter, count) ;
}
gboolean text_iter_forward_visible_line(GtkTextIter* iter){
return gtk_text_iter_forward_visible_line(iter) ;
}
gboolean text_iter_backward_visible_line(GtkTextIter* iter){
return gtk_text_iter_backward_visible_line(iter) ;
}
gboolean text_iter_forward_visible_lines(GtkTextIter* iter, gint count){
return gtk_text_iter_forward_visible_lines(iter, count) ;
}
gboolean text_iter_backward_visible_lines(GtkTextIter* iter, gint count){
return gtk_text_iter_backward_visible_lines(iter, count) ;
}
void text_iter_set_offset(GtkTextIter* iter, gint char_offset){
gtk_text_iter_set_offset(iter, char_offset);
}
void text_iter_set_line(GtkTextIter* iter, gint line_number){
gtk_text_iter_set_line(iter, line_number);
}
void text_iter_set_line_offset(GtkTextIter* iter, gint char_on_line){
gtk_text_iter_set_line_offset(iter, char_on_line);
}
void text_iter_set_line_index(GtkTextIter* iter, gint byte_on_line){
gtk_text_iter_set_line_index(iter, byte_on_line);
}
void text_iter_set_visible_line_index(GtkTextIter* iter, gint byte_on_line){
gtk_text_iter_set_visible_line_index(iter, byte_on_line);
}
void text_iter_set_visible_line_offset(GtkTextIter* iter, gint char_on_line){
gtk_text_iter_set_visible_line_offset(iter, char_on_line);
}
void text_iter_forward_to_end(GtkTextIter* iter){
gtk_text_iter_forward_to_end(iter);
}
gboolean text_iter_forward_to_line_end(GtkTextIter* iter){
return gtk_text_iter_forward_to_line_end(iter) ;
}
gboolean text_iter_forward_to_tag_toggle(GtkTextIter* iter, GtkTextTag* tag){
return gtk_text_iter_forward_to_tag_toggle(iter, tag) ;
}
gboolean text_iter_backward_to_tag_toggle(GtkTextIter* iter, GtkTextTag* tag){
return gtk_text_iter_backward_to_tag_toggle(iter, tag) ;
}



gboolean text_iter_forward_find_char(GtkTextIter* iter, GtkTextCharPredicate pred, gpointer user_data, const GtkTextIter* limit){
return gtk_text_iter_forward_find_char(iter,pred,user_data, limit) ;
}
gboolean text_iter_backward_find_char(GtkTextIter* iter, GtkTextCharPredicate pred, gpointer user_data, const GtkTextIter* limit){
return gtk_text_iter_backward_find_char(iter,pred,user_data, limit) ;
}
gboolean text_iter_forward_search(const GtkTextIter* iter, const gchar* str, GtkTextSearchFlags flags, GtkTextIter* match_start, GtkTextIter* match_end, const GtkTextIter* limit){
return gtk_text_iter_forward_search(iter,str,flags,match_start,match_end, limit) ;
}
gboolean text_iter_backward_search(const GtkTextIter* iter, const gchar* str, GtkTextSearchFlags flags, GtkTextIter* match_start, GtkTextIter* match_end, const GtkTextIter* limit){
return gtk_text_iter_backward_search(iter,str,flags,match_start,match_end, limit) ;
}
gboolean text_iter_equal(const GtkTextIter* lhs, const GtkTextIter* rhs){
return gtk_text_iter_equal(lhs, rhs) ;
}
gint text_iter_compare(const GtkTextIter* lhs, const GtkTextIter* rhs){
return gtk_text_iter_compare(lhs, rhs) ;
}
gboolean text_iter_in_range(const GtkTextIter* iter, const GtkTextIter* start, const GtkTextIter* end){
return gtk_text_iter_in_range(iter,start, end) ;
}
void text_iter_order(GtkTextIter* first, GtkTextIter* second){
gtk_text_iter_order(first, second);
}



GtkTextMark* text_mark_new(const gchar* name, gboolean left_gravity){
return gtk_text_mark_new(name, left_gravity) ;
}
void text_mark_set_visible(GtkTextMark* mark, gboolean setting){
gtk_text_mark_set_visible(mark, setting);
}
gboolean text_mark_get_visible(GtkTextMark* mark){
return gtk_text_mark_get_visible(mark) ;
}
gboolean text_mark_get_deleted(GtkTextMark* mark){
return gtk_text_mark_get_deleted(mark) ;
}
const gchar* text_mark_get_name(GtkTextMark* mark) {
return gtk_text_mark_get_name(mark) ;
}
GtkTextBuffer* text_mark_get_buffer(GtkTextMark* mark){
return gtk_text_mark_get_buffer(mark) ;
}
gboolean text_mark_get_left_gravity(GtkTextMark* mark){
return gtk_text_mark_get_left_gravity(mark) ;
}



GtkTextBuffer* text_buffer_new(GtkTextTagTable* table){
return gtk_text_buffer_new(table) ;
}
gint text_buffer_get_line_count(GtkTextBuffer* buffer){
return gtk_text_buffer_get_line_count(buffer) ;
}
gint text_buffer_get_char_count(GtkTextBuffer* buffer){
return gtk_text_buffer_get_char_count(buffer) ;
}
GtkTextTagTable* text_buffer_get_tag_table(GtkTextBuffer* buffer){
return gtk_text_buffer_get_tag_table(buffer) ;
}
void text_buffer_insert(GtkTextBuffer* buffer, GtkTextIter* iter, const gchar* text, gint len){
gtk_text_buffer_insert(buffer,iter,text, len);
}
void text_buffer_insert_at_cursor(GtkTextBuffer* buffer, const gchar* text, gint len){
gtk_text_buffer_insert_at_cursor(buffer,text, len);
}
gboolean text_buffer_insert_interactive(GtkTextBuffer* buffer, GtkTextIter* iter, const gchar* text, gint len, gboolean default_editable){
return gtk_text_buffer_insert_interactive(buffer,iter,text,len, default_editable) ;
}
gboolean text_buffer_insert_interactive_at_cursor(GtkTextBuffer* buffer, const gchar* text, gint len, gboolean default_editable){
return gtk_text_buffer_insert_interactive_at_cursor(buffer,text,len, default_editable) ;
}
void text_buffer_insert_range(GtkTextBuffer* buffer, GtkTextIter* iter, const GtkTextIter* start, const GtkTextIter* end){
gtk_text_buffer_insert_range(buffer,iter,start, end);
}
gboolean text_buffer_insert_range_interactive(GtkTextBuffer* buffer, GtkTextIter* iter, const GtkTextIter* start, const GtkTextIter* end, gboolean default_editable){
return gtk_text_buffer_insert_range_interactive(buffer,iter,start,end, default_editable) ;
}
template <typename... Tags>
void text_buffer_insert_with_tags(GtkTextBuffer* buffer, GtkTextIter* iter, const gchar* text, gint len, GtkTextTag* first_tag, Tags... list){
(gtk_text_buffer_insert_with_tags(buffer,iter,text,len,first_tag,list), ...);
}
template <typename... Tags>
void text_buffer_insert_with_tags_by_name(GtkTextBuffer* buffer, GtkTextIter *iter, const gchar* text, gint len, const gchar* first_tag_name, Tags... names){
(gtk_text_buffer_insert_with_tags_by_name(buffer,iter,text,len,first_tag_name,names), ...);
}
void text_buffer_insert_markup(GtkTextBuffer* buffer, GtkTextIter* iter, const gchar* markup, gint len){
gtk_text_buffer_insert_markup(buffer,iter,markup, len);
}
void text_buffer_delete(GtkTextBuffer* buffer, GtkTextIter* start, GtkTextIter* end){
gtk_text_buffer_delete(buffer,start, end);
}
gboolean text_buffer_delete_interactive(GtkTextBuffer* buffer, GtkTextIter* start_iter, GtkTextIter* end_iter, gboolean default_editable){
return gtk_text_buffer_delete_interactive(buffer,start_iter,end_iter, default_editable) ;
}
gboolean text_buffer_backspace(GtkTextBuffer* buffer, GtkTextIter* iter, gboolean interactive, gboolean default_editable){
return gtk_text_buffer_backspace(buffer,iter,interactive, default_editable) ;
}
void text_buffer_set_text(GtkTextBuffer* buffer, const gchar* text, gint len){
gtk_text_buffer_set_text(buffer,text, len);
}
gchar* text_buffer_get_text(GtkTextBuffer* buffer, const GtkTextIter* start, const GtkTextIter* end, gboolean include_hidden_chars){
return gtk_text_buffer_get_text(buffer,start,end, include_hidden_chars) ;
}
gchar* text_buffer_get_slice(GtkTextBuffer* buffer, const GtkTextIter* start, const GtkTextIter* end, gboolean include_hidden_chars){
return gtk_text_buffer_get_slice(buffer,start,end, include_hidden_chars) ;
}
void text_buffer_insert_pixbuf(GtkTextBuffer* buffer, GtkTextIter* iter, GdkPixbuf* pixbuf){
gtk_text_buffer_insert_pixbuf(buffer,iter, pixbuf);
}
void text_buffer_insert_child_anchor(GtkTextBuffer* buffer, GtkTextIter* iter, GtkTextChildAnchor* anchor){
gtk_text_buffer_insert_child_anchor(buffer,iter, anchor);
}
GtkTextChildAnchor* text_buffer_create_child_anchor(GtkTextBuffer* buffer, GtkTextIter* iter){
return gtk_text_buffer_create_child_anchor(buffer, iter) ;
}
GtkTextMark* text_buffer_create_mark(GtkTextBuffer* buffer, const gchar* mark_name, const GtkTextIter* where, gboolean left_gravity){
return gtk_text_buffer_create_mark(buffer,mark_name,where, left_gravity) ;
}
void text_buffer_move_mark(GtkTextBuffer* buffer, GtkTextMark* mark, const GtkTextIter* where){
gtk_text_buffer_move_mark(buffer,mark, where);
}
void text_buffer_move_mark_by_name(GtkTextBuffer* buffer, const gchar* name, const GtkTextIter* where){
gtk_text_buffer_move_mark_by_name(buffer,name, where);
}
void text_buffer_add_mark(GtkTextBuffer* buffer, GtkTextMark* mark, const GtkTextIter* where){
gtk_text_buffer_add_mark(buffer,mark, where);
}
void text_buffer_delete_mark(GtkTextBuffer* buffer, GtkTextMark* mark){
gtk_text_buffer_delete_mark(buffer, mark);
}
void text_buffer_delete_mark_by_name(GtkTextBuffer* buffer, const gchar* name){
gtk_text_buffer_delete_mark_by_name(buffer, name);
}
GtkTextMark* text_buffer_get_mark(GtkTextBuffer* buffer, const gchar* name){
return gtk_text_buffer_get_mark(buffer, name) ;
}
GtkTextMark* text_buffer_get_insert(GtkTextBuffer* buffer){
return gtk_text_buffer_get_insert(buffer) ;
}
GtkTextMark* text_buffer_get_selection_bound(GtkTextBuffer* buffer){
return gtk_text_buffer_get_selection_bound(buffer) ;
}
gboolean text_buffer_get_has_selection(GtkTextBuffer* buffer){
return gtk_text_buffer_get_has_selection(buffer) ;
}
void text_buffer_place_cursor(GtkTextBuffer* buffer, const GtkTextIter* where){
gtk_text_buffer_place_cursor(buffer, where);
}
void text_buffer_select_range(GtkTextBuffer* buffer, const GtkTextIter* ins, const GtkTextIter* bound){
gtk_text_buffer_select_range(buffer,ins, bound);
}
void text_buffer_apply_tag(GtkTextBuffer* buffer, GtkTextTag* tag, const GtkTextIter* start, const GtkTextIter* end){
gtk_text_buffer_apply_tag(buffer,tag,start, end);
}
void text_buffer_remove_tag(GtkTextBuffer* buffer, GtkTextTag* tag, const GtkTextIter* start, const GtkTextIter* end){
gtk_text_buffer_remove_tag(buffer,tag,start, end);
}
void text_buffer_apply_tag_by_name(GtkTextBuffer* buffer, const gchar* name, const GtkTextIter* start, const GtkTextIter* end){
gtk_text_buffer_apply_tag_by_name(buffer,name,start, end);
}
void text_buffer_remove_tag_by_name(GtkTextBuffer* buffer, const gchar* name, const GtkTextIter* start, const GtkTextIter* end){
gtk_text_buffer_remove_tag_by_name(buffer,name,start, end);
}
void text_buffer_remove_all_tags(GtkTextBuffer* buffer, const GtkTextIter* start, const GtkTextIter* end){
gtk_text_buffer_remove_all_tags(buffer,start, end);
}
template <typename... Values>
GtkTextTag* text_buffer_create_tag(GtkTextBuffer* buffer, const gchar* tag_name, const gchar* first_property_name, Values... list){
return (gtk_text_buffer_create_tag(buffer,tag_name,first_property_name,list), ...) ;
}
void text_buffer_get_iter_at_line_offset(GtkTextBuffer* buffer, GtkTextIter* iter, gint line_number, gint char_offset){
gtk_text_buffer_get_iter_at_line_offset(buffer,iter,line_number, char_offset);
}
void text_buffer_get_iter_at_offset(GtkTextBuffer* buffer, GtkTextIter* iter, gint char_offset){
gtk_text_buffer_get_iter_at_offset(buffer,iter, char_offset);
}
void text_buffer_get_iter_at_line(GtkTextBuffer* buffer, GtkTextIter* iter, gint line_number){
gtk_text_buffer_get_iter_at_line(buffer,iter, line_number);
}
void text_buffer_get_iter_at_line_index(GtkTextBuffer* buffer, GtkTextIter* iter, gint line_number, gint byte_index){
gtk_text_buffer_get_iter_at_line_index(buffer,iter,line_number, byte_index);
}
void text_buffer_get_iter_at_mark(GtkTextBuffer* buffer, GtkTextIter* iter, GtkTextMark* mark){
gtk_text_buffer_get_iter_at_mark(buffer,iter, mark);
}
void text_buffer_get_iter_at_child_anchor(GtkTextBuffer* buffer, GtkTextIter* iter, GtkTextChildAnchor* anchor){
gtk_text_buffer_get_iter_at_child_anchor(buffer,iter, anchor);
}
void text_buffer_get_start_iter(GtkTextBuffer* buffer, GtkTextIter* iter){
gtk_text_buffer_get_start_iter(buffer, iter);
}
void text_buffer_get_end_iter(GtkTextBuffer* buffer, GtkTextIter* iter){
gtk_text_buffer_get_end_iter(buffer, iter);
}
void text_buffer_get_bounds(GtkTextBuffer* buffer, GtkTextIter* start, GtkTextIter* end){
gtk_text_buffer_get_bounds(buffer,start, end);
}
gboolean text_buffer_get_modified(GtkTextBuffer* buffer){
return gtk_text_buffer_get_modified(buffer) ;
}
void text_buffer_set_modified(GtkTextBuffer* buffer, gboolean setting){
gtk_text_buffer_set_modified(buffer, setting);
}
gboolean text_buffer_delete_selection(GtkTextBuffer* buffer, gboolean interactive, gboolean default_editable){
return gtk_text_buffer_delete_selection(buffer,interactive, default_editable) ;
}
void text_buffer_paste_clipboard(GtkTextBuffer* buffer, GtkClipboard* clipboard, GtkTextIter* override_location, gboolean default_editable){
gtk_text_buffer_paste_clipboard(buffer,clipboard,override_location, default_editable);
}
void text_buffer_copy_clipboard(GtkTextBuffer* buffer, GtkClipboard* clipboard){
gtk_text_buffer_copy_clipboard(buffer, clipboard);
}
void text_buffer_cut_clipboard(GtkTextBuffer* buffer, GtkClipboard* clipboard, gboolean default_editable){
gtk_text_buffer_cut_clipboard(buffer,clipboard, default_editable);
}
gboolean text_buffer_get_selection_bounds(GtkTextBuffer* buffer, GtkTextIter* start, GtkTextIter* end){
return gtk_text_buffer_get_selection_bounds(buffer,start, end) ;
}
void text_buffer_begin_user_action(GtkTextBuffer* buffer){
gtk_text_buffer_begin_user_action(buffer);
}
void text_buffer_end_user_action(GtkTextBuffer* buffer){
gtk_text_buffer_end_user_action(buffer);
}
void text_buffer_add_selection_clipboard(GtkTextBuffer* buffer, GtkClipboard* clipboard){
gtk_text_buffer_add_selection_clipboard(buffer, clipboard);
}
void text_buffer_remove_selection_clipboard(GtkTextBuffer* buffer, GtkClipboard* clipboard){
gtk_text_buffer_remove_selection_clipboard(buffer, clipboard);
}









gboolean text_buffer_deserialize(GtkTextBuffer* register_buffer, GtkTextBuffer* content_buffer, GdkAtom format, GtkTextIter* iter, const guint8* data, gsize length, GError** error){
return gtk_text_buffer_deserialize(register_buffer,content_buffer,format,iter,data,length, error) ;
}
gboolean text_buffer_deserialize_get_can_create_tags(GtkTextBuffer* buffer, GdkAtom format){
return gtk_text_buffer_deserialize_get_can_create_tags(buffer, format) ;
}
void text_buffer_deserialize_set_can_create_tags(GtkTextBuffer* buffer, GdkAtom format, gboolean can_create_tags){
gtk_text_buffer_deserialize_set_can_create_tags(buffer,format, can_create_tags);
}
GtkTargetList* text_buffer_get_copy_target_list(GtkTextBuffer* buffer){
return gtk_text_buffer_get_copy_target_list(buffer) ;
}
GdkAtom* text_buffer_get_deserialize_formats(GtkTextBuffer* buffer, gint* n_formats){
return gtk_text_buffer_get_deserialize_formats(buffer, n_formats) ;
}
GtkTargetList* text_buffer_get_paste_target_list(GtkTextBuffer* buffer){
return gtk_text_buffer_get_paste_target_list(buffer) ;
}
GdkAtom* text_buffer_get_serialize_formats(GtkTextBuffer* buffer, gint* n_formats){
return gtk_text_buffer_get_serialize_formats(buffer, n_formats) ;
}
GdkAtom text_buffer_register_deserialize_format(GtkTextBuffer* buffer, const gchar* mime_type, GtkTextBufferDeserializeFunc function, gpointer user_data, GDestroyNotify user_data_destroy){
return gtk_text_buffer_register_deserialize_format(buffer,mime_type,function,user_data, user_data_destroy) ;
}
GdkAtom text_buffer_register_deserialize_tagset(GtkTextBuffer* buffer, const gchar* tagset_name){
return gtk_text_buffer_register_deserialize_tagset(buffer, tagset_name) ;
}
GdkAtom text_buffer_register_serialize_format(GtkTextBuffer* buffer, const gchar* mime_type, GtkTextBufferSerializeFunc function, gpointer user_data, GDestroyNotify user_data_destroy){
return gtk_text_buffer_register_serialize_format(buffer,mime_type,function,user_data, user_data_destroy) ;
}
GdkAtom text_buffer_register_serialize_tagset(GtkTextBuffer* buffer, const gchar* tagset_name){
return gtk_text_buffer_register_serialize_tagset(buffer, tagset_name) ;
}







guint8* text_buffer_serialize(GtkTextBuffer* register_buffer, GtkTextBuffer* content_buffer, GdkAtom format, const GtkTextIter* start, const GtkTextIter* end, gsize* length){
return gtk_text_buffer_serialize(register_buffer,content_buffer,format,start,end, length) ;
}
void text_buffer_unregister_deserialize_format(GtkTextBuffer* buffer, GdkAtom format){
gtk_text_buffer_unregister_deserialize_format(buffer, format);
}
void text_buffer_unregister_serialize_format(GtkTextBuffer* buffer, GdkAtom format){
gtk_text_buffer_unregister_serialize_format(buffer, format);
}



GtkTextTag* text_tag_new(const gchar* name){
return gtk_text_tag_new(name) ;
}
gint text_tag_get_priority(GtkTextTag* tag){
return gtk_text_tag_get_priority(tag) ;
}
void text_tag_set_priority(GtkTextTag* tag, gint priority){
gtk_text_tag_set_priority(tag, priority);
}
gboolean text_tag_event(GtkTextTag* tag, GObject* event_object, GdkEvent* event, const GtkTextIter* iter){
return gtk_text_tag_event(tag,event_object,event, iter) ;
}
void text_tag_changed(GtkTextTag* tag, gboolean size_changed){
gtk_text_tag_changed(tag, size_changed);
}
GtkTextAttributes* text_attributes_new(){
return gtk_text_attributes_new() ;
}
GtkTextAttributes* text_attributes_copy(GtkTextAttributes* src){
return gtk_text_attributes_copy(src) ;
}
void text_attributes_copy_values(GtkTextAttributes* src, GtkTextAttributes* dest){
gtk_text_attributes_copy_values(src, dest);
}
void text_attributes_unref(GtkTextAttributes* values){
gtk_text_attributes_unref(values);
}
GtkTextAttributes* text_attributes_ref(GtkTextAttributes* values){
return gtk_text_attributes_ref(values) ;
}






GtkTextTagTable* text_tag_table_new(){
return gtk_text_tag_table_new() ;
}
gboolean text_tag_table_add(GtkTextTagTable* table, GtkTextTag* tag){
return gtk_text_tag_table_add(table, tag) ;
}
void text_tag_table_remove(GtkTextTagTable* table, GtkTextTag* tag){
gtk_text_tag_table_remove(table, tag);
}
GtkTextTag* text_tag_table_lookup(GtkTextTagTable* table, const gchar* name){
return gtk_text_tag_table_lookup(table, name) ;
}
void text_tag_table_foreach(GtkTextTagTable* table, GtkTextTagTableForeach func, gpointer data){
gtk_text_tag_table_foreach(table,func, data);
}
gint text_tag_table_get_size(GtkTextTagTable* table){
return gtk_text_tag_table_get_size(table) ;
}



GtkWidget* text_view_new(){
return gtk_text_view_new() ;
}
GtkWidget* text_view_new_with_buffer(GtkTextBuffer* buffer){
return gtk_text_view_new_with_buffer(buffer) ;
}
void text_view_set_buffer(GtkTextView* text_view, GtkTextBuffer* buffer){
gtk_text_view_set_buffer(text_view, buffer);
}
GtkTextBuffer* text_view_get_buffer(GtkTextView* text_view){
return gtk_text_view_get_buffer(text_view) ;
}



void text_view_scroll_to_mark(GtkTextView* text_view, GtkTextMark* mark, gdouble within_margin, gboolean use_align, gdouble xalign, gdouble yalign){
gtk_text_view_scroll_to_mark(text_view,mark,within_margin,use_align,xalign, yalign);
}
gboolean text_view_scroll_to_iter(GtkTextView* text_view, GtkTextIter* iter, gdouble within_margin, gboolean use_align, gdouble xalign, gdouble yalign){
return gtk_text_view_scroll_to_iter(text_view,iter,within_margin,use_align,xalign, yalign) ;
}
void text_view_scroll_mark_onscreen(GtkTextView* text_view, GtkTextMark* mark){
gtk_text_view_scroll_mark_onscreen(text_view, mark);
}
gboolean text_view_move_mark_onscreen(GtkTextView* text_view, GtkTextMark* mark){
return gtk_text_view_move_mark_onscreen(text_view, mark) ;
}
gboolean text_view_place_cursor_onscreen(GtkTextView* text_view){
return gtk_text_view_place_cursor_onscreen(text_view) ;
}
void text_view_get_visible_rect(GtkTextView* text_view, GdkRectangle* visible_rect){
gtk_text_view_get_visible_rect(text_view, visible_rect);
}
void text_view_get_iter_location(GtkTextView* text_view, const GtkTextIter* iter, GdkRectangle* location){
gtk_text_view_get_iter_location(text_view,iter, location);
}
void text_view_get_cursor_locations(GtkTextView* text_view, const GtkTextIter* iter, GdkRectangle* strong, GdkRectangle* weak){
gtk_text_view_get_cursor_locations(text_view,iter,strong, weak);
}
void text_view_get_line_at_y(GtkTextView* text_view, GtkTextIter* target_iter, gint y, gint* line_top){
gtk_text_view_get_line_at_y(text_view,target_iter,y, line_top);
}
void text_view_get_line_yrange(GtkTextView* text_view, const GtkTextIter* iter, gint* y, gint* height){
gtk_text_view_get_line_yrange(text_view,iter,y, height);
}
gboolean text_view_get_iter_at_location(GtkTextView* text_view, GtkTextIter* iter, gint x, gint y){
return gtk_text_view_get_iter_at_location(text_view,iter,x, y) ;
}
gboolean text_view_get_iter_at_position(GtkTextView* text_view, GtkTextIter* iter, gint* trailing, gint x, gint y){
return gtk_text_view_get_iter_at_position(text_view,iter,trailing,x, y) ;
}
void text_view_buffer_to_window_coords(GtkTextView* text_view, GtkTextWindowType win, gint buffer_x, gint buffer_y, gint* window_x, gint* window_y){
gtk_text_view_buffer_to_window_coords(text_view,win,buffer_x,buffer_y,window_x, window_y);
}
void text_view_window_to_buffer_coords(GtkTextView* text_view, GtkTextWindowType win, gint window_x, gint window_y, gint* buffer_x, gint* buffer_y){
gtk_text_view_window_to_buffer_coords(text_view,win,window_x,window_y,buffer_x, buffer_y);
}
GdkWindow* text_view_get_window(GtkTextView* text_view, GtkTextWindowType win){
return gtk_text_view_get_window(text_view, win) ;
}
GtkTextWindowType text_view_get_window_type(GtkTextView* text_view, GdkWindow* window){
return gtk_text_view_get_window_type(text_view, window) ;
}
void text_view_set_border_window_size(GtkTextView* text_view, GtkTextWindowType type, gint size){
gtk_text_view_set_border_window_size(text_view,type, size);
}
gint text_view_get_border_window_size(GtkTextView* text_view, GtkTextWindowType type){
return gtk_text_view_get_border_window_size(text_view, type) ;
}
gboolean text_view_forward_display_line(GtkTextView* text_view, GtkTextIter* iter){
return gtk_text_view_forward_display_line(text_view, iter) ;
}
gboolean text_view_backward_display_line(GtkTextView* text_view, GtkTextIter* iter){
return gtk_text_view_backward_display_line(text_view, iter) ;
}
gboolean text_view_forward_display_line_end(GtkTextView* text_view, GtkTextIter* iter){
return gtk_text_view_forward_display_line_end(text_view, iter) ;
}
gboolean text_view_backward_display_line_start(GtkTextView* text_view, GtkTextIter* iter){
return gtk_text_view_backward_display_line_start(text_view, iter) ;
}
gboolean text_view_starts_display_line(GtkTextView* text_view, const GtkTextIter* iter){
return gtk_text_view_starts_display_line(text_view, iter) ;
}
gboolean text_view_move_visually(GtkTextView* text_view, GtkTextIter* iter, gint count){
return gtk_text_view_move_visually(text_view,iter, count) ;
}
void text_view_add_child_at_anchor(GtkTextView* text_view, GtkWidget* child, GtkTextChildAnchor* anchor){
gtk_text_view_add_child_at_anchor(text_view,child, anchor);
}
GtkTextChildAnchor* text_child_anchor_new(){
return gtk_text_child_anchor_new() ;
}
GList* text_child_anchor_get_widgets(GtkTextChildAnchor* anchor){
return gtk_text_child_anchor_get_widgets(anchor) ;
}
gboolean text_child_anchor_get_deleted(GtkTextChildAnchor* anchor){
return gtk_text_child_anchor_get_deleted(anchor) ;
}
void text_view_add_child_in_window(GtkTextView* text_view, GtkWidget* child, GtkTextWindowType which_window, gint xpos, gint ypos){
gtk_text_view_add_child_in_window(text_view,child,which_window,xpos, ypos);
}
void text_view_move_child(GtkTextView* text_view, GtkWidget* child, gint xpos, gint ypos){
gtk_text_view_move_child(text_view,child,xpos, ypos);
}
void text_view_set_wrap_mode(GtkTextView* text_view, GtkWrapMode wrap_mode){
gtk_text_view_set_wrap_mode(text_view, wrap_mode);
}
GtkWrapMode text_view_get_wrap_mode(GtkTextView* text_view){
return gtk_text_view_get_wrap_mode(text_view) ;
}
void text_view_set_editable(GtkTextView* text_view, gboolean setting){
gtk_text_view_set_editable(text_view, setting);
}
gboolean text_view_get_editable(GtkTextView* text_view){
return gtk_text_view_get_editable(text_view) ;
}
void text_view_set_cursor_visible(GtkTextView* text_view, gboolean setting){
gtk_text_view_set_cursor_visible(text_view, setting);
}
gboolean text_view_get_cursor_visible(GtkTextView* text_view){
return gtk_text_view_get_cursor_visible(text_view) ;
}
void text_view_reset_cursor_blink(GtkTextView* text_view){
gtk_text_view_reset_cursor_blink(text_view);
}
void text_view_set_overwrite(GtkTextView* text_view, gboolean overwrite){
gtk_text_view_set_overwrite(text_view, overwrite);
}
gboolean text_view_get_overwrite(GtkTextView* text_view){
return gtk_text_view_get_overwrite(text_view) ;
}
void text_view_set_pixels_above_lines(GtkTextView* text_view, gint pixels_above_lines){
gtk_text_view_set_pixels_above_lines(text_view, pixels_above_lines);
}
gint text_view_get_pixels_above_lines(GtkTextView* text_view){
return gtk_text_view_get_pixels_above_lines(text_view) ;
}
void text_view_set_pixels_below_lines(GtkTextView* text_view, gint pixels_below_lines){
gtk_text_view_set_pixels_below_lines(text_view, pixels_below_lines);
}
gint text_view_get_pixels_below_lines(GtkTextView* text_view){
return gtk_text_view_get_pixels_below_lines(text_view) ;
}
void text_view_set_pixels_inside_wrap(GtkTextView* text_view, gint pixels_inside_wrap){
gtk_text_view_set_pixels_inside_wrap(text_view, pixels_inside_wrap);
}
gint text_view_get_pixels_inside_wrap(GtkTextView* text_view){
return gtk_text_view_get_pixels_inside_wrap(text_view) ;
}
void text_view_set_justification(GtkTextView* text_view, GtkJustification justification){
gtk_text_view_set_justification(text_view, justification);
}
GtkJustification text_view_get_justification(GtkTextView* text_view){
return gtk_text_view_get_justification(text_view) ;
}
void text_view_set_left_margin(GtkTextView* text_view, gint left_margin){
gtk_text_view_set_left_margin(text_view, left_margin);
}
gint text_view_get_left_margin(GtkTextView* text_view){
return gtk_text_view_get_left_margin(text_view) ;
}
void text_view_set_right_margin(GtkTextView* text_view, gint right_margin){
gtk_text_view_set_right_margin(text_view, right_margin);
}
gint text_view_get_right_margin(GtkTextView* text_view){
return gtk_text_view_get_right_margin(text_view) ;
}
void text_view_set_top_margin(GtkTextView* text_view, gint top_margin){
gtk_text_view_set_top_margin(text_view, top_margin);
}
gint text_view_get_top_margin(GtkTextView* text_view){
return gtk_text_view_get_top_margin(text_view) ;
}
void text_view_set_bottom_margin(GtkTextView* text_view, gint bottom_margin){
gtk_text_view_set_bottom_margin(text_view, bottom_margin);
}
gint text_view_get_bottom_margin(GtkTextView* text_view){
return gtk_text_view_get_bottom_margin(text_view) ;
}
void text_view_set_indent(GtkTextView* text_view, gint indent){
gtk_text_view_set_indent(text_view, indent);
}
gint text_view_get_indent(GtkTextView* text_view){
return gtk_text_view_get_indent(text_view) ;
}
void text_view_set_tabs(GtkTextView* text_view, PangoTabArray* tabs){
gtk_text_view_set_tabs(text_view, tabs);
}
PangoTabArray* text_view_get_tabs(GtkTextView* text_view){
return gtk_text_view_get_tabs(text_view) ;
}
void text_view_set_accepts_tab(GtkTextView* text_view, gboolean accepts_tab){
gtk_text_view_set_accepts_tab(text_view, accepts_tab);
}
gboolean text_view_get_accepts_tab(GtkTextView* text_view){
return gtk_text_view_get_accepts_tab(text_view) ;
}
GtkTextAttributes* text_view_get_default_attributes(GtkTextView* text_view){
return gtk_text_view_get_default_attributes(text_view) ;
}
gboolean text_view_im_context_filter_keypress(GtkTextView* text_view, GdkEventKey* event){
return gtk_text_view_im_context_filter_keypress(text_view, event) ;
}
void text_view_reset_im_context(GtkTextView* text_view){
gtk_text_view_reset_im_context(text_view);
}
void text_view_set_input_purpose(GtkTextView* text_view, GtkInputPurpose purpose){
gtk_text_view_set_input_purpose(text_view, purpose);
}
GtkInputPurpose text_view_get_input_purpose(GtkTextView* text_view){
return gtk_text_view_get_input_purpose(text_view) ;
}
void text_view_set_input_hints(GtkTextView* text_view, GtkInputHints hints){
gtk_text_view_set_input_hints(text_view, hints);
}
GtkInputHints text_view_get_input_hints(GtkTextView* text_view){
return gtk_text_view_get_input_hints(text_view) ;
}
void text_view_set_monospace(GtkTextView* text_view, gboolean monospace){
gtk_text_view_set_monospace(text_view, monospace);
}
gboolean text_view_get_monospace(GtkTextView* text_view){
return gtk_text_view_get_monospace(text_view) ;
}








GtkTreePath* tree_path_new(){
return gtk_tree_path_new() ;
}
GtkTreePath* tree_path_new_from_string(const gchar *path){
return gtk_tree_path_new_from_string(path) ;
}
template <typename... ListOf>
GtkTreePath* tree_path_new_from_indices(gint first_index, ListOf... integers){
return (gtk_tree_path_new_from_indices(first_index,integers), ...) ;
}
GtkTreePath* tree_path_new_from_indicesv(gint* indices, gsize length){
return gtk_tree_path_new_from_indicesv(indices, length) ;
}
gchar* tree_path_to_string(GtkTreePath* path){
return gtk_tree_path_to_string(path) ;
}
GtkTreePath* tree_path_new_first(){
return gtk_tree_path_new_first() ;
}
void tree_path_append_index(GtkTreePath* path, gint index_){
gtk_tree_path_append_index(path, index_);
}
void tree_path_prepend_index(GtkTreePath* path, gint index_){
gtk_tree_path_prepend_index(path, index_);
}
gint tree_path_get_depth(GtkTreePath* path){
return gtk_tree_path_get_depth(path) ;
}
gint* tree_path_get_indices(GtkTreePath* path){
return gtk_tree_path_get_indices(path) ;
}
gint* tree_path_get_indices_with_depth(GtkTreePath* path, gint *depth){
return gtk_tree_path_get_indices_with_depth(path, depth) ;
}
void tree_path_free(GtkTreePath* path){
gtk_tree_path_free(path);
}
GtkTreePath* tree_path_copy(const GtkTreePath* path){
return gtk_tree_path_copy(path) ;
}
gint tree_path_compare(const GtkTreePath* a, const GtkTreePath* b){
return gtk_tree_path_compare(a, b) ;
}
void tree_path_next(GtkTreePath* path){
gtk_tree_path_next(path);
}
gboolean tree_path_prev(GtkTreePath* path){
return gtk_tree_path_prev(path) ;
}
gboolean tree_path_up(GtkTreePath* path){
return gtk_tree_path_up(path) ;
}
void tree_path_down(GtkTreePath* path){
gtk_tree_path_down(path);
}
gboolean tree_path_is_ancestor(GtkTreePath* path, GtkTreePath* descendant){
return gtk_tree_path_is_ancestor(path, descendant) ;
}
gboolean tree_path_is_descendant(GtkTreePath* path, GtkTreePath* ancestor){
return gtk_tree_path_is_descendant(path, ancestor) ;
}
GtkTreeRowReference* tree_row_reference_new(GtkTreeModel* model, GtkTreePath* path){
return gtk_tree_row_reference_new(model, path) ;
}
GtkTreeRowReference* tree_row_reference_new_proxy(GObject* proxy, GtkTreeModel* model, GtkTreePath* path){
return gtk_tree_row_reference_new_proxy(proxy,model, path) ;
}
GtkTreeModel* tree_row_reference_get_model(GtkTreeRowReference* reference){
return gtk_tree_row_reference_get_model(reference) ;
}
GtkTreePath* tree_row_reference_get_path(GtkTreeRowReference* reference){
return gtk_tree_row_reference_get_path(reference) ;
}
gboolean tree_row_reference_valid(GtkTreeRowReference* reference){
return gtk_tree_row_reference_valid(reference) ;
}
void tree_row_reference_free(GtkTreeRowReference* reference){
gtk_tree_row_reference_free(reference);
}
GtkTreeRowReference* tree_row_reference_copy(GtkTreeRowReference* reference){
return gtk_tree_row_reference_copy(reference) ;
}
void tree_row_reference_inserted(GObject* proxy, GtkTreePath* path){
gtk_tree_row_reference_inserted(proxy, path);
}
void tree_row_reference_deleted(GObject* proxy, GtkTreePath* path){
gtk_tree_row_reference_deleted(proxy, path);
}
void tree_row_reference_reordered(GObject* proxy, GtkTreePath* path, GtkTreeIter* iter, gint* new_order){
gtk_tree_row_reference_reordered(proxy,path,iter, new_order);
}
GtkTreeIter* tree_iter_copy(GtkTreeIter* iter){
return gtk_tree_iter_copy(iter) ;
}
void tree_iter_free(GtkTreeIter* iter){
gtk_tree_iter_free(iter);
}
GtkTreeModelFlags tree_model_get_flags(GtkTreeModel* tree_model){
return gtk_tree_model_get_flags(tree_model) ;
}
gint tree_model_get_n_columns(GtkTreeModel* tree_model){
return gtk_tree_model_get_n_columns(tree_model) ;
}
GType tree_model_get_column_type(GtkTreeModel* tree_model, gint index_){
return gtk_tree_model_get_column_type(tree_model, index_) ;
}
gboolean tree_model_get_iter(GtkTreeModel* tree_model, GtkTreeIter* iter, GtkTreePath* path){
return gtk_tree_model_get_iter(tree_model,iter, path) ;
}
gboolean tree_model_get_iter_from_string(GtkTreeModel* tree_model, GtkTreeIter* iter, const gchar* path_str){
return gtk_tree_model_get_iter_from_string(tree_model,iter, path_str) ;
}
gboolean tree_model_get_iter_first(GtkTreeModel* tree_model, GtkTreeIter* iter){
return gtk_tree_model_get_iter_first(tree_model, iter) ;
}
GtkTreePath* tree_model_get_path(GtkTreeModel* model, GtkTreeIter* iter){
return gtk_tree_model_get_path(model, iter) ;
}
void tree_model_get_value(GtkTreeModel* tree_model, GtkTreeIter* iter, gint column, GValue* value){
gtk_tree_model_get_value(tree_model,iter,column, value);
}
gboolean tree_model_iter_next(GtkTreeModel* tree_model, GtkTreeIter* iter){
return gtk_tree_model_iter_next(tree_model, iter) ;
}
gboolean tree_model_iter_previous(GtkTreeModel* tree_model, GtkTreeIter* iter){
return gtk_tree_model_iter_previous(tree_model, iter) ;
}
gboolean tree_model_iter_children(GtkTreeModel* tree_model, GtkTreeIter* iter, GtkTreeIter* parent){
return gtk_tree_model_iter_children(tree_model,iter, parent) ;
}
gboolean tree_model_iter_has_child(GtkTreeModel* tree_model, GtkTreeIter* iter){
return gtk_tree_model_iter_has_child(tree_model, iter) ;
}
gint tree_model_iter_n_children(GtkTreeModel* tree_model, GtkTreeIter* iter){
return gtk_tree_model_iter_n_children(tree_model, iter) ;
}
gboolean tree_model_iter_nth_child(GtkTreeModel* tree_model, GtkTreeIter* iter, GtkTreeIter* parent, gint n){
return gtk_tree_model_iter_nth_child(tree_model,iter,parent, n) ;
}
gboolean tree_model_iter_parent(GtkTreeModel* tree_model, GtkTreeIter* iter, GtkTreeIter* child){
return gtk_tree_model_iter_parent(tree_model,iter, child) ;
}
gchar* tree_model_get_string_from_iter(GtkTreeModel* tree_model, GtkTreeIter* iter){
return gtk_tree_model_get_string_from_iter(tree_model, iter) ;
}
void tree_model_ref_node(GtkTreeModel* tree_model, GtkTreeIter* iter){
gtk_tree_model_ref_node(tree_model, iter);
}
void tree_model_unref_node(GtkTreeModel* tree_model, GtkTreeIter* iter){
gtk_tree_model_unref_node(tree_model, iter);
}
template <typename... Pairs>
void tree_model_get(GtkTreeModel* tree_model, GtkTreeIter* iter, Pairs... column){
(gtk_tree_model_get(tree_model,iter,column), ...);
}
void tree_model_get_valist(GtkTreeModel* tree_model, GtkTreeIter* iter, va_list var_args){
gtk_tree_model_get_valist(tree_model,iter, var_args);
}
void tree_model_foreach(GtkTreeModel* model, GtkTreeModelForeachFunc func, gpointer user_data){
gtk_tree_model_foreach(model,func, user_data);
}
void tree_model_row_changed(GtkTreeModel* tree_model, GtkTreePath* path, GtkTreeIter* iter){
gtk_tree_model_row_changed(tree_model,path, iter);
}
void tree_model_row_inserted(GtkTreeModel* tree_model, GtkTreePath* path, GtkTreeIter* iter){
gtk_tree_model_row_inserted(tree_model,path, iter);
}
void tree_model_row_has_child_toggled(GtkTreeModel* tree_model, GtkTreePath* path, GtkTreeIter* iter){
gtk_tree_model_row_has_child_toggled(tree_model,path, iter);
}
void tree_model_row_deleted(GtkTreeModel* tree_model, GtkTreePath* path){
gtk_tree_model_row_deleted(tree_model, path);
}
void tree_model_rows_reordered(GtkTreeModel* tree_model, GtkTreePath* path, GtkTreeIter* iter, gint* new_order){
gtk_tree_model_rows_reordered(tree_model,path,iter, new_order);
}
void tree_model_rows_reordered_with_length(GtkTreeModel* tree_model, GtkTreePath* path, GtkTreeIter* iter, gint* new_order, gint length){
gtk_tree_model_rows_reordered_with_length(tree_model,path,iter,new_order, length);
}














void tree_selection_set_mode(GtkTreeSelection* selection, GtkSelectionMode type){
gtk_tree_selection_set_mode(selection, type);
}
GtkSelectionMode tree_selection_get_mode(GtkTreeSelection* selection){
return gtk_tree_selection_get_mode(selection) ;
}
void tree_selection_set_select_function(GtkTreeSelection* selection, GtkTreeSelectionFunc func, gpointer data, GDestroyNotify destroy){
gtk_tree_selection_set_select_function(selection,func,data, destroy);
}
GtkTreeSelectionFunc tree_selection_get_select_function(GtkTreeSelection* selection){
return gtk_tree_selection_get_select_function(selection) ;
}
gpointer tree_selection_get_user_data(GtkTreeSelection* selection){
return gtk_tree_selection_get_user_data(selection) ;
}
GtkTreeView* tree_selection_get_tree_view(GtkTreeSelection* selection){
return gtk_tree_selection_get_tree_view(selection) ;
}
gboolean tree_selection_get_selected(GtkTreeSelection* selection, GtkTreeModel** model, GtkTreeIter* iter){
return gtk_tree_selection_get_selected(selection,model, iter) ;
}
void tree_selection_selected_foreach(GtkTreeSelection* selection, GtkTreeSelectionForeachFunc func, gpointer data){
gtk_tree_selection_selected_foreach(selection,func, data);
}
GList* tree_selection_get_selected_rows(GtkTreeSelection* selection, GtkTreeModel** model){
return gtk_tree_selection_get_selected_rows(selection, model) ;
}
gint tree_selection_count_selected_rows(GtkTreeSelection* selection){
return gtk_tree_selection_count_selected_rows(selection) ;
}
void tree_selection_select_path(GtkTreeSelection* selection, GtkTreePath* path){
gtk_tree_selection_select_path(selection, path);
}
void tree_selection_unselect_path(GtkTreeSelection* selection, GtkTreePath* path){
gtk_tree_selection_unselect_path(selection, path);
}
gboolean tree_selection_path_is_selected(GtkTreeSelection* selection, GtkTreePath* path){
return gtk_tree_selection_path_is_selected(selection, path) ;
}
void tree_selection_select_iter(GtkTreeSelection* selection, GtkTreeIter* iter){
gtk_tree_selection_select_iter(selection, iter);
}
void tree_selection_unselect_iter(GtkTreeSelection* selection, GtkTreeIter* iter){
gtk_tree_selection_unselect_iter(selection, iter);
}
gboolean tree_selection_iter_is_selected(GtkTreeSelection* selection, GtkTreeIter* iter){
return gtk_tree_selection_iter_is_selected(selection, iter) ;
}
void tree_selection_select_all(GtkTreeSelection* selection){
gtk_tree_selection_select_all(selection);
}
void tree_selection_unselect_all(GtkTreeSelection* selection){
gtk_tree_selection_unselect_all(selection);
}
void tree_selection_select_range(GtkTreeSelection* selection, GtkTreePath* start_path, GtkTreePath* end_path){
return gtk_tree_selection_select_range(selection,start_path, end_path) ;
}
void tree_selection_unselect_range(GtkTreeSelection* selection, GtkTreePath* start_path, GtkTreePath* end_path){
gtk_tree_selection_unselect_range(selection,start_path, end_path);
}









GtkTreeViewColumn* tree_view_column_new(){
return gtk_tree_view_column_new() ;
}
GtkTreeViewColumn* tree_view_column_new_with_area(GtkCellArea* area){
return gtk_tree_view_column_new_with_area(area) ;
}
template <typename... Attrs>
GtkTreeViewColumn* tree_view_column_new_with_attributes(const gchar* title, GtkCellRenderer* cell, Attrs... list){
return (gtk_tree_view_column_new_with_attributes(title,cell,list), ...) ;
}
void tree_view_column_pack_start(GtkTreeViewColumn* tree_column, GtkCellRenderer* cell, gboolean expand){
gtk_tree_view_column_pack_start(tree_column,cell, expand);
}
void tree_view_column_pack_end(GtkTreeViewColumn* tree_column, GtkCellRenderer* cell, gboolean expand){
gtk_tree_view_column_pack_end(tree_column,cell, expand);
}
void tree_view_column_clear(GtkTreeViewColumn* tree_column){
gtk_tree_view_column_clear(tree_column);
}
void tree_view_column_add_attribute(GtkTreeViewColumn* tree_column, GtkCellRenderer* cell_renderer, const gchar* attribute, gint column){
gtk_tree_view_column_add_attribute(tree_column,cell_renderer,attribute, column);
}
template <typename... Attrs>
void tree_view_column_set_attributes(GtkTreeViewColumn* tree_column, GtkCellRenderer* cell_renderer, Attrs... list){
(gtk_tree_view_column_set_attributes(tree_column,cell_renderer,list), ...);
}
void tree_view_column_set_cell_data_func(GtkTreeViewColumn* tree_column, GtkCellRenderer* cell_renderer, GtkTreeCellDataFunc func, gpointer func_data, GDestroyNotify destroy){
gtk_tree_view_column_set_cell_data_func(tree_column,cell_renderer,func,func_data, destroy);
}
void tree_view_column_clear_attributes(GtkTreeViewColumn* tree_column, GtkCellRenderer* cell_renderer){
gtk_tree_view_column_clear_attributes(tree_column, cell_renderer);
}
void tree_view_column_set_spacing(GtkTreeViewColumn* tree_column, gint spacing){
gtk_tree_view_column_set_spacing(tree_column, spacing);
}
gint tree_view_column_get_spacing(GtkTreeViewColumn* tree_column){
return gtk_tree_view_column_get_spacing(tree_column) ;
}
void tree_view_column_set_visible(GtkTreeViewColumn* tree_column, gboolean visible){
gtk_tree_view_column_set_visible(tree_column, visible);
}
gboolean tree_view_column_get_visible(GtkTreeViewColumn* tree_column){
return gtk_tree_view_column_get_visible(tree_column) ;
}
void tree_view_column_set_resizable(GtkTreeViewColumn* tree_column, gboolean resizable){
gtk_tree_view_column_set_resizable(tree_column, resizable);
}
gboolean tree_view_column_get_resizable(GtkTreeViewColumn* tree_column){
return gtk_tree_view_column_get_resizable(tree_column) ;
}
void tree_view_column_set_sizing(GtkTreeViewColumn* tree_column, GtkTreeViewColumnSizing type){
gtk_tree_view_column_set_sizing(tree_column, type);
}
GtkTreeViewColumnSizing tree_view_column_get_sizing(GtkTreeViewColumn* tree_column){
return gtk_tree_view_column_get_sizing(tree_column) ;
}
gint tree_view_column_get_width(GtkTreeViewColumn* tree_column){
return gtk_tree_view_column_get_width(tree_column) ;
}
gint tree_view_column_get_fixed_width(GtkTreeViewColumn* tree_column){
return gtk_tree_view_column_get_fixed_width(tree_column) ;
}
void tree_view_column_set_fixed_width(GtkTreeViewColumn* tree_column, gint fixed_width){
gtk_tree_view_column_set_fixed_width(tree_column, fixed_width);
}
void tree_view_column_set_min_width(GtkTreeViewColumn* tree_column, gint min_width){
gtk_tree_view_column_set_min_width(tree_column, min_width);
}
gint tree_view_column_get_min_width(GtkTreeViewColumn* tree_column){
return gtk_tree_view_column_get_min_width(tree_column) ;
}
void tree_view_column_set_max_width(GtkTreeViewColumn* tree_column, gint max_width){
gtk_tree_view_column_set_max_width(tree_column, max_width);
}
gint tree_view_column_get_max_width(GtkTreeViewColumn* tree_column){
return gtk_tree_view_column_get_max_width(tree_column) ;
}
void tree_view_column_clicked(GtkTreeViewColumn* tree_column){
gtk_tree_view_column_clicked(tree_column);
}
void tree_view_column_set_title(GtkTreeViewColumn* tree_column, const gchar* title){
gtk_tree_view_column_set_title(tree_column, title);
}
const gchar* tree_view_column_get_title(GtkTreeViewColumn* tree_column) {
return gtk_tree_view_column_get_title(tree_column) ;
}
void tree_view_column_set_expand(GtkTreeViewColumn* tree_column, gboolean expand){
gtk_tree_view_column_set_expand(tree_column, expand);
}
gboolean tree_view_column_get_expand(GtkTreeViewColumn* tree_column){
return gtk_tree_view_column_get_expand(tree_column) ;
}
void tree_view_column_set_clickable(GtkTreeViewColumn* tree_column, gboolean clickable){
gtk_tree_view_column_set_clickable(tree_column, clickable);
}
gboolean tree_view_column_get_clickable(GtkTreeViewColumn* tree_column){
return gtk_tree_view_column_get_clickable(tree_column) ;
}
void tree_view_column_set_widget(GtkTreeViewColumn* tree_column, GtkWidget* widget){
gtk_tree_view_column_set_widget(tree_column, widget);
}
GtkWidget* tree_view_column_get_widget(GtkTreeViewColumn* tree_column){
return gtk_tree_view_column_get_widget(tree_column) ;
}
GtkWidget* tree_view_column_get_button(GtkTreeViewColumn* tree_column){
return gtk_tree_view_column_get_button(tree_column) ;
}
void tree_view_column_set_alignment(GtkTreeViewColumn* tree_column, gfloat xalign){
gtk_tree_view_column_set_alignment(tree_column, xalign);
}
gfloat tree_view_column_get_alignment(GtkTreeViewColumn* tree_column){
return gtk_tree_view_column_get_alignment(tree_column) ;
}
void tree_view_column_set_reorderable(GtkTreeViewColumn* tree_column, gboolean reorderable){
gtk_tree_view_column_set_reorderable(tree_column, reorderable);
}
gboolean tree_view_column_get_reorderable(GtkTreeViewColumn* tree_column){
return gtk_tree_view_column_get_reorderable(tree_column) ;
}
void tree_view_column_set_sort_column_id(GtkTreeViewColumn* tree_column, gint sort_column_id){
gtk_tree_view_column_set_sort_column_id(tree_column, sort_column_id);
}
gint tree_view_column_get_sort_column_id(GtkTreeViewColumn* tree_column){
return gtk_tree_view_column_get_sort_column_id(tree_column) ;
}
void tree_view_column_set_sort_indicator(GtkTreeViewColumn* tree_column, gboolean setting){
gtk_tree_view_column_set_sort_indicator(tree_column, setting);
}
gboolean tree_view_column_get_sort_indicator(GtkTreeViewColumn* tree_column){
return gtk_tree_view_column_get_sort_indicator(tree_column) ;
}
void tree_view_column_set_sort_order(GtkTreeViewColumn* tree_column, GtkSortType order){
gtk_tree_view_column_set_sort_order(tree_column, order);
}
GtkSortType tree_view_column_get_sort_order(GtkTreeViewColumn* tree_column){
return gtk_tree_view_column_get_sort_order(tree_column) ;
}
void tree_view_column_cell_set_cell_data(GtkTreeViewColumn* tree_column, GtkTreeModel* tree_model, GtkTreeIter* iter, gboolean is_expander, gboolean is_expanded){
gtk_tree_view_column_cell_set_cell_data(tree_column,tree_model,iter,is_expander, is_expanded);
}
void tree_view_column_cell_get_size(GtkTreeViewColumn* tree_column, const GdkRectangle* cell_area, gint* x_offset, gint* y_offset, gint* width, gint* height){
gtk_tree_view_column_cell_get_size(tree_column,cell_area,x_offset,y_offset,width, height);
}
gboolean tree_view_column_cell_get_position(GtkTreeViewColumn* tree_column, GtkCellRenderer* cell_renderer, gint* x_offset, gint* width){
return gtk_tree_view_column_cell_get_position(tree_column,cell_renderer,x_offset, width) ;
}
gboolean tree_view_column_cell_is_visible(GtkTreeViewColumn* tree_column){
return gtk_tree_view_column_cell_is_visible(tree_column) ;
}
void tree_view_column_focus_cell(GtkTreeViewColumn* tree_column, GtkCellRenderer* cell){
gtk_tree_view_column_focus_cell(tree_column, cell);
}
void tree_view_column_queue_resize(GtkTreeViewColumn* tree_column){
gtk_tree_view_column_queue_resize(tree_column);
}
GtkWidget* tree_view_column_get_tree_view(GtkTreeViewColumn* tree_column){
return gtk_tree_view_column_get_tree_view(tree_column) ;
}
gint tree_view_column_get_x_offset(GtkTreeViewColumn* tree_column){
return gtk_tree_view_column_get_x_offset(tree_column) ;
}

















GtkWidget* tree_view_new(){
return gtk_tree_view_new() ;
}
gint tree_view_get_level_indentation(GtkTreeView* tree_view){
return gtk_tree_view_get_level_indentation(tree_view) ;
}
gboolean tree_view_get_show_expanders(GtkTreeView* tree_view){
return gtk_tree_view_get_show_expanders(tree_view) ;
}
void tree_view_set_level_indentation(GtkTreeView* tree_view, gint indentation){
gtk_tree_view_set_level_indentation(tree_view, indentation);
}
void tree_view_set_show_expanders(GtkTreeView* tree_view, gboolean enabled){
gtk_tree_view_set_show_expanders(tree_view, enabled);
}
GtkWidget* tree_view_new_with_model(GtkTreeModel* model){
return gtk_tree_view_new_with_model(model) ;
}
GtkTreeModel* tree_view_get_model(GtkTreeView* tree_view){
return gtk_tree_view_get_model(tree_view) ;
}
void tree_view_set_model(GtkTreeView* tree_view, GtkTreeModel* model){
gtk_tree_view_set_model(tree_view, model);
}
GtkTreeSelection* tree_view_get_selection(GtkTreeView* tree_view){
return gtk_tree_view_get_selection(tree_view) ;
}






gboolean tree_view_get_headers_visible(GtkTreeView* tree_view){
return gtk_tree_view_get_headers_visible(tree_view) ;
}
void tree_view_set_headers_visible(GtkTreeView* tree_view, gboolean headers_visible){
gtk_tree_view_set_headers_visible(tree_view, headers_visible);
}
void tree_view_columns_autosize(GtkTreeView* tree_view){
gtk_tree_view_columns_autosize(tree_view);
}
gboolean tree_view_get_headers_clickable(GtkTreeView* tree_view){
return gtk_tree_view_get_headers_clickable(tree_view) ;
}
void tree_view_set_headers_clickable(GtkTreeView* tree_view, gboolean setting){
gtk_tree_view_set_headers_clickable(tree_view, setting);
}



void tree_view_set_activate_on_single_click(GtkTreeView* tree_view, gboolean single){
gtk_tree_view_set_activate_on_single_click(tree_view, single);
}
gboolean tree_view_get_activate_on_single_click(GtkTreeView* tree_view){
return gtk_tree_view_get_activate_on_single_click(tree_view) ;
}
gint tree_view_append_column(GtkTreeView* tree_view, GtkTreeViewColumn* column){
return gtk_tree_view_append_column(tree_view, column) ;
}
gint tree_view_remove_column(GtkTreeView* tree_view, GtkTreeViewColumn* column){
return gtk_tree_view_remove_column(tree_view, column) ;
}
gint tree_view_insert_column(GtkTreeView* tree_view, GtkTreeViewColumn* column, gint position){
return gtk_tree_view_insert_column(tree_view,column, position) ;
}
template <typename... Attrs>
gint tree_view_insert_column_with_attributes(GtkTreeView* tree_view, gint position, const gchar* title, GtkCellRenderer* cell, Attrs... list){
return (gtk_tree_view_insert_column_with_attributes(tree_view,position,title,cell,list), ...) ;
}
gint tree_view_insert_column_with_data_func(GtkTreeView* tree_view, gint position, const gchar* title, GtkCellRenderer* cell, GtkTreeCellDataFunc func, gpointer data, GDestroyNotify dnotify){
return gtk_tree_view_insert_column_with_data_func(tree_view,position,title,cell,func,data, dnotify) ;
}
guint tree_view_get_n_columns(GtkTreeView* tree_view){
return gtk_tree_view_get_n_columns(tree_view) ;
}
GtkTreeViewColumn* tree_view_get_column(GtkTreeView* tree_view, gint n){
return gtk_tree_view_get_column(tree_view, n) ;
}
GList* tree_view_get_columns(GtkTreeView* tree_view){
return gtk_tree_view_get_columns(tree_view) ;
}
void tree_view_move_column_after(GtkTreeView* tree_view, GtkTreeViewColumn* column, GtkTreeViewColumn* base_column){
gtk_tree_view_move_column_after(tree_view,column, base_column);
}
void tree_view_set_expander_column(GtkTreeView* tree_view, GtkTreeViewColumn* column){
gtk_tree_view_set_expander_column(tree_view, column);
}
GtkTreeViewColumn* tree_view_get_expander_column(GtkTreeView* tree_view){
return gtk_tree_view_get_expander_column(tree_view) ;
}
void tree_view_set_column_drag_function(GtkTreeView* tree_view, GtkTreeViewColumnDropFunc func, gpointer user_data, GDestroyNotify destroy){
gtk_tree_view_set_column_drag_function(tree_view,func,user_data, destroy);
}
void tree_view_scroll_to_point(GtkTreeView* tree_view, gint tree_x, gint tree_y){
gtk_tree_view_scroll_to_point(tree_view,tree_x, tree_y);
}
void tree_view_scroll_to_cell(GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* column, gboolean use_align, gfloat row_align, gfloat col_align){
gtk_tree_view_scroll_to_cell(tree_view,path,column,use_align,row_align, col_align);
}
void tree_view_set_cursor(GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* focus_column, gboolean start_editing){
gtk_tree_view_set_cursor(tree_view,path,focus_column, start_editing);
}
void tree_view_set_cursor_on_cell(GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* focus_column, GtkCellRenderer* focus_cell, gboolean start_editing){
gtk_tree_view_set_cursor_on_cell(tree_view,path,focus_column,focus_cell, start_editing);
}
void tree_view_get_cursor(GtkTreeView* tree_view, GtkTreePath** path, GtkTreeViewColumn** focus_column){
gtk_tree_view_get_cursor(tree_view,path, focus_column);
}
void tree_view_row_activated(GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* column){
gtk_tree_view_row_activated(tree_view,path, column);
}
void tree_view_expand_all(GtkTreeView* tree_view){
gtk_tree_view_expand_all(tree_view);
}
void tree_view_collapse_all(GtkTreeView* tree_view){
gtk_tree_view_collapse_all(tree_view);
}
void tree_view_expand_to_path(GtkTreeView* tree_view, GtkTreePath* path){
gtk_tree_view_expand_to_path(tree_view, path);
}
gboolean tree_view_expand_row(GtkTreeView* tree_view, GtkTreePath* path, gboolean open_all){
gtk_tree_view_expand_row(tree_view,path, open_all);
}
gboolean tree_view_collapse_row(GtkTreeView* tree_view, GtkTreePath* path){
return gtk_tree_view_collapse_row(tree_view, path) ;
}
void tree_view_map_expanded_rows(GtkTreeView* tree_view, GtkTreeViewMappingFunc func, gpointer data){
gtk_tree_view_map_expanded_rows(tree_view,func, data);
}
gboolean tree_view_row_expanded(GtkTreeView* tree_view, GtkTreePath* path){
return gtk_tree_view_row_expanded(tree_view, path) ;
}
void tree_view_set_reorderable(GtkTreeView* tree_view, gboolean reorderable){
gtk_tree_view_set_reorderable(tree_view, reorderable);
}
gboolean tree_view_get_reorderable(GtkTreeView* tree_view){
return gtk_tree_view_get_reorderable(tree_view) ;
}
gboolean tree_view_get_path_at_pos(GtkTreeView* tree_view, gint x, gint y, GtkTreePath** path, GtkTreeViewColumn** column, gint* cell_x, gint* cell_y){
return gtk_tree_view_get_path_at_pos(tree_view,x,y,path,column,cell_x, cell_y) ;
}
gboolean tree_view_is_blank_at_pos(GtkTreeView* tree_view, gint x, gint y, GtkTreePath** path, GtkTreeViewColumn** column, gint* cell_x, gint* cell_y){
return gtk_tree_view_is_blank_at_pos(tree_view,x,y,path,column,cell_x, cell_y) ;
}
void tree_view_get_cell_area(GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* column, GdkRectangle* rect){
gtk_tree_view_get_cell_area(tree_view,path,column, rect);
}
void tree_view_get_background_area(GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* column, GdkRectangle* rect){
gtk_tree_view_get_background_area(tree_view,path,column, rect);
}
void tree_view_get_visible_rect(GtkTreeView* tree_view, GdkRectangle* visible_rect){
gtk_tree_view_get_visible_rect(tree_view, visible_rect);
}
gboolean tree_view_get_visible_range(GtkTreeView* tree_view, GtkTreePath** start_path, GtkTreePath** end_path){
return gtk_tree_view_get_visible_range(tree_view,start_path, end_path) ;
}
GdkWindow* tree_view_get_bin_window(GtkTreeView* tree_view){
gtk_tree_view_get_bin_window(tree_view);
}
void tree_view_convert_bin_window_to_tree_coords(GtkTreeView* tree_view, gint bx, gint by, gint* tx, gint* ty){
gtk_tree_view_convert_bin_window_to_tree_coords(tree_view,bx,by,tx, ty);
}
void tree_view_convert_bin_window_to_widget_coords(GtkTreeView* tree_view, gint bx, gint by, gint* wx, gint* wy){
gtk_tree_view_convert_bin_window_to_widget_coords(tree_view,bx,by,wx, wy);
}
void tree_view_convert_tree_to_bin_window_coords(GtkTreeView* tree_view, gint tx, gint ty, gint* bx, gint* by){
gtk_tree_view_convert_tree_to_bin_window_coords(tree_view,tx,ty,bx, by);
}
void tree_view_convert_tree_to_widget_coords(GtkTreeView* tree_view, gint tx, gint ty, gint* wx, gint* wy){
gtk_tree_view_convert_tree_to_widget_coords(tree_view,tx,ty,wx, wy);
}
void tree_view_convert_widget_to_bin_window_coords(GtkTreeView* tree_view, gint wx, gint wy, gint* bx, gint* by){
gtk_tree_view_convert_widget_to_bin_window_coords(tree_view,wx,wy,bx, by);
}
void tree_view_convert_widget_to_tree_coords(GtkTreeView* tree_view, gint wx, gint wy, gint* tx, gint* ty){
gtk_tree_view_convert_widget_to_tree_coords(tree_view,wx,wy,tx, ty);
}
void tree_view_enable_model_drag_dest(GtkTreeView* tree_view, const GtkTargetEntry* targets, gint n_targets, GdkDragAction actions){
gtk_tree_view_enable_model_drag_dest(tree_view,targets,n_targets, actions);
}
void tree_view_enable_model_drag_source(GtkTreeView* tree_view, GdkModifierType start_button_mask, const GtkTargetEntry* targets, gint n_targets, GdkDragAction actions){
gtk_tree_view_enable_model_drag_source(tree_view,start_button_mask,targets,n_targets,actions);
}
void tree_view_unset_rows_drag_source(GtkTreeView* tree_view){
gtk_tree_view_unset_rows_drag_source(tree_view);
}
void tree_view_unset_rows_drag_dest(GtkTreeView* tree_view){
gtk_tree_view_unset_rows_drag_dest(tree_view);
}
void tree_view_set_drag_dest_row(GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewDropPosition pos){
gtk_tree_view_set_drag_dest_row(tree_view,path, pos);
}
void tree_view_get_drag_dest_row(GtkTreeView* tree_view, GtkTreePath** path, GtkTreeViewDropPosition* pos){
gtk_tree_view_get_drag_dest_row(tree_view,path, pos);
}
gboolean tree_view_get_dest_row_at_pos(GtkTreeView* tree_view, gint drag_x, gint drag_y, GtkTreePath** path, GtkTreeViewDropPosition* pos){
return gtk_tree_view_get_dest_row_at_pos(tree_view,drag_x,drag_y,path, pos) ;
}
cairo_surface_t* tree_view_create_row_drag_icon(GtkTreeView* tree_view, GtkTreePath* path){
return gtk_tree_view_create_row_drag_icon(tree_view, path) ;
}
void tree_view_set_enable_search(GtkTreeView* tree_view, gboolean enable_search){
gtk_tree_view_set_enable_search(tree_view, enable_search);
}
gboolean tree_view_get_enable_search(GtkTreeView* tree_view){
return gtk_tree_view_get_enable_search(tree_view) ;
}
gint tree_view_get_search_column(GtkTreeView* tree_view){
return gtk_tree_view_get_search_column(tree_view) ;
}
void tree_view_set_search_column(GtkTreeView* tree_view, gint column){
gtk_tree_view_set_search_column(tree_view, column);
}
GtkTreeViewSearchEqualFunc tree_view_get_search_equal_func(GtkTreeView* tree_view){
return gtk_tree_view_get_search_equal_func(tree_view) ;
}
void tree_view_set_search_equal_func(GtkTreeView* tree_view, GtkTreeViewSearchEqualFunc search_equal_func, gpointer search_user_data, GDestroyNotify search_destroy){
gtk_tree_view_set_search_equal_func(tree_view,search_equal_func,search_user_data, search_destroy);
}
GtkEntry* tree_view_get_search_entry(GtkTreeView* tree_view){
return gtk_tree_view_get_search_entry(tree_view) ;
}
void tree_view_set_search_entry(GtkTreeView* tree_view, GtkEntry* entry){
gtk_tree_view_set_search_entry(tree_view, entry);
}




GtkTreeViewSearchPositionFunc tree_view_get_search_position_func(GtkTreeView* tree_view){
return gtk_tree_view_get_search_position_func(tree_view) ;
}
void tree_view_set_search_position_func(GtkTreeView* tree_view, GtkTreeViewSearchPositionFunc func, gpointer data, GDestroyNotify destroy){
gtk_tree_view_set_search_position_func(tree_view,func,data, destroy);
}
gboolean tree_view_get_fixed_height_mode(GtkTreeView* tree_view){
return gtk_tree_view_get_fixed_height_mode(tree_view) ;
}
void tree_view_set_fixed_height_mode(GtkTreeView* tree_view, gboolean enable){
gtk_tree_view_set_fixed_height_mode(tree_view, enable);
}
gboolean tree_view_get_hover_selection(GtkTreeView* tree_view){
return gtk_tree_view_get_hover_selection(tree_view) ;
}
void tree_view_set_hover_selection(GtkTreeView* tree_view, gboolean hover){
gtk_tree_view_set_hover_selection(tree_view, hover);
}
gboolean tree_view_get_hover_expand(GtkTreeView* tree_view){
return gtk_tree_view_get_hover_expand(tree_view) ;
}
void tree_view_set_hover_expand(GtkTreeView* tree_view, gboolean expand){
gtk_tree_view_set_hover_expand(tree_view, expand);
}













GtkTreeViewRowSeparatorFunc tree_view_get_row_separator_func(GtkTreeView* tree_view){
return gtk_tree_view_get_row_separator_func(tree_view) ;
}
void tree_view_set_row_separator_func(GtkTreeView* tree_view, GtkTreeViewRowSeparatorFunc func, gpointer data, GDestroyNotify destroy){
gtk_tree_view_set_row_separator_func(tree_view,func,data, destroy);
}
gboolean tree_view_get_rubber_banding(GtkTreeView* tree_view){
return gtk_tree_view_get_rubber_banding(tree_view) ;
}
void tree_view_set_rubber_banding(GtkTreeView* tree_view, gboolean enable){
gtk_tree_view_set_rubber_banding(tree_view, enable);
}
gboolean tree_view_is_rubber_banding_active(GtkTreeView* tree_view){
return gtk_tree_view_is_rubber_banding_active(tree_view) ;
}
gboolean tree_view_get_enable_tree_lines(GtkTreeView* tree_view){
return gtk_tree_view_get_enable_tree_lines(tree_view) ;
}
void tree_view_set_enable_tree_lines(GtkTreeView* tree_view, gboolean enabled){
gtk_tree_view_set_enable_tree_lines(tree_view, enabled);
}
GtkTreeViewGridLines tree_view_get_grid_lines(GtkTreeView* tree_view){
return gtk_tree_view_get_grid_lines(tree_view) ;
}
void tree_view_set_grid_lines(GtkTreeView* tree_view, GtkTreeViewGridLines grid_lines){
gtk_tree_view_set_grid_lines(tree_view, grid_lines);
}
void tree_view_set_tooltip_row(GtkTreeView* tree_view, GtkTooltip* tooltip, GtkTreePath* path){
gtk_tree_view_set_tooltip_row(tree_view,tooltip, path);
}
void tree_view_set_tooltip_cell(GtkTreeView* tree_view, GtkTooltip* tooltip, GtkTreePath* path, GtkTreeViewColumn* column, GtkCellRenderer* cell){
gtk_tree_view_set_tooltip_cell(tree_view,tooltip,path,column, cell);
}
gboolean tree_view_get_tooltip_context(GtkTreeView* tree_view, gint* x, gint* y, gboolean keyboard_tip, GtkTreeModel** model, GtkTreePath** path, GtkTreeIter* iter){
return gtk_tree_view_get_tooltip_context(tree_view,x,y,keyboard_tip,model,path, iter) ;
}
gint tree_view_get_tooltip_column(GtkTreeView* tree_view){
return gtk_tree_view_get_tooltip_column(tree_view) ;
}
void tree_view_set_tooltip_column(GtkTreeView* tree_view, gint column){
gtk_tree_view_set_tooltip_column(tree_view, column);
}



gboolean tree_drag_source_drag_data_delete(GtkTreeDragSource* drag_source, GtkTreePath* path){
return gtk_tree_drag_source_drag_data_delete(drag_source, path) ;
}
gboolean tree_drag_source_drag_data_get(GtkTreeDragSource* drag_source, GtkTreePath* path, GtkSelectionData* selection_data){
return gtk_tree_drag_source_drag_data_get(drag_source,path, selection_data) ;
}
gboolean tree_drag_source_row_draggable(GtkTreeDragSource* drag_source, GtkTreePath* path){
return gtk_tree_drag_source_row_draggable(drag_source, path) ;
}
gboolean tree_drag_dest_drag_data_received(GtkTreeDragDest* drag_dest, GtkTreePath* dest, GtkSelectionData* selection_data){
return gtk_tree_drag_dest_drag_data_received(drag_dest,dest, selection_data) ;
}
gboolean tree_drag_dest_row_drop_possible(GtkTreeDragDest* drag_dest, GtkTreePath* dest_path, GtkSelectionData* selection_data){
return gtk_tree_drag_dest_row_drop_possible(drag_dest,dest_path, selection_data) ;
}
gboolean tree_set_row_drag_data(GtkSelectionData* selection_data, GtkTreeModel* tree_model, GtkTreePath* path){
return gtk_tree_set_row_drag_data(selection_data,tree_model, path) ;
}
gboolean tree_get_row_drag_data(GtkSelectionData* selection_data, GtkTreeModel** tree_model, GtkTreePath** path){
return gtk_tree_get_row_drag_data(selection_data,tree_model, path) ;
}



GtkWidget* cell_view_new(){
return gtk_cell_view_new() ;
}
GtkWidget* cell_view_new_with_context(GtkCellArea* area, GtkCellAreaContext* context){
return gtk_cell_view_new_with_context(area, context) ;
}
GtkWidget* cell_view_new_with_text(const gchar* text){
return gtk_cell_view_new_with_text(text) ;
}
GtkWidget* cell_view_new_with_markup(const gchar* markup){
return gtk_cell_view_new_with_markup(markup) ;
}
GtkWidget* cell_view_new_with_pixbuf(GdkPixbuf* pixbuf){
return gtk_cell_view_new_with_pixbuf(pixbuf) ;
}
void cell_view_set_model(GtkCellView* cell_view, GtkTreeModel* model){
gtk_cell_view_set_model(cell_view, model);
}
GtkTreeModel* cell_view_get_model(GtkCellView* cell_view){
return gtk_cell_view_get_model(cell_view) ;
}
void cell_view_set_displayed_row(GtkCellView* cell_view, GtkTreePath* path){
gtk_cell_view_set_displayed_row(cell_view, path);
}
GtkTreePath* cell_view_get_displayed_row(GtkCellView* cell_view){
return gtk_cell_view_get_displayed_row(cell_view) ;
}





void cell_view_set_background_rgba(GtkCellView* cell_view, const GdkRGBA* rgba){
gtk_cell_view_set_background_rgba(cell_view, rgba);
}
void cell_view_set_draw_sensitive(GtkCellView* cell_view, gboolean draw_sensitive){
gtk_cell_view_set_draw_sensitive(cell_view, draw_sensitive);
}
gboolean cell_view_get_draw_sensitive(GtkCellView* cell_view){
return gtk_cell_view_get_draw_sensitive(cell_view) ;
}
void cell_view_set_fit_model(GtkCellView* cell_view, gboolean fit_model){
gtk_cell_view_set_fit_model(cell_view, fit_model);
}
gboolean cell_view_get_fit_model(GtkCellView* cell_view){
return gtk_cell_view_get_fit_model(cell_view) ;
}







GtkWidget* icon_view_new(){
return gtk_icon_view_new() ;
}
GtkWidget* icon_view_new_with_area(GtkCellArea* area){
return gtk_icon_view_new_with_area(area) ;
}
GtkWidget* icon_view_new_with_model(GtkTreeModel* model){
return gtk_icon_view_new_with_model(model) ;
}
void icon_view_set_model(GtkIconView* icon_view, GtkTreeModel* model){
gtk_icon_view_set_model(icon_view, model);
}
GtkTreeModel* icon_view_get_model(GtkIconView* icon_view){
return gtk_icon_view_get_model(icon_view) ;
}
void icon_view_set_text_column(GtkIconView* icon_view, gint column){
gtk_icon_view_set_text_column(icon_view, column);
}
gint icon_view_get_text_column(GtkIconView* icon_view){
return gtk_icon_view_get_text_column(icon_view) ;
}
void icon_view_set_markup_column(GtkIconView* icon_view, gint column){
gtk_icon_view_set_markup_column(icon_view, column);
}
gint icon_view_get_markup_column(GtkIconView* icon_view){
return gtk_icon_view_get_markup_column(icon_view) ;
}
void icon_view_set_pixbuf_column(GtkIconView* icon_view, gint column){
gtk_icon_view_set_pixbuf_column(icon_view, column);
}
gint icon_view_get_pixbuf_column(GtkIconView* icon_view){
return gtk_icon_view_get_pixbuf_column(icon_view) ;
}
GtkTreePath* icon_view_get_path_at_pos(GtkIconView* icon_view, gint x, gint y){
return gtk_icon_view_get_path_at_pos(icon_view,x, y) ;
}
gboolean icon_view_get_item_at_pos(GtkIconView* icon_view, gint x, gint y, GtkTreePath** path, GtkCellRenderer** cell){
return gtk_icon_view_get_item_at_pos(icon_view,x,y,path, cell) ;
}
void icon_view_convert_widget_to_bin_window_coords(GtkIconView* icon_view, gint wx, gint wy, gint* bx, gint* by){
gtk_icon_view_convert_widget_to_bin_window_coords(icon_view,wx,wy,bx, by);
}
void icon_view_set_cursor(GtkIconView* icon_view, GtkTreePath* path, GtkCellRenderer* cell, gboolean start_editing){
gtk_icon_view_set_cursor(icon_view,path,cell, start_editing);
}
gboolean icon_view_get_cursor(GtkIconView* icon_view, GtkTreePath** path, GtkCellRenderer** cell){
return gtk_icon_view_get_cursor(icon_view,path, cell) ;
}
void icon_view_selected_foreach(GtkIconView* icon_view, GtkIconViewForeachFunc func, gpointer data){
gtk_icon_view_selected_foreach(icon_view,func, data);
}
void icon_view_set_selection_mode(GtkIconView* icon_view, GtkSelectionMode mode){
gtk_icon_view_set_selection_mode(icon_view, mode);
}
GtkSelectionMode icon_view_get_selection_mode(GtkIconView* icon_view){
return gtk_icon_view_get_selection_mode(icon_view) ;
}
void icon_view_set_item_orientation(GtkIconView* icon_view, GtkOrientation orientation){
gtk_icon_view_set_item_orientation(icon_view, orientation);
}
GtkOrientation icon_view_get_item_orientation(GtkIconView* icon_view){
return gtk_icon_view_get_item_orientation(icon_view) ;
}
void icon_view_set_columns(GtkIconView* icon_view, gint columns){
gtk_icon_view_set_columns(icon_view, columns);
}
gint icon_view_get_columns(GtkIconView* icon_view){
return gtk_icon_view_get_columns(icon_view) ;
}
void icon_view_set_item_width(GtkIconView* icon_view, gint item_width){
gtk_icon_view_set_item_width(icon_view, item_width);
}
gint icon_view_get_item_width(GtkIconView* icon_view){
return gtk_icon_view_get_item_width(icon_view) ;
}
void icon_view_set_spacing(GtkIconView* icon_view, gint spacing){
gtk_icon_view_set_spacing(icon_view, spacing);
}
gint icon_view_get_spacing(GtkIconView* icon_view){
return gtk_icon_view_get_spacing(icon_view) ;
}
void icon_view_set_row_spacing(GtkIconView* icon_view, gint row_spacing){
gtk_icon_view_set_row_spacing(icon_view, row_spacing);
}
gint icon_view_get_row_spacing(GtkIconView* icon_view){
return gtk_icon_view_get_row_spacing(icon_view) ;
}
void icon_view_set_column_spacing(GtkIconView* icon_view, gint column_spacing){
gtk_icon_view_set_column_spacing(icon_view, column_spacing);
}
gint icon_view_get_column_spacing(GtkIconView* icon_view){
return gtk_icon_view_get_column_spacing(icon_view) ;
}
void icon_view_set_margin(GtkIconView* icon_view, gint margin){
gtk_icon_view_set_margin(icon_view, margin);
}
gint icon_view_get_margin(GtkIconView* icon_view){
return gtk_icon_view_get_margin(icon_view) ;
}
void icon_view_set_item_padding(GtkIconView* icon_view, gint item_padding){
gtk_icon_view_set_item_padding(icon_view, item_padding);
}
gint icon_view_get_item_padding(GtkIconView* icon_view){
return gtk_icon_view_get_item_padding(icon_view) ;
}
void icon_view_set_activate_on_single_click(GtkIconView* icon_view, gboolean single){
gtk_icon_view_set_activate_on_single_click(icon_view, single);
}
gboolean icon_view_get_activate_on_single_click(GtkIconView* icon_view){
return gtk_icon_view_get_activate_on_single_click(icon_view) ;
}
gboolean icon_view_get_cell_rect(GtkIconView* icon_view, GtkTreePath* path, GtkCellRenderer* cell, GdkRectangle* rect){
return gtk_icon_view_get_cell_rect(icon_view,path,cell, rect) ;
}
void icon_view_select_path(GtkIconView* icon_view, GtkTreePath* path){
gtk_icon_view_select_path(icon_view, path);
}
void icon_view_unselect_path(GtkIconView* icon_view, GtkTreePath* path){
gtk_icon_view_unselect_path(icon_view, path);
}
gboolean icon_view_path_is_selected(GtkIconView* icon_view, GtkTreePath* path){
return gtk_icon_view_path_is_selected(icon_view, path) ;
}
GList* icon_view_get_selected_items(GtkIconView* icon_view){
return gtk_icon_view_get_selected_items(icon_view) ;
}
void icon_view_select_all(GtkIconView* icon_view){
gtk_icon_view_select_all(icon_view);
}
void icon_view_unselect_all(GtkIconView* icon_view){
gtk_icon_view_unselect_all(icon_view);
}
void icon_view_item_activated(GtkIconView* icon_view, GtkTreePath* path){
gtk_icon_view_item_activated(icon_view, path);
}
void icon_view_scroll_to_path(GtkIconView* icon_view, GtkTreePath* path, gboolean use_align, gfloat row_align, gfloat col_align){
gtk_icon_view_scroll_to_path(icon_view,path,use_align,row_align, col_align);
}
gboolean icon_view_get_visible_range(GtkIconView* icon_view, GtkTreePath** start_path, GtkTreePath** end_path){
return gtk_icon_view_get_visible_range(icon_view,start_path, end_path) ;
}
void icon_view_set_tooltip_item(GtkIconView* icon_view, GtkTooltip* tooltip, GtkTreePath* path){
gtk_icon_view_set_tooltip_item(icon_view,tooltip, path);
}
void icon_view_set_tooltip_cell(GtkIconView* icon_view, GtkTooltip* tooltip, GtkTreePath* path, GtkCellRenderer* cell){
gtk_icon_view_set_tooltip_cell(icon_view,tooltip,path, cell);
}
gboolean icon_view_get_tooltip_context(GtkIconView* icon_view, gint* x, gint* y, gboolean keyboard_tip, GtkTreeModel** model, GtkTreePath** path, GtkTreeIter* iter){
return gtk_icon_view_get_tooltip_context(icon_view,x,y,keyboard_tip,model,path, iter) ;
}
void icon_view_set_tooltip_column(GtkIconView* icon_view, gint column){
gtk_icon_view_set_tooltip_column(icon_view, column);
}
gint icon_view_get_tooltip_column(GtkIconView* icon_view){
return gtk_icon_view_get_tooltip_column(icon_view) ;
}
gint icon_view_get_item_row(GtkIconView* icon_view, GtkTreePath* path){
return gtk_icon_view_get_item_row(icon_view, path) ;
}
gint icon_view_get_item_column(GtkIconView* icon_view, GtkTreePath* path){
return gtk_icon_view_get_item_column(icon_view, path) ;
}
void icon_view_enable_model_drag_source(GtkIconView* icon_view, GdkModifierType start_button_mask, const GtkTargetEntry* targets, gint n_targets, GdkDragAction actions){
gtk_icon_view_enable_model_drag_source(icon_view,start_button_mask,targets,n_targets, actions);
}
void icon_view_enable_model_drag_dest(GtkIconView* icon_view, const GtkTargetEntry* targets, gint n_targets, GdkDragAction actions){
gtk_icon_view_enable_model_drag_dest(icon_view,targets,n_targets, actions);
}
void icon_view_unset_model_drag_source(GtkIconView* icon_view){
gtk_icon_view_unset_model_drag_source(icon_view);
}
void icon_view_unset_model_drag_dest(GtkIconView* icon_view){
gtk_icon_view_unset_model_drag_dest(icon_view);
}
void icon_view_set_reorderable(GtkIconView* icon_view, gboolean reorderable){
gtk_icon_view_set_reorderable(icon_view, reorderable);
}
gboolean icon_view_get_reorderable(GtkIconView* icon_view){
return gtk_icon_view_get_reorderable(icon_view) ;
}
void icon_view_set_drag_dest_item(GtkIconView* icon_view, GtkTreePath* path, GtkIconViewDropPosition pos){
gtk_icon_view_set_drag_dest_item(icon_view,path, pos);
}
void icon_view_get_drag_dest_item(GtkIconView* icon_view, GtkTreePath** path, GtkIconViewDropPosition* pos){
gtk_icon_view_get_drag_dest_item(icon_view,path, pos);
}
gboolean icon_view_get_dest_item_at_pos(GtkIconView* icon_view, gint drag_x, gint drag_y, GtkTreePath** path, GtkIconViewDropPosition* pos){
return gtk_icon_view_get_dest_item_at_pos(icon_view,drag_x,drag_y,path, pos) ;
}
cairo_surface_t* icon_view_create_drag_icon(GtkIconView* icon_view, GtkTreePath* path){
return gtk_icon_view_create_drag_icon(icon_view, path) ;
}








void tree_sortable_sort_column_changed(GtkTreeSortable* sortable){
gtk_tree_sortable_sort_column_changed(sortable);
}
gboolean tree_sortable_get_sort_column_id(GtkTreeSortable* sortable, gint* sort_column_id, GtkSortType* order){
return gtk_tree_sortable_get_sort_column_id(sortable,sort_column_id, order) ;
}
void tree_sortable_set_sort_column_id(GtkTreeSortable* sortable, gint sort_column_id, GtkSortType order){
gtk_tree_sortable_set_sort_column_id(sortable,sort_column_id, order);
}
void tree_sortable_set_sort_func(GtkTreeSortable* sortable, gint sort_column_id, GtkTreeIterCompareFunc sort_func, gpointer user_data, GDestroyNotify destroy){
gtk_tree_sortable_set_sort_func(sortable,sort_column_id,sort_func,user_data, destroy);
}
void tree_sortable_set_default_sort_func(GtkTreeSortable* sortable, GtkTreeIterCompareFunc sort_func, gpointer user_data, GDestroyNotify destroy){
gtk_tree_sortable_set_default_sort_func(sortable,sort_func,user_data, destroy);
}
gboolean tree_sortable_has_default_sort_func(GtkTreeSortable* sortable){
return gtk_tree_sortable_has_default_sort_func(sortable) ;
}



GtkTreeModel* tree_model_sort_new_with_model(GtkTreeModel* child_model){
return gtk_tree_model_sort_new_with_model(child_model) ;
}
GtkTreeModel* tree_model_sort_get_model(GtkTreeModelSort* tree_model){
return gtk_tree_model_sort_get_model(tree_model) ;
}
GtkTreePath* tree_model_sort_convert_child_path_to_path(GtkTreeModelSort* tree_model_sort, GtkTreePath* child_path){
return gtk_tree_model_sort_convert_child_path_to_path(tree_model_sort, child_path) ;
}
gboolean tree_model_sort_convert_child_iter_to_iter(GtkTreeModelSort* tree_model_sort, GtkTreeIter* sort_iter, GtkTreeIter* child_iter){
return gtk_tree_model_sort_convert_child_iter_to_iter(tree_model_sort,sort_iter, child_iter) ;
}
GtkTreePath* tree_model_sort_convert_path_to_child_path(GtkTreeModelSort* tree_model_sort, GtkTreePath* sorted_path){
return gtk_tree_model_sort_convert_path_to_child_path(tree_model_sort, sorted_path) ;
}
void tree_model_sort_convert_iter_to_child_iter(GtkTreeModelSort* tree_model_sort, GtkTreeIter* child_iter, GtkTreeIter* sorted_iter){
gtk_tree_model_sort_convert_iter_to_child_iter(tree_model_sort,child_iter, sorted_iter);
}
void tree_model_sort_reset_default_sort_func(GtkTreeModelSort* tree_model_sort){
gtk_tree_model_sort_reset_default_sort_func(tree_model_sort);
}
void tree_model_sort_clear_cache(GtkTreeModelSort* tree_model_sort){
gtk_tree_model_sort_clear_cache(tree_model_sort);
}
gboolean tree_model_sort_iter_is_valid(GtkTreeModelSort* tree_model_sort, GtkTreeIter* iter){
return gtk_tree_model_sort_iter_is_valid(tree_model_sort, iter) ;
}













GtkTreeModel* tree_model_filter_new(GtkTreeModel* child_model, GtkTreePath* root){
return gtk_tree_model_filter_new(child_model, root) ;
}
void tree_model_filter_set_visible_func(GtkTreeModelFilter* filter, GtkTreeModelFilterVisibleFunc func, gpointer data, GDestroyNotify destroy){
gtk_tree_model_filter_set_visible_func(filter,func,data, destroy);
}
void tree_model_filter_set_modify_func(GtkTreeModelFilter* filter, gint n_columns, GType* types, GtkTreeModelFilterModifyFunc func, gpointer data, GDestroyNotify destroy){
gtk_tree_model_filter_set_modify_func(filter,n_columns,types,func,data, destroy);
}
void tree_model_filter_set_visible_column(GtkTreeModelFilter* filter, gint column){
gtk_tree_model_filter_set_visible_column(filter, column);
}
GtkTreeModel* tree_model_filter_get_model(GtkTreeModelFilter* filter){
return gtk_tree_model_filter_get_model(filter) ;
}
gboolean tree_model_filter_convert_child_iter_to_iter(GtkTreeModelFilter* filter, GtkTreeIter* filter_iter, GtkTreeIter* child_iter){
return gtk_tree_model_filter_convert_child_iter_to_iter(filter,filter_iter, child_iter) ;
}
void tree_model_filter_convert_iter_to_child_iter(GtkTreeModelFilter* filter, GtkTreeIter* child_iter, GtkTreeIter* filter_iter){
gtk_tree_model_filter_convert_iter_to_child_iter(filter,child_iter, filter_iter);
}
GtkTreePath* tree_model_filter_convert_child_path_to_path(GtkTreeModelFilter* filter, GtkTreePath* child_path){
return gtk_tree_model_filter_convert_child_path_to_path(filter, child_path) ;
}
GtkTreePath* tree_model_filter_convert_path_to_child_path(GtkTreeModelFilter* filter, GtkTreePath* filter_path){
return gtk_tree_model_filter_convert_path_to_child_path(filter, filter_path) ;
}
void tree_model_filter_refilter(GtkTreeModelFilter* filter){
gtk_tree_model_filter_refilter(filter);
}
void tree_model_filter_clear_cache(GtkTreeModelFilter* filter){
gtk_tree_model_filter_clear_cache(filter);
}









void cell_layout_pack_start(GtkCellLayout* cell_layout, GtkCellRenderer* cell, gboolean expand){
gtk_cell_layout_pack_start(cell_layout,cell, expand);
}
void cell_layout_pack_end(GtkCellLayout* cell_layout, GtkCellRenderer* cell, gboolean expand){
gtk_cell_layout_pack_end(cell_layout,cell, expand);
}
GtkCellArea* cell_layout_get_area(GtkCellLayout* cell_layout){
return gtk_cell_layout_get_area(cell_layout) ;
}
GList* cell_layout_get_cells(GtkCellLayout* cell_layout){
return gtk_cell_layout_get_cells(cell_layout) ;
}
void cell_layout_reorder(GtkCellLayout* cell_layout, GtkCellRenderer* cell, gint position){
gtk_cell_layout_reorder(cell_layout,cell, position);
}
void cell_layout_clear(GtkCellLayout* cell_layout){
gtk_cell_layout_clear(cell_layout);
}
template <typename... Attrs>
void cell_layout_set_attributes(GtkCellLayout* cell_layout, GtkCellRenderer* cell, Attrs... list){
(gtk_cell_layout_set_attributes(cell_layout,cell,list), ...);
}
void cell_layout_add_attribute(GtkCellLayout* cell_layout, GtkCellRenderer* cell, const gchar* attribute, gint column){
gtk_cell_layout_add_attribute(cell_layout,cell,attribute, column);
}
void cell_layout_set_cell_data_func(GtkCellLayout* cell_layout, GtkCellRenderer* cell, GtkCellLayoutDataFunc func, gpointer func_data, GDestroyNotify destroy){
gtk_cell_layout_set_cell_data_func(cell_layout,cell,func,func_data, destroy);
}
void cell_layout_clear_attributes(GtkCellLayout* cell_layout, GtkCellRenderer* cell){
gtk_cell_layout_clear_attributes(cell_layout, cell);
}











void cell_area_add(GtkCellArea* area, GtkCellRenderer* renderer){
gtk_cell_area_add(area, renderer);
}
void cell_area_remove(GtkCellArea* area, GtkCellRenderer* renderer){
gtk_cell_area_remove(area, renderer);
}
gboolean cell_area_has_renderer(GtkCellArea* area, GtkCellRenderer* renderer){
return gtk_cell_area_has_renderer(area, renderer) ;
}
void cell_area_foreach(GtkCellArea* area, GtkCellCallback callback, gpointer callback_data){
gtk_cell_area_foreach(area,callback, callback_data);
}
void cell_area_foreach_alloc(GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, const GdkRectangle* cell_area, const GdkRectangle* background_area, GtkCellAllocCallback callback, gpointer callback_data){
gtk_cell_area_foreach_alloc(area,context,widget,cell_area,background_area,callback, callback_data);
}
gint cell_area_event(GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, GdkEvent* event, const GdkRectangle* cell_area, GtkCellRendererState flags){
return gtk_cell_area_event(area,context,widget,event,cell_area, flags) ;
}
void cell_area_render(GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, cairo_t* cr, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags, gboolean paint_focus){
gtk_cell_area_render(area,context,widget,cr,background_area,cell_area,flags, paint_focus);
}
void cell_area_get_cell_allocation(GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, GtkCellRenderer* renderer, const GdkRectangle* cell_area, GdkRectangle* allocation){
gtk_cell_area_get_cell_allocation(area,context,widget,renderer,cell_area, allocation);
}
GtkCellRenderer* cell_area_get_cell_at_position(GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, const GdkRectangle* cell_area, gint x, gint y, GdkRectangle* alloc_area){
return gtk_cell_area_get_cell_at_position(area,context,widget,cell_area,x,y, alloc_area) ;
}
GtkCellAreaContext* cell_area_create_context(GtkCellArea* area){
return gtk_cell_area_create_context(area) ;
}
GtkCellAreaContext* cell_area_copy_context(GtkCellArea* area, GtkCellAreaContext* context){
return gtk_cell_area_copy_context(area, context) ;
}
GtkSizeRequestMode cell_area_get_request_mode(GtkCellArea* area){
return gtk_cell_area_get_request_mode(area) ;
}
void cell_area_get_preferred_width(GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, gint* minimum_width, gint* natural_width){
gtk_cell_area_get_preferred_width(area,context,widget,minimum_width, natural_width);
}
void cell_area_get_preferred_height_for_width(GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height){
gtk_cell_area_get_preferred_height_for_width(area,context,widget,width,minimum_height, natural_height);
}
void cell_area_get_preferred_height(GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, gint* minimum_height, gint* natural_height){
gtk_cell_area_get_preferred_height(area,context,widget,minimum_height, natural_height);
}
void cell_area_get_preferred_width_for_height(GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width){
gtk_cell_area_get_preferred_width_for_height(area,context,widget,height,minimum_width, natural_width);
}
const gchar* cell_area_get_current_path_string(GtkCellArea* area) {
return gtk_cell_area_get_current_path_string(area) ;
}
void cell_area_apply_attributes(GtkCellArea* area, GtkTreeModel* tree_model, GtkTreeIter* iter, gboolean is_expander, gboolean is_expanded){
gtk_cell_area_apply_attributes(area,tree_model,iter,is_expander, is_expanded);
}
void cell_area_attribute_connect(GtkCellArea* area, GtkCellRenderer* renderer, const gchar* attribute, gint column){
gtk_cell_area_attribute_connect(area,renderer,attribute, column);
}
void cell_area_attribute_disconnect(GtkCellArea* area, GtkCellRenderer* renderer, const gchar* attribute){
gtk_cell_area_attribute_disconnect(area,renderer, attribute);
}
gint cell_area_attribute_get_column(GtkCellArea* area, GtkCellRenderer* renderer, const gchar* attribute){
return gtk_cell_area_attribute_get_column(area,renderer, attribute) ;
}
void cell_area_class_install_cell_property(GtkCellAreaClass* aclass, guint property_id, GParamSpec* pspec){
gtk_cell_area_class_install_cell_property(aclass,property_id, pspec);
}
GParamSpec* cell_area_class_find_cell_property(GtkCellAreaClass* aclass, const gchar* property_name){
return gtk_cell_area_class_find_cell_property(aclass, property_name) ;
}
GParamSpec** cell_area_class_list_cell_properties(GtkCellAreaClass* aclass, guint* n_properties){
return gtk_cell_area_class_list_cell_properties(aclass, n_properties) ;
}
template <typename... Property>
void cell_area_add_with_properties(GtkCellArea* area, GtkCellRenderer* renderer, const gchar* first_prop_name, Property... list){
(gtk_cell_area_add_with_properties(area,renderer,first_prop_name,list), ...);
}
template <typename... Property>
void cell_area_cell_set(GtkCellArea* area, GtkCellRenderer* renderer, const gchar* first_prop_name, Property... list){
(gtk_cell_area_cell_set(area,renderer,first_prop_name,list), ...);
}
template <typename... Property>
void cell_area_cell_get(GtkCellArea* area, GtkCellRenderer* renderer, const gchar* first_prop_name, Property... list){
(gtk_cell_area_cell_get(area,renderer,first_prop_name,list), ...);
}
void cell_area_cell_set_valist(GtkCellArea* area, GtkCellRenderer* renderer, const gchar* first_property_name, va_list var_args){
gtk_cell_area_cell_set_valist(area,renderer,first_property_name, var_args);
}
void cell_area_cell_get_valist(GtkCellArea* area, GtkCellRenderer* renderer, const gchar* first_property_name, va_list var_args){
gtk_cell_area_cell_get_valist(area,renderer,first_property_name, var_args);
}
void cell_area_cell_set_property(GtkCellArea* area, GtkCellRenderer* renderer, const gchar* property_name, const GValue* value){
gtk_cell_area_cell_set_property(area,renderer,property_name, value);
}
void cell_area_cell_get_property(GtkCellArea* area, GtkCellRenderer* renderer, const gchar* property_name, GValue* value){
gtk_cell_area_cell_get_property(area,renderer,property_name, value);
}
gboolean cell_area_is_activatable(GtkCellArea* area){
return gtk_cell_area_is_activatable(area) ;
}
gboolean cell_area_activate(GtkCellArea* area, GtkCellAreaContext* context, GtkWidget* widget, const GdkRectangle* cell_area, GtkCellRendererState flags, gboolean edit_only){
return gtk_cell_area_activate(area,context,widget,cell_area,flags, edit_only) ;
}
gboolean cell_area_focus(GtkCellArea* area, GtkDirectionType direction){
return gtk_cell_area_focus(area, direction) ;
}
void cell_area_set_focus_cell(GtkCellArea* area, GtkCellRenderer* renderer){
gtk_cell_area_set_focus_cell(area, renderer);
}
GtkCellRenderer* cell_area_get_focus_cell(GtkCellArea* area){
return gtk_cell_area_get_focus_cell(area) ;
}
void cell_area_add_focus_sibling(GtkCellArea* area, GtkCellRenderer* renderer, GtkCellRenderer* sibling){
gtk_cell_area_add_focus_sibling(area,renderer, sibling);
}
void cell_area_remove_focus_sibling(GtkCellArea* area, GtkCellRenderer* renderer, GtkCellRenderer* sibling){
gtk_cell_area_remove_focus_sibling(area,renderer, sibling);
}
gboolean cell_area_is_focus_sibling(GtkCellArea* area, GtkCellRenderer* renderer, GtkCellRenderer* sibling){
return gtk_cell_area_is_focus_sibling(area,renderer, sibling) ;
}
const GList* cell_area_get_focus_siblings(GtkCellArea* area, GtkCellRenderer* renderer) {
return gtk_cell_area_get_focus_siblings(area, renderer) ;
}
GtkCellRenderer* cell_area_get_focus_from_sibling(GtkCellArea* area, GtkCellRenderer* renderer){
return gtk_cell_area_get_focus_from_sibling(area, renderer) ;
}
GtkCellRenderer* cell_area_get_edited_cell(GtkCellArea* area){
return gtk_cell_area_get_edited_cell(area) ;
}
GtkCellEditable* cell_area_get_edit_widget(GtkCellArea* area){
return gtk_cell_area_get_edit_widget(area) ;
}
gboolean cell_area_activate_cell(GtkCellArea* area, GtkWidget* widget, GtkCellRenderer* renderer, GdkEvent* event, const GdkRectangle* cell_area, GtkCellRendererState flags){
return gtk_cell_area_activate_cell(area,widget,renderer,event,cell_area, flags) ;
}
void cell_area_stop_editing(GtkCellArea* area, gboolean canceled){
gtk_cell_area_stop_editing(area, canceled);
}
void cell_area_inner_cell_area(GtkCellArea* area, GtkWidget* widget, const GdkRectangle* cell_area, GdkRectangle* inner_area){
gtk_cell_area_inner_cell_area(area,widget,cell_area, inner_area);
}
void cell_area_request_renderer(GtkCellArea* area, GtkCellRenderer* renderer, GtkOrientation orientation, GtkWidget* widget, gint for_size, gint* minimum_size, gint* natural_size){
gtk_cell_area_request_renderer(area,renderer,orientation,widget,for_size,minimum_size, natural_size);
}



GtkCellArea* cell_area_box_new(){
return gtk_cell_area_box_new() ;
}
void cell_area_box_pack_start(GtkCellAreaBox* box, GtkCellRenderer* renderer, gboolean expand, gboolean align, gboolean fixed){
gtk_cell_area_box_pack_start(box,renderer,expand,align, fixed);
}
void cell_area_box_pack_end(GtkCellAreaBox* box, GtkCellRenderer* renderer, gboolean expand, gboolean align, gboolean fixed){
gtk_cell_area_box_pack_end(box,renderer,expand,align, fixed);
}
gint cell_area_box_get_spacing(GtkCellAreaBox* box){
return gtk_cell_area_box_get_spacing(box) ;
}
void cell_area_box_set_spacing(GtkCellAreaBox* box, gint spacing){
gtk_cell_area_box_set_spacing(box, spacing);
}



GtkCellArea* cell_area_context_get_area(GtkCellAreaContext* context){
return gtk_cell_area_context_get_area(context) ;
}
void cell_area_context_allocate(GtkCellAreaContext* context, gint width, gint height){
gtk_cell_area_context_allocate(context,width, height);
}
void cell_area_context_reset(GtkCellAreaContext* context){
gtk_cell_area_context_reset(context);
}
void cell_area_context_get_preferred_width(GtkCellAreaContext* context, gint* minimum_width, gint* natural_width){
gtk_cell_area_context_get_preferred_width(context,minimum_width, natural_width);
}
void cell_area_context_get_preferred_height(GtkCellAreaContext* context, gint* minimum_height, gint* natural_height){
gtk_cell_area_context_get_preferred_height(context,minimum_height, natural_height);
}
void cell_area_context_get_preferred_height_for_width(GtkCellAreaContext* context, gint width, gint* minimum_height, gint* natural_height){
gtk_cell_area_context_get_preferred_height_for_width(context,width,minimum_height, natural_height);
}
void cell_area_context_get_preferred_width_for_height(GtkCellAreaContext* context, gint height, gint* minimum_width, gint* natural_width){
gtk_cell_area_context_get_preferred_width_for_height(context,height,minimum_width, natural_width);
}
void cell_area_context_get_allocation(GtkCellAreaContext* context, gint* width, gint* height){
gtk_cell_area_context_get_allocation(context,width, height);
}
void cell_area_context_push_preferred_width(GtkCellAreaContext* context, gint minimum_width, gint natural_width){
gtk_cell_area_context_push_preferred_width(context,minimum_width, natural_width);
}
void cell_area_context_push_preferred_height(GtkCellAreaContext* context, gint minimum_height, gint natural_height){
gtk_cell_area_context_push_preferred_height(context,minimum_height, natural_height);
}



void cell_renderer_class_set_accessible_type(GtkCellRendererClass* renderer_class, GType type){
gtk_cell_renderer_class_set_accessible_type(renderer_class, type);
}
void cell_renderer_get_aligned_area(GtkCellRenderer* cell, GtkWidget* widget, GtkCellRendererState flags, const GdkRectangle* cell_area, GdkRectangle* aligned_area){
gtk_cell_renderer_get_aligned_area(cell,widget,flags,cell_area, aligned_area);
}







void cell_renderer_render(GtkCellRenderer* cell, cairo_t* cr, GtkWidget* widget, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags){
gtk_cell_renderer_render(cell,cr,widget,background_area,cell_area, flags);
}
gboolean cell_renderer_activate(GtkCellRenderer* cell, GdkEvent* event, GtkWidget* widget, const gchar* path, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags){
return gtk_cell_renderer_activate(cell,event,widget,path,background_area,cell_area, flags) ;
}
GtkCellEditable* cell_renderer_start_editing(GtkCellRenderer* cell, GdkEvent* event, GtkWidget* widget, const gchar* path, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags){
return gtk_cell_renderer_start_editing(cell,event,widget,path,background_area,cell_area, flags) ;
}
void cell_renderer_stop_editing(GtkCellRenderer* cell, gboolean canceled){
gtk_cell_renderer_stop_editing(cell, canceled);
}
void cell_renderer_get_fixed_size(GtkCellRenderer* cell, gint* width, gint* height){
gtk_cell_renderer_get_fixed_size(cell,width, height);
}
void cell_renderer_set_fixed_size(GtkCellRenderer* cell, gint width, gint height){
gtk_cell_renderer_set_fixed_size(cell,width, height);
}
gboolean cell_renderer_get_visible(GtkCellRenderer* cell){
return gtk_cell_renderer_get_visible(cell) ;
}
void cell_renderer_set_visible(GtkCellRenderer* cell, gboolean visible){
gtk_cell_renderer_set_visible(cell, visible);
}
gboolean cell_renderer_get_sensitive(GtkCellRenderer* cell){
return gtk_cell_renderer_get_sensitive(cell) ;
}
void cell_renderer_set_sensitive(GtkCellRenderer* cell, gboolean sensitive){
gtk_cell_renderer_set_sensitive(cell, sensitive);
}
void cell_renderer_get_alignment(GtkCellRenderer* cell, gfloat* xalign, gfloat* yalign){
gtk_cell_renderer_get_alignment(cell,xalign, yalign);
}
void cell_renderer_set_alignment(GtkCellRenderer* cell, gfloat xalign, gfloat yalign){
gtk_cell_renderer_set_alignment(cell,xalign, yalign);
}
void cell_renderer_get_padding(GtkCellRenderer* cell, gint* xpad, gint* ypad){
gtk_cell_renderer_get_padding(cell,xpad, ypad);
}
void cell_renderer_set_padding(GtkCellRenderer* cell, gint xpad, gint ypad){
gtk_cell_renderer_set_padding(cell,xpad, ypad);
}
GtkStateFlags cell_renderer_get_state(GtkCellRenderer* cell, GtkWidget* widget, GtkCellRendererState cell_state){
return gtk_cell_renderer_get_state(cell,widget, cell_state) ;
}
gboolean cell_renderer_is_activatable(GtkCellRenderer* cell){
return gtk_cell_renderer_is_activatable(cell) ;
}
void cell_renderer_get_preferred_height(GtkCellRenderer* cell, GtkWidget* widget, gint* minimum_size, gint* natural_size){
gtk_cell_renderer_get_preferred_height(cell,widget,minimum_size, natural_size);
}
void cell_renderer_get_preferred_height_for_width(GtkCellRenderer* cell, GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height){
gtk_cell_renderer_get_preferred_height_for_width(cell,widget,width,minimum_height, natural_height);
}
void cell_renderer_get_preferred_size(GtkCellRenderer* cell, GtkWidget* widget, GtkRequisition* minimum_size, GtkRequisition* natural_size){
gtk_cell_renderer_get_preferred_size(cell,widget,minimum_size, natural_size);
}
void cell_renderer_get_preferred_width(GtkCellRenderer* cell, GtkWidget* widget, gint* minimum_size, gint* natural_size){
gtk_cell_renderer_get_preferred_width(cell,widget,minimum_size, natural_size);
}
void cell_renderer_get_preferred_width_for_height(GtkCellRenderer* cell, GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width){
gtk_cell_renderer_get_preferred_width_for_height(cell,widget,height,minimum_width, natural_width);
}
GtkSizeRequestMode cell_renderer_get_request_mode(GtkCellRenderer* cell){
return gtk_cell_renderer_get_request_mode(cell) ;
}



void cell_editable_start_editing(GtkCellEditable* cell_editable, GdkEvent* event){
gtk_cell_editable_start_editing(cell_editable, event);
}
void cell_editable_editing_done(GtkCellEditable* cell_editable){
gtk_cell_editable_editing_done(cell_editable);
}
void cell_editable_remove_widget(GtkCellEditable* cell_editable){
gtk_cell_editable_remove_widget(cell_editable);
}



GtkCellRenderer* cell_renderer_accel_new(){
return gtk_cell_renderer_accel_new() ;
}



GtkCellRenderer* cell_renderer_combo_new(){
return gtk_cell_renderer_combo_new() ;
}



GtkCellRenderer* cell_renderer_pixbuf_new(){
return gtk_cell_renderer_pixbuf_new() ;
}



GtkCellRenderer* cell_renderer_progress_new(){
return gtk_cell_renderer_progress_new() ;
}



GtkCellRenderer* cell_renderer_spin_new(){
return gtk_cell_renderer_spin_new() ;
}



GtkCellRenderer* cell_renderer_text_new(){
return gtk_cell_renderer_text_new() ;
}
void cell_renderer_text_set_fixed_height_from_font(GtkCellRendererText* renderer, gint number_of_rows){
gtk_cell_renderer_text_set_fixed_height_from_font(renderer, number_of_rows);
}



GtkCellRenderer* cell_renderer_toggle_new(){
return gtk_cell_renderer_toggle_new() ;
}
gboolean cell_renderer_toggle_get_radio(GtkCellRendererToggle* toggle){
return gtk_cell_renderer_toggle_get_radio(toggle) ;
}
void cell_renderer_toggle_set_radio(GtkCellRendererToggle* toggle, gboolean radio){
gtk_cell_renderer_toggle_set_radio(toggle, radio);
}
gboolean cell_renderer_toggle_get_active(GtkCellRendererToggle* toggle){
return gtk_cell_renderer_toggle_get_active(toggle) ;
}
void cell_renderer_toggle_set_active(GtkCellRendererToggle* toggle, gboolean setting){
gtk_cell_renderer_toggle_set_active(toggle, setting);
}
gboolean cell_renderer_toggle_get_activatable(GtkCellRendererToggle* toggle){
return gtk_cell_renderer_toggle_get_activatable(toggle) ;
}
void cell_renderer_toggle_set_activatable(GtkCellRendererToggle* toggle, gboolean setting){
gtk_cell_renderer_toggle_set_activatable(toggle, setting);
}



GtkCellRenderer* cell_renderer_spinner_new(){
return gtk_cell_renderer_spinner_new() ;
}



template <typename... Columns>
GtkListStore* list_store_new(gint n_columns, Columns... types){
return (gtk_list_store_new(n_columns,types), ...) ;
}
GtkListStore* list_store_newv(gint n_columns, GType* types){
return gtk_list_store_newv(n_columns, types) ;
}
void list_store_set_column_types(GtkListStore* list_store, gint n_columns, GType* types){
gtk_list_store_set_column_types(list_store,n_columns, types);
}
template <typename... Columns>
void list_store_set(GtkListStore* list_store, GtkTreeIter* iter, Columns... pairs){
(gtk_list_store_set(list_store,iter,pairs), ...);
}
void list_store_set_valist(GtkListStore* list_store, GtkTreeIter* iter, va_list var_args){
gtk_list_store_set_valist(list_store,iter, var_args);
}
void list_store_set_value(GtkListStore* list_store, GtkTreeIter* iter, gint column, GValue* value){
gtk_list_store_set_value(list_store,iter,column, value);
}
void list_store_set_valuesv(GtkListStore* list_store, GtkTreeIter* iter, gint* columns, GValue* values, gint n_values){
gtk_list_store_set_valuesv(list_store,iter,columns,values, n_values);
}
gboolean list_store_remove(GtkListStore* list_store, GtkTreeIter* iter){
return gtk_list_store_remove(list_store, iter) ;
}
void list_store_insert(GtkListStore* list_store, GtkTreeIter* iter, gint position){
gtk_list_store_insert(list_store,iter, position);
}
void list_store_insert_before(GtkListStore* list_store, GtkTreeIter* iter, GtkTreeIter* sibling){
gtk_list_store_insert_before(list_store,iter, sibling);
}
void list_store_insert_after(GtkListStore* list_store, GtkTreeIter* iter, GtkTreeIter* sibling){
gtk_list_store_insert_after(list_store,iter, sibling);
}
template <typename... Columns>
void list_store_insert_with_values(GtkListStore* list_store, GtkTreeIter* iter, gint position, Columns... pairs){
(gtk_list_store_insert_with_values(list_store,iter,position,pairs), ...);
}
void list_store_insert_with_valuesv(GtkListStore* list_store, GtkTreeIter* iter, gint position, gint* columns, GValue* values, gint n_values){
gtk_list_store_insert_with_valuesv(list_store,iter,position,columns,values, n_values);
}
void list_store_prepend(GtkListStore* list_store, GtkTreeIter* iter){
gtk_list_store_prepend(list_store, iter);
}
void list_store_append(GtkListStore* list_store, GtkTreeIter* iter){
gtk_list_store_append(list_store, iter);
}
void list_store_clear(GtkListStore* list_store){
gtk_list_store_clear(list_store);
}
gboolean list_store_iter_is_valid(GtkListStore* list_store, GtkTreeIter* iter){
return gtk_list_store_iter_is_valid(list_store, iter) ;
}
void list_store_reorder(GtkListStore* store, gint* new_order){
gtk_list_store_reorder(store, new_order);
}
void list_store_swap(GtkListStore* store, GtkTreeIter* a, GtkTreeIter* b){
gtk_list_store_swap(store,a, b);
}
void list_store_move_before(GtkListStore* store, GtkTreeIter* iter, GtkTreeIter* position){
gtk_list_store_move_before(store,iter, position);
}
void list_store_move_after(GtkListStore* store, GtkTreeIter* iter, GtkTreeIter* position){
gtk_list_store_move_after(store,iter, position);
}



template <typename... Columns>
GtkTreeStore* tree_store_new(gint n_columns, Columns... types){
return (gtk_tree_store_new(n_columns,types), ...) ;
}
GtkTreeStore* tree_store_newv(gint n_columns, GType* types){
return gtk_tree_store_newv(n_columns, types) ;
}
void tree_store_set_column_types(GtkTreeStore* tree_store, gint n_columns, GType* types){
gtk_tree_store_set_column_types(tree_store,n_columns, types);
}
void tree_store_set_value(GtkTreeStore* tree_store, GtkTreeIter* iter, gint column, GValue* value){
gtk_tree_store_set_value(tree_store,iter,column, value);
}
template <typename... Columns>
void tree_store_set(GtkTreeStore* tree_store, GtkTreeIter* iter, Columns... pairs){
(gtk_tree_store_set(tree_store,iter,pairs), ...);
}
void tree_store_set_valist(GtkTreeStore* tree_store, GtkTreeIter* iter, va_list var_args){
gtk_tree_store_set_valist(tree_store,iter, var_args);
}
void tree_store_set_valuesv(GtkTreeStore* tree_store, GtkTreeIter* iter, gint* columns, GValue* values, gint n_values){
gtk_tree_store_set_valuesv(tree_store,iter,columns,values, n_values);
}
gboolean tree_store_remove(GtkTreeStore* tree_store, GtkTreeIter* iter){
return gtk_tree_store_remove(tree_store, iter) ;
}
void tree_store_insert(GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* parent, gint position){
gtk_tree_store_insert(tree_store,iter,parent, position);
}
void tree_store_insert_before(GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* parent, GtkTreeIter* sibling){
gtk_tree_store_insert_before(tree_store,iter,parent, sibling);
}
void tree_store_insert_after(GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* parent, GtkTreeIter* sibling){
gtk_tree_store_insert_after(tree_store,iter,parent, sibling);
}
template <typename... Columns>
void tree_store_insert_with_values(GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* parent, gint position, Columns... pairs){
(gtk_tree_store_insert_with_values(tree_store,iter,parent,position,pairs), ...);
}
void tree_store_insert_with_valuesv(GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* parent, gint position, gint* columns, GValue* values, gint n_values){
gtk_tree_store_insert_with_valuesv(tree_store,iter,parent,position,columns,values, n_values);
}
void tree_store_prepend(GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* parent){
gtk_tree_store_prepend(tree_store,iter, parent);
}
void tree_store_append(GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* parent){
gtk_tree_store_append(tree_store,iter, parent);
}
gboolean tree_store_is_ancestor(GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* descendant){
return gtk_tree_store_is_ancestor(tree_store,iter, descendant) ;
}
gint tree_store_iter_depth(GtkTreeStore* tree_store, GtkTreeIter* iter){
return gtk_tree_store_iter_depth(tree_store, iter) ;
}
void tree_store_clear(GtkTreeStore* tree_store){
gtk_tree_store_clear(tree_store);
}
gboolean tree_store_iter_is_valid(GtkTreeStore* tree_store, GtkTreeIter* iter){
return gtk_tree_store_iter_is_valid(tree_store, iter) ;
}
void tree_store_reorder(GtkTreeStore* tree_store, GtkTreeIter* parent, gint* new_order){
gtk_tree_store_reorder(tree_store,parent, new_order);
}
void tree_store_swap(GtkTreeStore* tree_store, GtkTreeIter* a, GtkTreeIter* b){
gtk_tree_store_swap(tree_store,a, b);
}
void tree_store_move_before(GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* position){
gtk_tree_store_move_before(tree_store,iter, position);
}
void tree_store_move_after(GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* position){
gtk_tree_store_move_after(tree_store,iter, position);
}



GtkWidget* combo_box_new(){
return gtk_combo_box_new() ;
}
GtkWidget* combo_box_new_with_entry(){
return gtk_combo_box_new_with_entry() ;
}
GtkWidget* combo_box_new_with_model(GtkTreeModel* model){
return gtk_combo_box_new_with_model(model) ;
}
GtkWidget* combo_box_new_with_model_and_entry(GtkTreeModel* model){
return gtk_combo_box_new_with_model_and_entry(model) ;
}
GtkWidget* combo_box_new_with_area(GtkCellArea* area){
return gtk_combo_box_new_with_area(area) ;
}
GtkWidget* combo_box_new_with_area_and_entry(GtkCellArea* area){
return gtk_combo_box_new_with_area_and_entry(area) ;
}
gint combo_box_get_wrap_width(GtkComboBox* combo_box){
return gtk_combo_box_get_wrap_width(combo_box) ;
}
void combo_box_set_wrap_width(GtkComboBox* combo_box, gint width){
gtk_combo_box_set_wrap_width(combo_box, width);
}
gint combo_box_get_row_span_column(GtkComboBox* combo_box){
return gtk_combo_box_get_row_span_column(combo_box) ;
}
void combo_box_set_row_span_column(GtkComboBox* combo_box, gint row_span){
gtk_combo_box_set_row_span_column(combo_box, row_span);
}
gint combo_box_get_column_span_column(GtkComboBox* combo_box){
return gtk_combo_box_get_column_span_column(combo_box) ;
}
void combo_box_set_column_span_column(GtkComboBox* combo_box, gint column_span){
gtk_combo_box_set_column_span_column(combo_box, column_span);
}
gint combo_box_get_active(GtkComboBox* combo_box){
return gtk_combo_box_get_active(combo_box) ;
}
void combo_box_set_active(GtkComboBox* combo_box, gint index_){
gtk_combo_box_set_active(combo_box, index_);
}
gboolean combo_box_get_active_iter(GtkComboBox* combo_box, GtkTreeIter* iter){
return gtk_combo_box_get_active_iter(combo_box, iter) ;
}
void combo_box_set_active_iter(GtkComboBox* combo_box, GtkTreeIter* iter){
gtk_combo_box_set_active_iter(combo_box, iter);
}
gint combo_box_get_id_column(GtkComboBox* combo_box){
return gtk_combo_box_get_id_column(combo_box) ;
}
void combo_box_set_id_column(GtkComboBox* combo_box, gint id_column){
gtk_combo_box_set_id_column(combo_box, id_column);
}
const gchar* combo_box_get_active_id(GtkComboBox* combo_box) {
return gtk_combo_box_get_active_id(combo_box) ;
}
gboolean combo_box_set_active_id(GtkComboBox *combo_box, const gchar* active_id){
return gtk_combo_box_set_active_id(combo_box, active_id) ;
}
GtkTreeModel* combo_box_get_model(GtkComboBox* combo_box){
return gtk_combo_box_get_model(combo_box) ;
}
void combo_box_set_model(GtkComboBox* combo_box, GtkTreeModel* model){
gtk_combo_box_set_model(combo_box, model);
}
void combo_box_popup_for_device(GtkComboBox* combo_box, GdkDevice* device){
gtk_combo_box_popup_for_device(combo_box, device);
}
void combo_box_popup(GtkComboBox* combo_box){
gtk_combo_box_popup(combo_box);
}
void combo_box_popdown(GtkComboBox* combo_box){
gtk_combo_box_popdown(combo_box);
}
AtkObject* combo_box_get_popup_accessible(GtkComboBox* combo_box){
return gtk_combo_box_get_popup_accessible(combo_box) ;
}
GtkTreeViewRowSeparatorFunc combo_box_get_row_separator_func(GtkComboBox* combo_box){
return gtk_combo_box_get_row_separator_func(combo_box) ;
}
void combo_box_set_row_separator_func(GtkComboBox* combo_box, GtkTreeViewRowSeparatorFunc func, gpointer data, GDestroyNotify destroy){
gtk_combo_box_set_row_separator_func(combo_box,func,data, destroy);
}









void combo_box_set_button_sensitivity(GtkComboBox* combo_box, GtkSensitivityType sensitivity){
gtk_combo_box_set_button_sensitivity(combo_box, sensitivity);
}
GtkSensitivityType combo_box_get_button_sensitivity(GtkComboBox* combo_box){
return gtk_combo_box_get_button_sensitivity(combo_box) ;
}
gboolean combo_box_get_has_entry(GtkComboBox* combo_box){
return gtk_combo_box_get_has_entry(combo_box) ;
}
void combo_box_set_entry_text_column(GtkComboBox* combo_box, gint text_column){
gtk_combo_box_set_entry_text_column(combo_box, text_column);
}
gint combo_box_get_entry_text_column(GtkComboBox* combo_box){
return gtk_combo_box_get_entry_text_column(combo_box) ;
}
void combo_box_set_popup_fixed_width(GtkComboBox* combo_box, gboolean fixed){
gtk_combo_box_set_popup_fixed_width(combo_box, fixed);
}
gboolean combo_box_get_popup_fixed_width(GtkComboBox* combo_box){
return gtk_combo_box_get_popup_fixed_width(combo_box) ;
}



GtkWidget* combo_box_text_new(){
return gtk_combo_box_text_new() ;
}
GtkWidget* combo_box_text_new_with_entry(){
return gtk_combo_box_text_new_with_entry() ;
}
void combo_box_text_append(GtkComboBoxText* combo_box, const gchar* id, const gchar* text){
gtk_combo_box_text_append(combo_box,id, text);
}
void combo_box_text_prepend(GtkComboBoxText* combo_box,const gchar* id, const gchar* text){
gtk_combo_box_text_prepend(combo_box,id, text);
}
void combo_box_text_insert(GtkComboBoxText* combo_box, gint position, const gchar* id, const gchar* text){
gtk_combo_box_text_insert(combo_box,position,id, text);
}
void combo_box_text_append_text(GtkComboBoxText* combo_box, const gchar* text){
gtk_combo_box_text_append_text(combo_box, text);
}
void combo_box_text_prepend_text(GtkComboBoxText* combo_box, const gchar* text){
gtk_combo_box_text_prepend_text(combo_box, text);
}
void combo_box_text_insert_text(GtkComboBoxText* combo_box, gint position, const gchar* text){
gtk_combo_box_text_insert_text(combo_box,position, text);
}
void combo_box_text_remove(GtkComboBoxText* combo_box, gint position){
gtk_combo_box_text_remove(combo_box, position);
}
void combo_box_text_remove_all(GtkComboBoxText* combo_box){
gtk_combo_box_text_remove_all(combo_box);
}
gchar* combo_box_text_get_active_text(GtkComboBoxText* combo_box){
return gtk_combo_box_text_get_active_text(combo_box) ;
}



GtkWidget* menu_new(){
return gtk_menu_new() ;
}
GtkWidget* menu_new_from_model(GMenuModel* model){
return gtk_menu_new_from_model(model) ;
}
void menu_set_screen(GtkMenu* menu, GdkScreen* screen){
gtk_menu_set_screen(menu, screen);
}
void menu_reorder_child(GtkMenu* menu, GtkWidget* child, gint position){
gtk_menu_reorder_child(menu,child, position);
}
void menu_attach(GtkMenu* menu, GtkWidget* child, guint left_attach, guint right_attach, guint top_attach, guint bottom_attach){
gtk_menu_attach(menu,child,left_attach,right_attach,top_attach, bottom_attach);
}
void menu_popup_at_rect(GtkMenu* menu, GdkWindow* rect_window, const GdkRectangle* rect, GdkGravity rect_anchor, GdkGravity menu_anchor, const GdkEvent* trigger_event){
gtk_menu_popup_at_rect(menu,rect_window,rect,rect_anchor,menu_anchor, trigger_event);
}
void menu_popup_at_widget(GtkMenu* menu, GtkWidget* widget, GdkGravity widget_anchor, GdkGravity menu_anchor, const GdkEvent* trigger_event){
gtk_menu_popup_at_widget(menu,widget,widget_anchor,menu_anchor, trigger_event);
}
void menu_popup_at_pointer(GtkMenu* menu, const GdkEvent* trigger_event){
gtk_menu_popup_at_pointer(menu, trigger_event);
}
















void menu_set_accel_group(GtkMenu* menu, GtkAccelGroup* accel_group){
gtk_menu_set_accel_group(menu, accel_group);
}
GtkAccelGroup* menu_get_accel_group(GtkMenu* menu){
return gtk_menu_get_accel_group(menu) ;
}
void menu_set_accel_path(GtkMenu* menu, const gchar* accel_path){
gtk_menu_set_accel_path(menu, accel_path);
}
const gchar* menu_get_accel_path(GtkMenu* menu) {
return gtk_menu_get_accel_path(menu) ;
}



void menu_set_monitor(GtkMenu* menu, gint monitor_num){
gtk_menu_set_monitor(menu, monitor_num);
}
gint menu_get_monitor(GtkMenu* menu){
return gtk_menu_get_monitor(menu) ;
}
void menu_place_on_monitor(GtkMenu* menu, GdkMonitor* monitor){
gtk_menu_place_on_monitor(menu, monitor);
}

void menu_set_reserve_toggle_size(GtkMenu* menu, gboolean reserve_toggle_size){
gtk_menu_set_reserve_toggle_size(menu, reserve_toggle_size);
}
gboolean menu_get_reserve_toggle_size(GtkMenu* menu){
return gtk_menu_get_reserve_toggle_size(menu) ;
}
void menu_popdown(GtkMenu* menu){
gtk_menu_popdown(menu);
}
void menu_reposition(GtkMenu* menu){
gtk_menu_reposition(menu);
}
GtkWidget* menu_get_active(GtkMenu* menu){
return gtk_menu_get_active(menu) ;
}
void menu_set_active(GtkMenu* menu, guint index){
gtk_menu_set_active(menu, index);
}


void menu_attach_to_widget(GtkMenu* menu, GtkWidget* attach_widget, GtkMenuDetachFunc detacher){
gtk_menu_attach_to_widget(menu,attach_widget, detacher);
}
void menu_detach(GtkMenu* menu){
gtk_menu_detach(menu);
}
GtkWidget* menu_get_attach_widget(GtkMenu* menu){
return gtk_menu_get_attach_widget(menu) ;
}
GList* menu_get_for_attach_widget(GtkWidget* widget){
return gtk_menu_get_for_attach_widget(widget) ;
}












GtkWidget* menu_bar_new(){
return gtk_menu_bar_new() ;
}
GtkWidget* menu_bar_new_from_model(GMenuModel* model){
return gtk_menu_bar_new_from_model(model) ;
}
void menu_bar_set_pack_direction(GtkMenuBar* menubar, GtkPackDirection pack_dir){
gtk_menu_bar_set_pack_direction(menubar, pack_dir);
}
GtkPackDirection menu_bar_get_pack_direction(GtkMenuBar* menubar){
return gtk_menu_bar_get_pack_direction(menubar) ;
}
void menu_bar_set_child_pack_direction(GtkMenuBar* menubar, GtkPackDirection child_pack_dir){
gtk_menu_bar_set_child_pack_direction(menubar, child_pack_dir);
}
GtkPackDirection menu_bar_get_child_pack_direction(GtkMenuBar* menubar){
return gtk_menu_bar_get_child_pack_direction(menubar) ;
}



GtkWidget* menu_item_new(){
return gtk_menu_item_new() ;
}
GtkWidget* menu_item_new_with_label(const gchar* label){
return gtk_menu_item_new_with_label(label) ;
}
GtkWidget* menu_item_new_with_mnemonic(const gchar* label){
return gtk_menu_item_new_with_mnemonic(label) ;
}



const gchar* menu_item_get_label(GtkMenuItem* menu_item) {
return gtk_menu_item_get_label(menu_item) ;
}
void menu_item_set_label(GtkMenuItem* menu_item, const gchar* label){
gtk_menu_item_set_label(menu_item, label);
}
gboolean menu_item_get_use_underline(GtkMenuItem* menu_item){
return gtk_menu_item_get_use_underline(menu_item) ;
}
void menu_item_set_use_underline(GtkMenuItem* menu_item, gboolean setting){
gtk_menu_item_set_use_underline(menu_item, setting);
}
void menu_item_set_submenu(GtkMenuItem* menu_item, GtkWidget* submenu){
gtk_menu_item_set_submenu(menu_item, submenu);
}
GtkWidget* menu_item_get_submenu(GtkMenuItem* menu_item){
return gtk_menu_item_get_submenu(menu_item) ;
}
void menu_item_set_accel_path(GtkMenuItem* menu_item, const gchar* accel_path){
gtk_menu_item_set_accel_path(menu_item, accel_path);
}
const gchar* menu_item_get_accel_path(GtkMenuItem* menu_item) {
return gtk_menu_item_get_accel_path(menu_item) ;
}
void menu_item_select(GtkMenuItem* menu_item){
gtk_menu_item_select(menu_item);
}
void menu_item_deselect(GtkMenuItem* menu_item){
gtk_menu_item_deselect(menu_item);
}
void menu_item_activate(GtkMenuItem* menu_item){
gtk_menu_item_activate(menu_item);
}
void menu_item_toggle_size_request(GtkMenuItem* menu_item, gint* requisition){
gtk_menu_item_toggle_size_request(menu_item, requisition);
}
void menu_item_toggle_size_allocate(GtkMenuItem* menu_item, gint allocation){
gtk_menu_item_toggle_size_allocate(menu_item, allocation);
}
gboolean menu_item_get_reserve_indicator(GtkMenuItem* menu_item){
return gtk_menu_item_get_reserve_indicator(menu_item) ;
}
void menu_item_set_reserve_indicator(GtkMenuItem* menu_item, gboolean reserve){
gtk_menu_item_set_reserve_indicator(menu_item, reserve);
}



GtkWidget* radio_menu_item_new(GSList* group){
return gtk_radio_menu_item_new(group) ;
}
GtkWidget* radio_menu_item_new_with_label(GSList* group, const gchar* label){
return gtk_radio_menu_item_new_with_label(group, label) ;
}
GtkWidget* radio_menu_item_new_with_mnemonic(GSList* group, const gchar* label){
return gtk_radio_menu_item_new_with_mnemonic(group, label) ;
}
GtkWidget* radio_menu_item_new_from_widget(GtkRadioMenuItem* group){
return gtk_radio_menu_item_new_from_widget(group) ;
}
GtkWidget* radio_menu_item_new_with_label_from_widget(GtkRadioMenuItem* group, const gchar* label){
return gtk_radio_menu_item_new_with_label_from_widget(group, label) ;
}
GtkWidget* radio_menu_item_new_with_mnemonic_from_widget(GtkRadioMenuItem* group, const gchar* label){
return gtk_radio_menu_item_new_with_mnemonic_from_widget(group, label) ;
}
void radio_menu_item_set_group(GtkRadioMenuItem* radio_menu_item, GSList* group){
gtk_radio_menu_item_set_group(radio_menu_item, group);
}
GSList* radio_menu_item_get_group(GtkRadioMenuItem* radio_menu_item){
return gtk_radio_menu_item_get_group(radio_menu_item) ;
}
void radio_menu_item_join_group(GtkRadioMenuItem* radio_menu_item, GtkRadioMenuItem* group_source){
gtk_radio_menu_item_join_group(radio_menu_item, group_source);
}



GtkWidget* check_menu_item_new(){
return gtk_check_menu_item_new() ;
}
GtkWidget* check_menu_item_new_with_label(const gchar* label){
return gtk_check_menu_item_new_with_label(label) ;
}
GtkWidget* check_menu_item_new_with_mnemonic(const gchar* label){
return gtk_check_menu_item_new_with_mnemonic(label) ;
}
gboolean check_menu_item_get_active(GtkCheckMenuItem* check_menu_item){
return gtk_check_menu_item_get_active(check_menu_item) ;
}
void check_menu_item_set_active(GtkCheckMenuItem* check_menu_item, gboolean is_active){
gtk_check_menu_item_set_active(check_menu_item, is_active);
}
void check_menu_item_toggled(GtkCheckMenuItem* check_menu_item){
gtk_check_menu_item_toggled(check_menu_item);
}
gboolean check_menu_item_get_inconsistent(GtkCheckMenuItem* check_menu_item){
return gtk_check_menu_item_get_inconsistent(check_menu_item) ;
}
void check_menu_item_set_inconsistent(GtkCheckMenuItem* check_menu_item, gboolean setting){
gtk_check_menu_item_set_inconsistent(check_menu_item, setting);
}
void check_menu_item_set_draw_as_radio(GtkCheckMenuItem* check_menu_item, gboolean draw_as_radio){
gtk_check_menu_item_set_draw_as_radio(check_menu_item, draw_as_radio);
}
gboolean check_menu_item_get_draw_as_radio(GtkCheckMenuItem* check_menu_item){
return gtk_check_menu_item_get_draw_as_radio(check_menu_item) ;
}



GtkWidget* separator_menu_item_new(){
return gtk_separator_menu_item_new() ;
}



PangoEllipsizeMode tool_shell_get_ellipsize_mode(GtkToolShell* shell){
return gtk_tool_shell_get_ellipsize_mode(shell) ;
}
GtkIconSize tool_shell_get_icon_size(GtkToolShell* shell){
return gtk_tool_shell_get_icon_size(shell) ;
}
GtkOrientation tool_shell_get_orientation(GtkToolShell* shell){
return gtk_tool_shell_get_orientation(shell) ;
}
GtkReliefStyle tool_shell_get_relief_style(GtkToolShell* shell){
return gtk_tool_shell_get_relief_style(shell) ;
}
GtkToolbarStyle tool_shell_get_style(GtkToolShell* shell){
return gtk_tool_shell_get_style(shell) ;
}
gfloat tool_shell_get_text_alignment(GtkToolShell* shell){
return gtk_tool_shell_get_text_alignment(shell) ;
}
GtkOrientation tool_shell_get_text_orientation(GtkToolShell* shell){
return gtk_tool_shell_get_text_orientation(shell) ;
}
void tool_shell_rebuild_menu(GtkToolShell* shell){
gtk_tool_shell_rebuild_menu(shell);
}
GtkSizeGroup* tool_shell_get_text_size_group(GtkToolShell* shell){
return gtk_tool_shell_get_text_size_group(shell) ;
}



GtkWidget* toolbar_new(){
return gtk_toolbar_new() ;
}
void toolbar_insert(GtkToolbar* toolbar, GtkToolItem* item, gint pos){
gtk_toolbar_insert(toolbar,item, pos);
}
gint toolbar_get_item_index(GtkToolbar* toolbar, GtkToolItem* item){
return gtk_toolbar_get_item_index(toolbar, item) ;
}
gint toolbar_get_n_items(GtkToolbar* toolbar){
return gtk_toolbar_get_n_items(toolbar) ;
}
GtkToolItem* toolbar_get_nth_item(GtkToolbar* toolbar, gint n){
return gtk_toolbar_get_nth_item(toolbar, n) ;
}
gint toolbar_get_drop_index(GtkToolbar* toolbar, gint x, gint y){
return gtk_toolbar_get_drop_index(toolbar,x, y) ;
}
void toolbar_set_drop_highlight_item(GtkToolbar* toolbar, GtkToolItem* tool_item, gint index_){
gtk_toolbar_set_drop_highlight_item(toolbar,tool_item, index_);
}
void toolbar_set_show_arrow(GtkToolbar* toolbar, gboolean show_arrow){
gtk_toolbar_set_show_arrow(toolbar, show_arrow);
}
void toolbar_unset_icon_size(GtkToolbar* toolbar){
gtk_toolbar_unset_icon_size(toolbar);
}
gboolean toolbar_get_show_arrow(GtkToolbar* toolbar){
return gtk_toolbar_get_show_arrow(toolbar) ;
}
GtkToolbarStyle toolbar_get_style(GtkToolbar* toolbar){
return gtk_toolbar_get_style(toolbar) ;
}
GtkIconSize toolbar_get_icon_size(GtkToolbar* toolbar){
return gtk_toolbar_get_icon_size(toolbar) ;
}
GtkReliefStyle toolbar_get_relief_style(GtkToolbar* toolbar){
return gtk_toolbar_get_relief_style(toolbar) ;
}
void toolbar_set_style(GtkToolbar* toolbar, GtkToolbarStyle style){
gtk_toolbar_set_style(toolbar, style);
}
void toolbar_set_icon_size(GtkToolbar* toolbar, GtkIconSize icon_size){
gtk_toolbar_set_icon_size(toolbar, icon_size);
}
void toolbar_unset_style(GtkToolbar* toolbar){
gtk_toolbar_unset_style(toolbar);
}



GtkToolItem* tool_item_new(){
return gtk_tool_item_new() ;
}
void tool_item_set_homogeneous(GtkToolItem* tool_item, gboolean homogeneous){
gtk_tool_item_set_homogeneous(tool_item, homogeneous);
}
gboolean tool_item_get_homogeneous(GtkToolItem* tool_item){
return gtk_tool_item_get_homogeneous(tool_item) ;
}
void tool_item_set_expand(GtkToolItem* tool_item, gboolean expand){
gtk_tool_item_set_expand(tool_item, expand);
}
gboolean tool_item_get_expand(GtkToolItem* tool_item){
return gtk_tool_item_get_expand(tool_item) ;
}
void tool_item_set_tooltip_text(GtkToolItem* tool_item, const gchar* text){
gtk_tool_item_set_tooltip_text(tool_item, text);
}
void tool_item_set_tooltip_markup(GtkToolItem* tool_item, const gchar* markup){
gtk_tool_item_set_tooltip_markup(tool_item, markup);
}
void tool_item_set_use_drag_window(GtkToolItem* tool_item, gboolean use_drag_window){
gtk_tool_item_set_use_drag_window(tool_item, use_drag_window);
}
gboolean tool_item_get_use_drag_window(GtkToolItem* tool_item){
return gtk_tool_item_get_use_drag_window(tool_item) ;
}
void tool_item_set_visible_horizontal(GtkToolItem* tool_item, gboolean visible_horizontal){
gtk_tool_item_set_visible_horizontal(tool_item, visible_horizontal);
}
gboolean tool_item_get_visible_horizontal(GtkToolItem* tool_item){
return gtk_tool_item_get_visible_horizontal(tool_item) ;
}
void tool_item_set_visible_vertical(GtkToolItem* tool_item, gboolean visible_vertical){
gtk_tool_item_set_visible_vertical(tool_item, visible_vertical);
}
gboolean tool_item_get_visible_vertical(GtkToolItem* tool_item){
return gtk_tool_item_get_visible_vertical(tool_item) ;
}
void tool_item_set_is_important(GtkToolItem* tool_item, gboolean is_important){
gtk_tool_item_set_is_important(tool_item, is_important);
}
gboolean tool_item_get_is_important(GtkToolItem* tool_item){
return gtk_tool_item_get_is_important(tool_item) ;
}
PangoEllipsizeMode tool_item_get_ellipsize_mode(GtkToolItem* tool_item){
return gtk_tool_item_get_ellipsize_mode(tool_item) ;
}
GtkIconSize tool_item_get_icon_size(GtkToolItem* tool_item){
return gtk_tool_item_get_icon_size(tool_item) ;
}
GtkOrientation tool_item_get_orientation(GtkToolItem* tool_item){
return gtk_tool_item_get_orientation(tool_item) ;
}
GtkToolbarStyle tool_item_get_toolbar_style(GtkToolItem* tool_item){
return gtk_tool_item_get_toolbar_style(tool_item) ;
}
GtkReliefStyle tool_item_get_relief_style(GtkToolItem* tool_item){
return gtk_tool_item_get_relief_style(tool_item) ;
}
gfloat tool_item_get_text_alignment(GtkToolItem* tool_item){
return gtk_tool_item_get_text_alignment(tool_item) ;
}
GtkOrientation tool_item_get_text_orientation(GtkToolItem* tool_item){
return gtk_tool_item_get_text_orientation(tool_item) ;
}
GtkWidget* tool_item_retrieve_proxy_menu_item(GtkToolItem* tool_item){
return gtk_tool_item_retrieve_proxy_menu_item(tool_item) ;
}
GtkWidget* tool_item_get_proxy_menu_item(GtkToolItem* tool_item, const gchar* menu_item_id){
return gtk_tool_item_get_proxy_menu_item(tool_item, menu_item_id) ;
}
void tool_item_set_proxy_menu_item(GtkToolItem* tool_item, const gchar* menu_item_id, GtkWidget* menu_item){
gtk_tool_item_set_proxy_menu_item(tool_item,menu_item_id, menu_item);
}
void tool_item_rebuild_menu(GtkToolItem* tool_item){
gtk_tool_item_rebuild_menu(tool_item);
}
void tool_item_toolbar_reconfigured(GtkToolItem* tool_item){
gtk_tool_item_toolbar_reconfigured(tool_item);
}
GtkSizeGroup* tool_item_get_text_size_group(GtkToolItem* tool_item){
return gtk_tool_item_get_text_size_group(tool_item) ;
}



GtkWidget* tool_palette_new(){
return gtk_tool_palette_new() ;
}
gboolean tool_palette_get_exclusive(GtkToolPalette* palette, GtkToolItemGroup* group){
return gtk_tool_palette_get_exclusive(palette, group) ;
}
void tool_palette_set_exclusive(GtkToolPalette* palette, GtkToolItemGroup* group, gboolean exclusive){
gtk_tool_palette_set_exclusive(palette,group, exclusive);
}
gboolean tool_palette_get_expand(GtkToolPalette* palette, GtkToolItemGroup* group){
return gtk_tool_palette_get_expand(palette, group) ;
}
void tool_palette_set_expand(GtkToolPalette* palette, GtkToolItemGroup* group, gboolean expand){
gtk_tool_palette_set_expand(palette,group, expand);
}
gint tool_palette_get_group_position(GtkToolPalette* palette, GtkToolItemGroup* group){
return gtk_tool_palette_get_group_position(palette, group) ;
}
void tool_palette_set_group_position(GtkToolPalette* palette, GtkToolItemGroup* group, gint position){
gtk_tool_palette_set_group_position(palette,group, position);
}
GtkIconSize tool_palette_get_icon_size(GtkToolPalette* palette){
return gtk_tool_palette_get_icon_size(palette) ;
}
void tool_palette_set_icon_size(GtkToolPalette* palette, GtkIconSize icon_size){
gtk_tool_palette_set_icon_size(palette, icon_size);
}
void tool_palette_unset_icon_size(GtkToolPalette* palette){
gtk_tool_palette_unset_icon_size(palette);
}
GtkToolbarStyle tool_palette_get_style(GtkToolPalette* palette){
return gtk_tool_palette_get_style(palette) ;
}
void tool_palette_set_style(GtkToolPalette* palette, GtkToolbarStyle style){
gtk_tool_palette_set_style(palette, style);
}
void tool_palette_unset_style(GtkToolPalette* palette){
gtk_tool_palette_unset_style(palette);
}
void tool_palette_add_drag_dest(GtkToolPalette* palette, GtkWidget* widget, GtkDestDefaults flags, GtkToolPaletteDragTargets targets, GdkDragAction actions){
gtk_tool_palette_add_drag_dest(palette,widget,flags,targets, actions);
}
GtkWidget* tool_palette_get_drag_item(GtkToolPalette* palette, const GtkSelectionData* selection){
return gtk_tool_palette_get_drag_item(palette, selection) ;
}
const GtkTargetEntry* tool_palette_get_drag_target_group() {
return gtk_tool_palette_get_drag_target_group() ;
}
const GtkTargetEntry* tool_palette_get_drag_target_item() {
return gtk_tool_palette_get_drag_target_item() ;
}
GtkToolItemGroup* tool_palette_get_drop_group(GtkToolPalette* palette, gint x, gint y){
return gtk_tool_palette_get_drop_group(palette,x, y) ;
}
GtkToolItem* tool_palette_get_drop_item(GtkToolPalette* palette, gint x, gint y){
return gtk_tool_palette_get_drop_item(palette,x, y) ;
}
void tool_palette_set_drag_source(GtkToolPalette* palette, GtkToolPaletteDragTargets targets){
gtk_tool_palette_set_drag_source(palette, targets);
}





gboolean tool_item_group_get_collapsed(GtkToolItemGroup* group){
return gtk_tool_item_group_get_collapsed(group) ;
}
GtkToolItem* tool_item_group_get_drop_item(GtkToolItemGroup* group, gint x, gint y){
return gtk_tool_item_group_get_drop_item(group,x, y) ;
}
PangoEllipsizeMode tool_item_group_get_ellipsize(GtkToolItemGroup* group){
return gtk_tool_item_group_get_ellipsize(group) ;
}
gint tool_item_group_get_item_position(GtkToolItemGroup* group, GtkToolItem* item){
return gtk_tool_item_group_get_item_position(group, item) ;
}
guint tool_item_group_get_n_items(GtkToolItemGroup* group){
return gtk_tool_item_group_get_n_items(group) ;
}
const gchar* tool_item_group_get_label(GtkToolItemGroup* group) {
return gtk_tool_item_group_get_label(group) ;
}
GtkWidget* tool_item_group_get_label_widget(GtkToolItemGroup* group){
return gtk_tool_item_group_get_label_widget(group) ;
}
GtkToolItem* tool_item_group_get_nth_item(GtkToolItemGroup* group, guint index){
return gtk_tool_item_group_get_nth_item(group, index) ;
}
GtkReliefStyle tool_item_group_get_header_relief(GtkToolItemGroup* group){
return gtk_tool_item_group_get_header_relief(group) ;
}
void tool_item_group_insert(GtkToolItemGroup* group, GtkToolItem* item, gint position){
gtk_tool_item_group_insert(group,item, position);
}
GtkWidget* tool_item_group_new(const gchar* label){
return gtk_tool_item_group_new(label) ;
}
void tool_item_group_set_collapsed(GtkToolItemGroup* group, gboolean collapsed){
gtk_tool_item_group_set_collapsed(group, collapsed);
}
void tool_item_group_set_ellipsize(GtkToolItemGroup* group, PangoEllipsizeMode ellipsize){
gtk_tool_item_group_set_ellipsize(group, ellipsize);
}
void tool_item_group_set_item_position(GtkToolItemGroup* group, GtkToolItem* item, gint position){
gtk_tool_item_group_set_item_position(group,item, position);
}
void tool_item_group_set_label(GtkToolItemGroup* group, const gchar* label){
gtk_tool_item_group_set_label(group, label);
}
void tool_item_group_set_label_widget(GtkToolItemGroup* group, GtkWidget* label_widget){
gtk_tool_item_group_set_label_widget(group, label_widget);
}
void tool_item_group_set_header_relief(GtkToolItemGroup* group, GtkReliefStyle style){
gtk_tool_item_group_set_header_relief(group, style);
}



GtkToolItem* separator_tool_item_new(){
return gtk_separator_tool_item_new() ;
}
void separator_tool_item_set_draw(GtkSeparatorToolItem* item, gboolean draw){
gtk_separator_tool_item_set_draw(item, draw);
}
gboolean separator_tool_item_get_draw(GtkSeparatorToolItem* item){
return gtk_separator_tool_item_get_draw(item) ;
}



GtkToolItem* tool_button_new(GtkWidget* icon_widget, const gchar* label){
return gtk_tool_button_new(icon_widget, label) ;
}

void tool_button_set_label(GtkToolButton* button, const gchar* label){
gtk_tool_button_set_label(button, label);
}
const gchar* tool_button_get_label(GtkToolButton* button) {
return gtk_tool_button_get_label(button) ;
}
void tool_button_set_use_underline(GtkToolButton* button, gboolean use_underline){
gtk_tool_button_set_use_underline(button, use_underline);
}
gboolean tool_button_get_use_underline(GtkToolButton* button){
return gtk_tool_button_get_use_underline(button) ;
}



void tool_button_set_icon_name(GtkToolButton* button, const gchar* icon_name){
gtk_tool_button_set_icon_name(button, icon_name);
}
const gchar* tool_button_get_icon_name(GtkToolButton* button) {
return gtk_tool_button_get_icon_name(button) ;
}
void tool_button_set_icon_widget(GtkToolButton* button, GtkWidget* icon_widget){
gtk_tool_button_set_icon_widget(button, icon_widget);
}
GtkWidget* tool_button_get_icon_widget(GtkToolButton* button){
return gtk_tool_button_get_icon_widget(button) ;
}
void tool_button_set_label_widget(GtkToolButton* button, GtkWidget* label_widget){
gtk_tool_button_set_label_widget(button, label_widget);
}
GtkWidget* tool_button_get_label_widget(GtkToolButton* button){
return gtk_tool_button_get_label_widget(button) ;
}



GtkToolItem* menu_tool_button_new(GtkWidget* icon_widget, const gchar* label){
return gtk_menu_tool_button_new(icon_widget, label) ;
}

void menu_tool_button_set_menu(GtkMenuToolButton* button, GtkWidget* menu){
gtk_menu_tool_button_set_menu(button, menu);
}
GtkWidget* menu_tool_button_get_menu(GtkMenuToolButton* button){
return gtk_menu_tool_button_get_menu(button) ;
}
void menu_tool_button_set_arrow_tooltip_text(GtkMenuToolButton* button, const gchar* text){
gtk_menu_tool_button_set_arrow_tooltip_text(button, text);
}
void menu_tool_button_set_arrow_tooltip_markup(GtkMenuToolButton* button, const gchar* markup){
gtk_menu_tool_button_set_arrow_tooltip_markup(button, markup);
}



GtkToolItem* toggle_tool_button_new(){
return gtk_toggle_tool_button_new() ;
}

void toggle_tool_button_set_active(GtkToggleToolButton* button, gboolean is_active){
gtk_toggle_tool_button_set_active(button, is_active);
}
gboolean toggle_tool_button_get_active(GtkToggleToolButton* button){
return gtk_toggle_tool_button_get_active(button) ;
}



GtkToolItem* radio_tool_button_new(GSList* group){
return gtk_radio_tool_button_new(group) ;
}


GtkToolItem* radio_tool_button_new_from_widget(GtkRadioToolButton* group){
return gtk_radio_tool_button_new_from_widget(group) ;
}


GSList* radio_tool_button_get_group(GtkRadioToolButton* button){
return gtk_radio_tool_button_get_group(button) ;
}
void radio_tool_button_set_group(GtkRadioToolButton* button, GSList* group){
gtk_radio_tool_button_set_group(button, group);
}



GtkWidget* popover_new(GtkWidget* relative_to){
return gtk_popover_new(relative_to) ;
}
GtkWidget* popover_new_from_model(GtkWidget* relative_to, GMenuModel* model){
return gtk_popover_new_from_model(relative_to, model) ;
}
void popover_bind_model(GtkPopover* popover, GMenuModel* model, const gchar* action_namespace){
gtk_popover_bind_model(popover,model, action_namespace);
}
void popover_popup(GtkPopover* popover){
gtk_popover_popup(popover);
}
void popover_popdown(GtkPopover* popover){
gtk_popover_popdown(popover);
}
void popover_set_relative_to(GtkPopover* popover, GtkWidget* relative_to){
gtk_popover_set_relative_to(popover, relative_to);
}
GtkWidget* popover_get_relative_to(GtkPopover* popover){
return gtk_popover_get_relative_to(popover) ;
}
void popover_set_pointing_to(GtkPopover* popover, const GdkRectangle* rect){
gtk_popover_set_pointing_to(popover, rect);
}
gboolean popover_get_pointing_to(GtkPopover* popover, GdkRectangle* rect){
return gtk_popover_get_pointing_to(popover, rect) ;
}
void popover_set_position(GtkPopover* popover, GtkPositionType position){
gtk_popover_set_position(popover, position);
}
GtkPositionType popover_get_position(GtkPopover* popover){
return gtk_popover_get_position(popover) ;
}
void popover_set_constrain_to(GtkPopover* popover, GtkPopoverConstraint constraint){
gtk_popover_set_constrain_to(popover, constraint);
}
GtkPopoverConstraint popover_get_constrain_to(GtkPopover* popover){
return gtk_popover_get_constrain_to(popover) ;
}
void popover_set_modal(GtkPopover* popover, gboolean modal){
gtk_popover_set_modal(popover, modal);
}
gboolean popover_get_modal(GtkPopover* popover){
return gtk_popover_get_modal(popover) ;
}



void popover_set_default_widget(GtkPopover* popover, GtkWidget* widget){
gtk_popover_set_default_widget(popover, widget);
}
GtkWidget* popover_get_default_widget(GtkPopover* popover){
return gtk_popover_get_default_widget(popover) ;
}



GtkWidget* popover_menu_new(){
return gtk_popover_menu_new() ;
}
void popover_menu_open_submenu(GtkPopoverMenu* popover, const gchar* name){
gtk_popover_menu_open_submenu(popover, name);
}



void color_chooser_get_rgba(GtkColorChooser* chooser, GdkRGBA* color){
gtk_color_chooser_get_rgba(chooser, color);
}
void color_chooser_set_rgba(GtkColorChooser* chooser, const GdkRGBA* color){
gtk_color_chooser_set_rgba(chooser, color);
}
gboolean color_chooser_get_use_alpha(GtkColorChooser* chooser){
return gtk_color_chooser_get_use_alpha(chooser) ;
}
void color_chooser_set_use_alpha(GtkColorChooser* chooser, gboolean use_alpha){
gtk_color_chooser_set_use_alpha(chooser, use_alpha);
}
void color_chooser_add_palette(GtkColorChooser* chooser, GtkOrientation orientation, gint colors_per_line, gint n_colors, GdkRGBA* colors){
gtk_color_chooser_add_palette(chooser,orientation,colors_per_line,n_colors, colors);
}



GtkWidget* color_button_new(){
return gtk_color_button_new() ;
}

GtkWidget* color_button_new_with_rgba(const GdkRGBA* rgba){
return gtk_color_button_new_with_rgba(rgba) ;
}














void color_button_set_title(GtkColorButton* button, const gchar* title){
gtk_color_button_set_title(button, title);
}
const gchar* color_button_get_title(GtkColorButton* button) {
return gtk_color_button_get_title(button) ;
}



GtkWidget* color_chooser_widget_new(){
return gtk_color_chooser_widget_new() ;
}



GtkWidget* color_chooser_dialog_new(const gchar* title, GtkWindow* parent){
return gtk_color_chooser_dialog_new(title, parent) ;
}



void file_chooser_set_action(GtkFileChooser* chooser, GtkFileChooserAction action){
gtk_file_chooser_set_action(chooser, action);
}
GtkFileChooserAction file_chooser_get_action(GtkFileChooser* chooser){
return gtk_file_chooser_get_action(chooser) ;
}
void file_chooser_set_local_only(GtkFileChooser* chooser, gboolean local_only){
gtk_file_chooser_set_local_only(chooser, local_only);
}
gboolean file_chooser_get_local_only(GtkFileChooser* chooser){
return gtk_file_chooser_get_local_only(chooser) ;
}
void file_chooser_set_select_multiple(GtkFileChooser* chooser, gboolean select_multiple){
gtk_file_chooser_set_select_multiple(chooser, select_multiple);
}
gboolean file_chooser_get_select_multiple(GtkFileChooser* chooser){
return gtk_file_chooser_get_select_multiple(chooser) ;
}
void file_chooser_set_show_hidden(GtkFileChooser* chooser, gboolean show_hidden){
gtk_file_chooser_set_show_hidden(chooser, show_hidden);
}
gboolean file_chooser_get_show_hidden(GtkFileChooser* chooser){
return gtk_file_chooser_get_show_hidden(chooser) ;
}
void file_chooser_set_do_overwrite_confirmation(GtkFileChooser* chooser, gboolean do_overwrite_confirmation){
gtk_file_chooser_set_do_overwrite_confirmation(chooser, do_overwrite_confirmation);
}
gboolean file_chooser_get_do_overwrite_confirmation(GtkFileChooser* chooser){
return gtk_file_chooser_get_do_overwrite_confirmation(chooser) ;
}
void file_chooser_set_create_folders(GtkFileChooser* chooser, gboolean create_folders){
gtk_file_chooser_set_create_folders(chooser, create_folders);
}
gboolean file_chooser_get_create_folders(GtkFileChooser* chooser){
return gtk_file_chooser_get_create_folders(chooser) ;
}
void file_chooser_set_current_name(GtkFileChooser* chooser, const gchar* name){
gtk_file_chooser_set_current_name(chooser, name);
}
gchar* file_chooser_get_current_name(GtkFileChooser* chooser){
return gtk_file_chooser_get_current_name(chooser) ;
}
gchar* file_chooser_get_filename(GtkFileChooser* chooser){
return gtk_file_chooser_get_filename(chooser) ;
}
gboolean file_chooser_set_filename(GtkFileChooser* chooser, const char* filename){
return gtk_file_chooser_set_filename(chooser, filename) ;
}
gboolean file_chooser_select_filename(GtkFileChooser* chooser, const char* filename){
return gtk_file_chooser_select_filename(chooser, filename) ;
}
void file_chooser_unselect_filename(GtkFileChooser* chooser, const char* filename){
gtk_file_chooser_unselect_filename(chooser, filename);
}
void file_chooser_select_all(GtkFileChooser* chooser){
gtk_file_chooser_select_all(chooser);
}
void file_chooser_unselect_all(GtkFileChooser* chooser){
gtk_file_chooser_unselect_all(chooser);
}
GSList* file_chooser_get_filenames(GtkFileChooser* chooser){
return gtk_file_chooser_get_filenames(chooser) ;
}
gboolean file_chooser_set_current_folder(GtkFileChooser* chooser, const gchar* filename){
return gtk_file_chooser_set_current_folder(chooser, filename) ;
}
gchar* file_chooser_get_current_folder(GtkFileChooser* chooser){
return gtk_file_chooser_get_current_folder(chooser) ;
}
gchar* file_chooser_get_uri(GtkFileChooser* chooser){
return gtk_file_chooser_get_uri(chooser) ;
}
gboolean file_chooser_set_uri(GtkFileChooser* chooser, const char* uri){
return gtk_file_chooser_set_uri(chooser, uri) ;
}
gboolean file_chooser_select_uri(GtkFileChooser* chooser, const char* uri){
return gtk_file_chooser_select_uri(chooser, uri) ;
}
void file_chooser_unselect_uri(GtkFileChooser* chooser, const char* uri){
gtk_file_chooser_unselect_uri(chooser, uri);
}
GSList* file_chooser_get_uris(GtkFileChooser* chooser){
return gtk_file_chooser_get_uris(chooser) ;
}
gboolean file_chooser_set_current_folder_uri(GtkFileChooser* chooser, const gchar* uri){
return gtk_file_chooser_set_current_folder_uri(chooser, uri) ;
}
gchar* file_chooser_get_current_folder_uri(GtkFileChooser* chooser){
return gtk_file_chooser_get_current_folder_uri(chooser) ;
}
void file_chooser_set_preview_widget(GtkFileChooser* chooser, GtkWidget* preview_widget){
gtk_file_chooser_set_preview_widget(chooser, preview_widget);
}
GtkWidget* file_chooser_get_preview_widget(GtkFileChooser* chooser){
return gtk_file_chooser_get_preview_widget(chooser) ;
}
void file_chooser_set_preview_widget_active(GtkFileChooser* chooser, gboolean active){
gtk_file_chooser_set_preview_widget_active(chooser, active);
}
gboolean file_chooser_get_preview_widget_active(GtkFileChooser* chooser){
return gtk_file_chooser_get_preview_widget_active(chooser) ;
}
void file_chooser_set_use_preview_label(GtkFileChooser* chooser, gboolean use_label){
gtk_file_chooser_set_use_preview_label(chooser, use_label);
}
gboolean file_chooser_get_use_preview_label(GtkFileChooser* chooser){
return gtk_file_chooser_get_use_preview_label(chooser) ;
}
char* file_chooser_get_preview_filename(GtkFileChooser* chooser){
return gtk_file_chooser_get_preview_filename(chooser) ;
}
char* file_chooser_get_preview_uri(GtkFileChooser* chooser){
return gtk_file_chooser_get_preview_uri(chooser) ;
}
void file_chooser_set_extra_widget(GtkFileChooser* chooser, GtkWidget* extra_widget){
gtk_file_chooser_set_extra_widget(chooser, extra_widget);
}
GtkWidget* file_chooser_get_extra_widget(GtkFileChooser* chooser){
return gtk_file_chooser_get_extra_widget(chooser) ;
}
void file_chooser_add_choice(GtkFileChooser* chooser, const char* id, const char* label, const char** options, const char** option_labels){
gtk_file_chooser_add_choice(chooser,id,label,options, option_labels);
}
void file_chooser_remove_choice(GtkFileChooser* chooser, const char* id){
gtk_file_chooser_remove_choice(chooser, id);
}
void file_chooser_set_choice(GtkFileChooser* chooser, const char* id, const char* option){
gtk_file_chooser_set_choice(chooser,id, option);
}
const char* file_chooser_get_choice(GtkFileChooser* chooser, const char* id) {
return gtk_file_chooser_get_choice(chooser, id) ;
}
void file_chooser_add_filter(GtkFileChooser* chooser, GtkFileFilter* filter){
gtk_file_chooser_add_filter(chooser, filter);
}
void file_chooser_remove_filter(GtkFileChooser* chooser, GtkFileFilter* filter){
gtk_file_chooser_remove_filter(chooser, filter);
}
GSList* file_chooser_list_filters(GtkFileChooser* chooser){
return gtk_file_chooser_list_filters(chooser) ;
}
void file_chooser_set_filter(GtkFileChooser* chooser, GtkFileFilter* filter){
gtk_file_chooser_set_filter(chooser, filter);
}
GtkFileFilter* file_chooser_get_filter(GtkFileChooser* chooser){
return gtk_file_chooser_get_filter(chooser) ;
}
gboolean file_chooser_add_shortcut_folder(GtkFileChooser* chooser, const char* folder, GError** error){
return gtk_file_chooser_add_shortcut_folder(chooser,folder, error) ;
}
gboolean file_chooser_remove_shortcut_folder(GtkFileChooser* chooser, const char* folder, GError** error){
return gtk_file_chooser_remove_shortcut_folder(chooser,folder, error) ;
}
GSList* file_chooser_list_shortcut_folders(GtkFileChooser* chooser){
return gtk_file_chooser_list_shortcut_folders(chooser) ;
}
gboolean file_chooser_add_shortcut_folder_uri(GtkFileChooser* chooser, const char* uri, GError** error){
return gtk_file_chooser_add_shortcut_folder_uri(chooser,uri, error) ;
}
gboolean file_chooser_remove_shortcut_folder_uri(GtkFileChooser* chooser, const char* uri, GError** error){
return gtk_file_chooser_remove_shortcut_folder_uri(chooser,uri, error) ;
}
GSList* file_chooser_list_shortcut_folder_uris(GtkFileChooser* chooser){
return gtk_file_chooser_list_shortcut_folder_uris(chooser) ;
}
GFile* file_chooser_get_current_folder_file(GtkFileChooser* chooser){
return gtk_file_chooser_get_current_folder_file(chooser) ;
}
GFile* file_chooser_get_file(GtkFileChooser* chooser){
return gtk_file_chooser_get_file(chooser) ;
}
GSList* file_chooser_get_files(GtkFileChooser* chooser){
return gtk_file_chooser_get_files(chooser) ;
}
GFile* file_chooser_get_preview_file(GtkFileChooser* chooser){
return gtk_file_chooser_get_preview_file(chooser) ;
}
gboolean file_chooser_select_file(GtkFileChooser* chooser, GFile* file, GError** error){
return gtk_file_chooser_select_file(chooser,file, error) ;
}
gboolean file_chooser_set_current_folder_file(GtkFileChooser* chooser, GFile* file, GError** error){
return gtk_file_chooser_set_current_folder_file(chooser,file, error) ;
}
gboolean file_chooser_set_file(GtkFileChooser* chooser, GFile* file, GError** error){
return gtk_file_chooser_set_file(chooser,file, error) ;
}
void file_chooser_unselect_file(GtkFileChooser* chooser, GFile* file){
gtk_file_chooser_unselect_file(chooser, file);
}



GtkWidget* file_chooser_button_new(const gchar* title, GtkFileChooserAction action){
return gtk_file_chooser_button_new(title, action) ;
}
GtkWidget* file_chooser_button_new_with_dialog(GtkWidget* dialog){
return gtk_file_chooser_button_new_with_dialog(dialog) ;
}
const gchar* file_chooser_button_get_title(GtkFileChooserButton* button) {
return gtk_file_chooser_button_get_title(button) ;
}
void file_chooser_button_set_title(GtkFileChooserButton* button, const gchar* title){
gtk_file_chooser_button_set_title(button, title);
}
gint file_chooser_button_get_width_chars(GtkFileChooserButton* button){
return gtk_file_chooser_button_get_width_chars(button) ;
}
void file_chooser_button_set_width_chars(GtkFileChooserButton* button, gint n_chars){
gtk_file_chooser_button_set_width_chars(button, n_chars);
}






GtkFileChooserNative* file_chooser_native_new(const gchar* title, GtkWindow* parent, GtkFileChooserAction action, const gchar* accept_label, const gchar* cancel_label){
return gtk_file_chooser_native_new(title,parent,action,accept_label, cancel_label) ;
}
const char* file_chooser_native_get_accept_label(GtkFileChooserNative* self) {
return gtk_file_chooser_native_get_accept_label(self) ;
}
void file_chooser_native_set_accept_label(GtkFileChooserNative* self, const char* accept_label){
gtk_file_chooser_native_set_accept_label(self, accept_label);
}
const char* file_chooser_native_get_cancel_label(GtkFileChooserNative* self) {
return gtk_file_chooser_native_get_cancel_label(self) ;
}
void file_chooser_native_set_cancel_label(GtkFileChooserNative* self, const char* cancel_label){
gtk_file_chooser_native_set_cancel_label(self, cancel_label);
}



template <typename... ID>
GtkWidget* file_chooser_dialog_new(const gchar* title, GtkWindow* parent, GtkFileChooserAction action, const gchar* first_button_text, ID... response_id){
return (gtk_file_chooser_dialog_new(title,parent,action,first_button_text,response_id), ...) ;
}



GtkWidget* file_chooser_widget_new(GtkFileChooserAction action){
return gtk_file_chooser_widget_new(action) ;
}






GtkFileFilter* file_filter_new(){
return gtk_file_filter_new() ;
}
void file_filter_set_name(GtkFileFilter* filter, const gchar* name){
gtk_file_filter_set_name(filter, name);
}
const gchar* file_filter_get_name(GtkFileFilter* filter) {
return gtk_file_filter_get_name(filter) ;
}
void file_filter_add_mime_type(GtkFileFilter* filter, const gchar* mime_type){
gtk_file_filter_add_mime_type(filter, mime_type);
}
void file_filter_add_pattern(GtkFileFilter* filter, const gchar* pattern){
gtk_file_filter_add_pattern(filter, pattern);
}
void file_filter_add_pixbuf_formats(GtkFileFilter* filter){
gtk_file_filter_add_pixbuf_formats(filter);
}
void file_filter_add_custom(GtkFileFilter* filter, GtkFileFilterFlags needed, GtkFileFilterFunc func, gpointer data, GDestroyNotify notify){
gtk_file_filter_add_custom(filter,needed,func,data, notify);
}
GtkFileFilterFlags file_filter_get_needed(GtkFileFilter* filter){
return gtk_file_filter_get_needed(filter) ;
}
gboolean file_filter_filter(GtkFileFilter* filter, const GtkFileFilterInfo* filter_info){
return gtk_file_filter_filter(filter, filter_info) ;
}
GtkFileFilter* file_filter_new_from_gvariant(GVariant* variant){
return gtk_file_filter_new_from_gvariant(variant) ;
}
GVariant* file_filter_to_gvariant(GtkFileFilter* filter){
return gtk_file_filter_to_gvariant(filter) ;
}



PangoFontFamily* font_chooser_get_font_family(GtkFontChooser* fontchooser){
return gtk_font_chooser_get_font_family(fontchooser) ;
}
PangoFontFace* font_chooser_get_font_face(GtkFontChooser* fontchooser){
return gtk_font_chooser_get_font_face(fontchooser) ;
}
gint font_chooser_get_font_size(GtkFontChooser* fontchooser){
return gtk_font_chooser_get_font_size(fontchooser) ;
}
gchar* font_chooser_get_font(GtkFontChooser* fontchooser){
return gtk_font_chooser_get_font(fontchooser) ;
}
void font_chooser_set_font(GtkFontChooser* fontchooser, const gchar* fontname){
gtk_font_chooser_set_font(fontchooser, fontname);
}
PangoFontDescription* font_chooser_get_font_desc(GtkFontChooser* fontchooser){
return gtk_font_chooser_get_font_desc(fontchooser) ;
}
void font_chooser_set_font_desc(GtkFontChooser* fontchooser, const PangoFontDescription* font_desc){
gtk_font_chooser_set_font_desc(fontchooser, font_desc);
}
gchar* font_chooser_get_preview_text(GtkFontChooser* fontchooser){
return gtk_font_chooser_get_preview_text(fontchooser) ;
}
void font_chooser_set_preview_text(GtkFontChooser* fontchooser, const gchar* text){
gtk_font_chooser_set_preview_text(fontchooser, text);
}
gboolean font_chooser_get_show_preview_entry(GtkFontChooser* fontchooser){
return gtk_font_chooser_get_show_preview_entry(fontchooser) ;
}
void font_chooser_set_show_preview_entry(GtkFontChooser* fontchooser, gboolean show_preview_entry){
gtk_font_chooser_set_show_preview_entry(fontchooser, show_preview_entry);
}




void font_chooser_set_filter_func(GtkFontChooser* fontchooser, GtkFontFilterFunc filter, gpointer user_data, GDestroyNotify destroy){
gtk_font_chooser_set_filter_func(fontchooser,filter,user_data, destroy);
}
void font_chooser_set_font_map(GtkFontChooser* fontchooser, PangoFontMap* fontmap){
gtk_font_chooser_set_font_map(fontchooser, fontmap);
}
PangoFontMap* font_chooser_get_font_map(GtkFontChooser* fontchooser){
return gtk_font_chooser_get_font_map(fontchooser) ;
}
void font_chooser_set_level(GtkFontChooser* fontchooser, GtkFontChooserLevel level){
gtk_font_chooser_set_level(fontchooser, level);
}
GtkFontChooserLevel font_chooser_get_level(GtkFontChooser* fontchooser){
return gtk_font_chooser_get_level(fontchooser) ;
}
char* font_chooser_get_font_features(GtkFontChooser* fontchooser){
return gtk_font_chooser_get_font_features(fontchooser) ;
}
void font_chooser_set_language(GtkFontChooser* fontchooser, const char* language){
gtk_font_chooser_set_language(fontchooser, language);
}
char* font_chooser_get_language(GtkFontChooser* fontchooser){
return gtk_font_chooser_get_language(fontchooser) ;
}



GtkWidget* font_button_new(){
return gtk_font_button_new() ;
}
GtkWidget* font_button_new_with_font(const gchar* fontname){
return gtk_font_button_new_with_font(fontname) ;
}



void font_button_set_show_style(GtkFontButton* font_button, gboolean show_style){
gtk_font_button_set_show_style(font_button, show_style);
}
gboolean font_button_get_show_style(GtkFontButton* font_button){
return gtk_font_button_get_show_style(font_button) ;
}
void font_button_set_show_size(GtkFontButton* font_button, gboolean show_size){
gtk_font_button_set_show_size(font_button, show_size);
}
gboolean font_button_get_show_size(GtkFontButton* font_button){
return gtk_font_button_get_show_size(font_button) ;
}
void font_button_set_use_font(GtkFontButton* font_button, gboolean use_font){
gtk_font_button_set_use_font(font_button, use_font);
}
gboolean font_button_get_use_font(GtkFontButton* font_button){
return gtk_font_button_get_use_font(font_button) ;
}
void font_button_set_use_size(GtkFontButton* font_button, gboolean use_size){
gtk_font_button_set_use_size(font_button, use_size);
}
gboolean font_button_get_use_size(GtkFontButton* font_button){
return gtk_font_button_get_use_size(font_button) ;
}
void font_button_set_title(GtkFontButton* font_button, const gchar* title){
gtk_font_button_set_title(font_button, title);
}
const gchar* font_button_get_title(GtkFontButton* font_button) {
return gtk_font_button_get_title(font_button) ;
}



GtkWidget* font_chooser_widget_new(){
return gtk_font_chooser_widget_new() ;
}



GtkWidget* font_chooser_dialog_new(const gchar* title, GtkWindow* parent){
return gtk_font_chooser_dialog_new(title, parent) ;
}



GtkWidget* places_sidebar_new(){
return gtk_places_sidebar_new() ;
}
void places_sidebar_set_open_flags(GtkPlacesSidebar* sidebar, GtkPlacesOpenFlags flags){
gtk_places_sidebar_set_open_flags(sidebar, flags);
}
GtkPlacesOpenFlags places_sidebar_get_open_flags(GtkPlacesSidebar* sidebar){
return gtk_places_sidebar_get_open_flags(sidebar) ;
}
void places_sidebar_set_location(GtkPlacesSidebar* sidebar, GFile* location){
gtk_places_sidebar_set_location(sidebar, location);
}
GFile* places_sidebar_get_location(GtkPlacesSidebar* sidebar){
return gtk_places_sidebar_get_location(sidebar) ;
}
void places_sidebar_set_show_recent(GtkPlacesSidebar* sidebar, gboolean show_recent){
gtk_places_sidebar_set_show_recent(sidebar, show_recent);
}
gboolean places_sidebar_get_show_recent(GtkPlacesSidebar* sidebar){
return gtk_places_sidebar_get_show_recent(sidebar) ;
}
void places_sidebar_set_show_desktop(GtkPlacesSidebar* sidebar, gboolean show_desktop){
gtk_places_sidebar_set_show_desktop(sidebar, show_desktop);
}
gboolean places_sidebar_get_show_desktop(GtkPlacesSidebar* sidebar){
return gtk_places_sidebar_get_show_desktop(sidebar) ;
}
void places_sidebar_add_shortcut(GtkPlacesSidebar* sidebar, GFile* location){
gtk_places_sidebar_add_shortcut(sidebar, location);
}
void places_sidebar_remove_shortcut(GtkPlacesSidebar* sidebar, GFile* location){
gtk_places_sidebar_remove_shortcut(sidebar, location);
}
GSList* places_sidebar_list_shortcuts(GtkPlacesSidebar* sidebar){
return gtk_places_sidebar_list_shortcuts(sidebar) ;
}
GFile* places_sidebar_get_nth_bookmark(GtkPlacesSidebar* sidebar, gint n){
return gtk_places_sidebar_get_nth_bookmark(sidebar, n) ;
}



gboolean places_sidebar_get_local_only(GtkPlacesSidebar* sidebar){
return gtk_places_sidebar_get_local_only(sidebar) ;
}
void places_sidebar_set_local_only(GtkPlacesSidebar* sidebar, gboolean local_only){
gtk_places_sidebar_set_local_only(sidebar, local_only);
}
gboolean places_sidebar_get_show_enter_location(GtkPlacesSidebar* sidebar){
return gtk_places_sidebar_get_show_enter_location(sidebar) ;
}
void places_sidebar_set_show_enter_location(GtkPlacesSidebar* sidebar, gboolean show_enter_location){
gtk_places_sidebar_set_show_enter_location(sidebar, show_enter_location);
}
gboolean places_sidebar_get_show_trash(GtkPlacesSidebar* sidebar){
return gtk_places_sidebar_get_show_trash(sidebar) ;
}
void places_sidebar_set_show_trash(GtkPlacesSidebar* sidebar, gboolean show_trash){
gtk_places_sidebar_set_show_trash(sidebar, show_trash);
}
gboolean places_sidebar_get_show_other_locations(GtkPlacesSidebar* sidebar){
return gtk_places_sidebar_get_show_other_locations(sidebar) ;
}
void places_sidebar_set_show_other_locations(GtkPlacesSidebar* sidebar, gboolean show_other_locations){
gtk_places_sidebar_set_show_other_locations(sidebar, show_other_locations);
}
void places_sidebar_set_drop_targets_visible(GtkPlacesSidebar* sidebar, gboolean visible, GdkDragContext* context){
gtk_places_sidebar_set_drop_targets_visible(sidebar,visible, context);
}



GtkWidget* frame_new(const gchar* label){
return gtk_frame_new(label) ;
}
void frame_set_label(GtkFrame* frame, const gchar* label){
gtk_frame_set_label(frame, label);
}
void frame_set_label_widget(GtkFrame* frame, GtkWidget* label_widget){
gtk_frame_set_label_widget(frame, label_widget);
}
void frame_set_label_align(GtkFrame* frame, gfloat xalign, gfloat yalign){
gtk_frame_set_label_align(frame,xalign, yalign);
}
void frame_set_shadow_type(GtkFrame* frame, GtkShadowType type){
gtk_frame_set_shadow_type(frame, type);
}
const gchar* frame_get_label(GtkFrame* frame) {
return gtk_frame_get_label(frame) ;
}
void frame_get_label_align(GtkFrame* frame, gfloat* xalign, gfloat* yalign){
gtk_frame_get_label_align(frame,xalign, yalign);
}
GtkWidget* frame_get_label_widget(GtkFrame* frame){
return gtk_frame_get_label_widget(frame) ;
}
GtkShadowType frame_get_shadow_type(GtkFrame* frame){
return gtk_frame_get_shadow_type(frame) ;
}



GtkWidget* separator_new(GtkOrientation orientation){
return gtk_separator_new(orientation) ;
}



GtkWidget* scrollbar_new(GtkOrientation orientation, GtkAdjustment* adjustment){
return gtk_scrollbar_new(orientation, adjustment) ;
}



GtkWidget* scrolled_window_new(GtkAdjustment* hadjustment, GtkAdjustment* vadjustment){
return gtk_scrolled_window_new(hadjustment, vadjustment) ;
}
GtkAdjustment* scrolled_window_get_hadjustment(GtkScrolledWindow* scrolled_window){
return gtk_scrolled_window_get_hadjustment(scrolled_window) ;
}
void scrolled_window_set_hadjustment(GtkScrolledWindow* scrolled_window, GtkAdjustment* hadjustment){
gtk_scrolled_window_set_hadjustment(scrolled_window, hadjustment);
}
GtkAdjustment* scrolled_window_get_vadjustment(GtkScrolledWindow* scrolled_window){
return gtk_scrolled_window_get_vadjustment(scrolled_window) ;
}
void scrolled_window_set_vadjustment(GtkScrolledWindow* scrolled_window, GtkAdjustment* vadjustment){
gtk_scrolled_window_set_vadjustment(scrolled_window, vadjustment);
}
GtkWidget* scrolled_window_get_hscrollbar(GtkScrolledWindow* scrolled_window){
return gtk_scrolled_window_get_hscrollbar(scrolled_window) ;
}
GtkWidget* scrolled_window_get_vscrollbar(GtkScrolledWindow* scrolled_window){
return gtk_scrolled_window_get_vscrollbar(scrolled_window) ;
}
void scrolled_window_get_policy(GtkScrolledWindow* scrolled_window, GtkPolicyType* hscrollbar_policy, GtkPolicyType* vscrollbar_policy){
gtk_scrolled_window_get_policy(scrolled_window,hscrollbar_policy, vscrollbar_policy);
}
void scrolled_window_set_policy(GtkScrolledWindow* scrolled_window, GtkPolicyType hscrollbar_policy, GtkPolicyType vscrollbar_policy){
gtk_scrolled_window_set_policy(scrolled_window,hscrollbar_policy, vscrollbar_policy);
}


GtkCornerType scrolled_window_get_placement(GtkScrolledWindow* scrolled_window){
return gtk_scrolled_window_get_placement(scrolled_window) ;
}
void scrolled_window_set_placement(GtkScrolledWindow* scrolled_window, GtkCornerType window_placement){
gtk_scrolled_window_set_placement(scrolled_window, window_placement);
}
void scrolled_window_unset_placement(GtkScrolledWindow* scrolled_window){
gtk_scrolled_window_unset_placement(scrolled_window);
}
GtkShadowType scrolled_window_get_shadow_type(GtkScrolledWindow* scrolled_window){
return gtk_scrolled_window_get_shadow_type(scrolled_window) ;
}
void scrolled_window_set_shadow_type(GtkScrolledWindow* scrolled_window, GtkShadowType type){
gtk_scrolled_window_set_shadow_type(scrolled_window, type);
}
gboolean scrolled_window_get_kinetic_scrolling(GtkScrolledWindow* scrolled_window){
return gtk_scrolled_window_get_kinetic_scrolling(scrolled_window) ;
}
void scrolled_window_set_kinetic_scrolling(GtkScrolledWindow* scrolled_window, gboolean kinetic_scrolling){
gtk_scrolled_window_set_kinetic_scrolling(scrolled_window, kinetic_scrolling);
}
gboolean scrolled_window_get_capture_button_press(GtkScrolledWindow* scrolled_window){
return gtk_scrolled_window_get_capture_button_press(scrolled_window) ;
}
void scrolled_window_set_capture_button_press(GtkScrolledWindow* scrolled_window, gboolean capture_button_press){
gtk_scrolled_window_set_capture_button_press(scrolled_window, capture_button_press);
}
gboolean scrolled_window_get_overlay_scrolling(GtkScrolledWindow* scrolled_window){
return gtk_scrolled_window_get_overlay_scrolling(scrolled_window) ;
}
void scrolled_window_set_overlay_scrolling(GtkScrolledWindow* scrolled_window, gboolean overlay_scrolling){
gtk_scrolled_window_set_overlay_scrolling(scrolled_window, overlay_scrolling);
}
gint scrolled_window_get_min_content_width(GtkScrolledWindow* scrolled_window){
return gtk_scrolled_window_get_min_content_width(scrolled_window) ;
}
void scrolled_window_set_min_content_width(GtkScrolledWindow* scrolled_window, gint width){
gtk_scrolled_window_set_min_content_width(scrolled_window, width);
}
gint scrolled_window_get_min_content_height(GtkScrolledWindow* scrolled_window){
return gtk_scrolled_window_get_min_content_height(scrolled_window) ;
}
void scrolled_window_set_min_content_height(GtkScrolledWindow* scrolled_window, gint height){
gtk_scrolled_window_set_min_content_height(scrolled_window, height);
}
gint scrolled_window_get_max_content_width(GtkScrolledWindow* scrolled_window){
return gtk_scrolled_window_get_max_content_width(scrolled_window) ;
}
void scrolled_window_set_max_content_width(GtkScrolledWindow* scrolled_window, gint width){
gtk_scrolled_window_set_max_content_width(scrolled_window, width);
}
gint scrolled_window_get_max_content_height(GtkScrolledWindow* scrolled_window){
return gtk_scrolled_window_get_max_content_height(scrolled_window) ;
}
void scrolled_window_set_max_content_height(GtkScrolledWindow* scrolled_window, gint height){
gtk_scrolled_window_set_max_content_height(scrolled_window, height);
}
gboolean scrolled_window_get_propagate_natural_width(GtkScrolledWindow* scrolled_window){
return gtk_scrolled_window_get_propagate_natural_width(scrolled_window) ;
}
void scrolled_window_set_propagate_natural_width(GtkScrolledWindow* scrolled_window, gboolean propagate){
gtk_scrolled_window_set_propagate_natural_width(scrolled_window, propagate);
}
gboolean scrolled_window_get_propagate_natural_height(GtkScrolledWindow* scrolled_window){
return gtk_scrolled_window_get_propagate_natural_height(scrolled_window) ;
}
void scrolled_window_set_propagate_natural_height(GtkScrolledWindow* scrolled_window, gboolean propagate){
gtk_scrolled_window_set_propagate_natural_height(scrolled_window, propagate);
}



GtkAdjustment* scrollable_get_hadjustment(GtkScrollable* scrollable){
return gtk_scrollable_get_hadjustment(scrollable) ;
}
void scrollable_set_hadjustment(GtkScrollable* scrollable, GtkAdjustment* hadjustment){
gtk_scrollable_set_hadjustment(scrollable, hadjustment);
}
GtkAdjustment* scrollable_get_vadjustment(GtkScrollable* scrollable){
return gtk_scrollable_get_vadjustment(scrollable) ;
}
void scrollable_set_vadjustment(GtkScrollable* scrollable, GtkAdjustment* vadjustment){
gtk_scrollable_set_vadjustment(scrollable, vadjustment);
}
GtkScrollablePolicy scrollable_get_hscroll_policy(GtkScrollable* scrollable){
return gtk_scrollable_get_hscroll_policy(scrollable) ;
}
void scrollable_set_hscroll_policy(GtkScrollable* scrollable, GtkScrollablePolicy policy){
gtk_scrollable_set_hscroll_policy(scrollable, policy);
}
GtkScrollablePolicy scrollable_get_vscroll_policy(GtkScrollable* scrollable){
return gtk_scrollable_get_vscroll_policy(scrollable) ;
}
void scrollable_set_vscroll_policy(GtkScrollable* scrollable, GtkScrollablePolicy policy){
gtk_scrollable_set_vscroll_policy(scrollable, policy);
}
gboolean scrollable_get_border(GtkScrollable* scrollable, GtkBorder* border){
return gtk_scrollable_get_border(scrollable, border) ;
}



GtkPrintOperation* print_operation_new(){
return gtk_print_operation_new() ;
}
void print_operation_set_allow_async(GtkPrintOperation* op, gboolean allow_async){
gtk_print_operation_set_allow_async(op, allow_async);
}
void print_operation_get_error(GtkPrintOperation* op, GError** error){
gtk_print_operation_get_error(op, error);
}
void print_operation_set_default_page_setup(GtkPrintOperation* op, GtkPageSetup* default_page_setup){
gtk_print_operation_set_default_page_setup(op, default_page_setup);
}
GtkPageSetup* print_operation_get_default_page_setup(GtkPrintOperation* op){
return gtk_print_operation_get_default_page_setup(op) ;
}
void print_operation_set_print_settings(GtkPrintOperation* op, GtkPrintSettings* print_settings){
gtk_print_operation_set_print_settings(op, print_settings);
}
GtkPrintSettings* print_operation_get_print_settings(GtkPrintOperation* op){
return gtk_print_operation_get_print_settings(op) ;
}
void print_operation_set_job_name(GtkPrintOperation* op, const gchar* job_name){
gtk_print_operation_set_job_name(op, job_name);
}
void print_operation_set_n_pages(GtkPrintOperation* op, gint n_pages){
gtk_print_operation_set_n_pages(op, n_pages);
}
gint print_operation_get_n_pages_to_print(GtkPrintOperation* op){
return gtk_print_operation_get_n_pages_to_print(op) ;
}
void print_operation_set_current_page(GtkPrintOperation* op, gint current_page){
gtk_print_operation_set_current_page(op, current_page);
}
void print_operation_set_use_full_page(GtkPrintOperation* op, gboolean full_page){
gtk_print_operation_set_use_full_page(op, full_page);
}
void print_operation_set_unit(GtkPrintOperation* op, GtkUnit unit){
gtk_print_operation_set_unit(op, unit);
}
void print_operation_set_export_filename(GtkPrintOperation* op, const gchar* filename){
gtk_print_operation_set_export_filename(op, filename);
}
void print_operation_set_show_progress(GtkPrintOperation* op, gboolean show_progress){
gtk_print_operation_set_show_progress(op, show_progress);
}
void print_operation_set_track_print_status(GtkPrintOperation* op, gboolean track_status){
gtk_print_operation_set_track_print_status(op, track_status);
}
void print_operation_set_custom_tab_label(GtkPrintOperation* op, const gchar* label){
gtk_print_operation_set_custom_tab_label(op, label);
}
GtkPrintOperationResult print_operation_run(GtkPrintOperation* op, GtkPrintOperationAction action, GtkWindow* parent, GError** error){
return gtk_print_operation_run(op,action,parent, error) ;
}
void print_operation_cancel(GtkPrintOperation* op){
gtk_print_operation_cancel(op);
}
void print_operation_draw_page_finish(GtkPrintOperation* op){
gtk_print_operation_draw_page_finish(op);
}
void print_operation_set_defer_drawing(GtkPrintOperation* op){
gtk_print_operation_set_defer_drawing(op);
}
GtkPrintStatus print_operation_get_status(GtkPrintOperation* op){
return gtk_print_operation_get_status(op) ;
}
const gchar* print_operation_get_status_string(GtkPrintOperation* op) {
return gtk_print_operation_get_status_string(op) ;
}
gboolean print_operation_is_finished(GtkPrintOperation* op){
return gtk_print_operation_is_finished(op) ;
}
void print_operation_set_support_selection(GtkPrintOperation* op, gboolean support_selection){
gtk_print_operation_set_support_selection(op, support_selection);
}
gboolean print_operation_get_support_selection(GtkPrintOperation* op){
return gtk_print_operation_get_support_selection(op) ;
}
void print_operation_set_has_selection(GtkPrintOperation* op, gboolean has_selection){
gtk_print_operation_set_has_selection(op, has_selection);
}
gboolean print_operation_get_has_selection(GtkPrintOperation* op){
return gtk_print_operation_get_has_selection(op) ;
}
void print_operation_set_embed_page_setup(GtkPrintOperation* op, gboolean embed){
gtk_print_operation_set_embed_page_setup(op, embed);
}
gboolean print_operation_get_embed_page_setup(GtkPrintOperation* op){
return gtk_print_operation_get_embed_page_setup(op) ;
}
GtkPageSetup* print_run_page_setup_dialog(GtkWindow* parent, GtkPageSetup* page_setup, GtkPrintSettings* settings){
return gtk_print_run_page_setup_dialog(parent,page_setup, settings) ;
}



void print_run_page_setup_dialog_async(GtkWindow* parent, GtkPageSetup* page_setup, GtkPrintSettings* settings, GtkPageSetupDoneFunc done_cb, gpointer data){
gtk_print_run_page_setup_dialog_async(parent,page_setup,settings,done_cb, data);
}
void print_operation_preview_end_preview(GtkPrintOperationPreview* preview){
gtk_print_operation_preview_end_preview(preview);
}
gboolean print_operation_preview_is_selected(GtkPrintOperationPreview* preview, gint page_nr){
return gtk_print_operation_preview_is_selected(preview, page_nr) ;
}
void print_operation_preview_render_page(GtkPrintOperationPreview* preview, gint page_nr){
gtk_print_operation_preview_render_page(preview, page_nr);
}



cairo_t* print_context_get_cairo_context(GtkPrintContext* context){
return gtk_print_context_get_cairo_context(context) ;
}
void print_context_set_cairo_context(GtkPrintContext* context, cairo_t* cr, double dpi_x, double dpi_y){
gtk_print_context_set_cairo_context(context,cr,dpi_x, dpi_y);
}
GtkPageSetup* print_context_get_page_setup(GtkPrintContext* context){
return gtk_print_context_get_page_setup(context) ;
}
gdouble print_context_get_width(GtkPrintContext* context){
return gtk_print_context_get_width(context) ;
}
gdouble print_context_get_height(GtkPrintContext* context){
return gtk_print_context_get_height(context) ;
}
gdouble print_context_get_dpi_x(GtkPrintContext* context){
return gtk_print_context_get_dpi_x(context) ;
}
gdouble print_context_get_dpi_y(GtkPrintContext* context){
return gtk_print_context_get_dpi_y(context) ;
}
PangoFontMap* print_context_get_pango_fontmap(GtkPrintContext* context){
return gtk_print_context_get_pango_fontmap(context) ;
}
PangoContext* print_context_create_pango_context(GtkPrintContext* context){
return gtk_print_context_create_pango_context(context) ;
}
gboolean print_context_get_hard_margins(GtkPrintContext* context, gdouble* top, gdouble* bottom, gdouble* left, gdouble* right){
return gtk_print_context_get_hard_margins(context,top,bottom,left, right) ;
}







GtkPrintSettings* print_settings_new(){
return gtk_print_settings_new() ;
}
GtkPrintSettings* print_settings_copy(GtkPrintSettings* other){
return gtk_print_settings_copy(other) ;
}
gboolean print_settings_has_key(GtkPrintSettings* settings, const gchar* key){
return gtk_print_settings_has_key(settings, key) ;
}
const gchar* print_settings_get(GtkPrintSettings* settings, const gchar* key) {
return gtk_print_settings_get(settings, key) ;
}
void print_settings_set(GtkPrintSettings* settings, const gchar* key, const gchar* value){
gtk_print_settings_set(settings,key, value);
}
void print_settings_unset(GtkPrintSettings* settings, const gchar* key){
gtk_print_settings_unset(settings, key);
}
void print_settings_foreach(GtkPrintSettings* settings, GtkPrintSettingsFunc func, gpointer user_data){
gtk_print_settings_foreach(settings,func, user_data);
}
gboolean print_settings_get_bool(GtkPrintSettings* settings, const gchar* key){
return gtk_print_settings_get_bool(settings, key) ;
}
void print_settings_set_bool(GtkPrintSettings* settings, const gchar* key, gboolean value){
gtk_print_settings_set_bool(settings,key, value);
}
gdouble print_settings_get_double(GtkPrintSettings* settings, const gchar* key){
return gtk_print_settings_get_double(settings, key) ;
}
gdouble print_settings_get_double_with_default(GtkPrintSettings* settings, const gchar* key, gdouble def){
return gtk_print_settings_get_double_with_default(settings,key, def) ;
}
void print_settings_set_double(GtkPrintSettings* settings, const gchar* key, gdouble value){
gtk_print_settings_set_double(settings,key, value);
}
gdouble print_settings_get_length(GtkPrintSettings* settings, const gchar* key, GtkUnit unit){
return gtk_print_settings_get_length(settings,key, unit) ;
}
void print_settings_set_length(GtkPrintSettings* settings, const gchar* key, gdouble value, GtkUnit unit){
gtk_print_settings_set_length(settings,key,value, unit);
}
gint print_settings_get_int(GtkPrintSettings* settings, const gchar* key){
return gtk_print_settings_get_int(settings, key) ;
}
gint print_settings_get_int_with_default(GtkPrintSettings* settings, const gchar* key, gint def){
return gtk_print_settings_get_int_with_default(settings,key, def) ;
}
void print_settings_set_int(GtkPrintSettings* settings, const gchar* key, gint value){
gtk_print_settings_set_int(settings,key, value);
}
const gchar* print_settings_get_printer(GtkPrintSettings* settings) {
return gtk_print_settings_get_printer(settings) ;
}
void print_settings_set_printer(GtkPrintSettings* settings, const gchar* printer){
gtk_print_settings_set_printer(settings, printer);
}
GtkPageOrientation print_settings_get_orientation(GtkPrintSettings* settings){
return gtk_print_settings_get_orientation(settings) ;
}
void print_settings_set_orientation(GtkPrintSettings* settings, GtkPageOrientation orientation){
gtk_print_settings_set_orientation(settings, orientation);
}
GtkPaperSize* print_settings_get_paper_size(GtkPrintSettings* settings){
return gtk_print_settings_get_paper_size(settings) ;
}
void print_settings_set_paper_size(GtkPrintSettings* settings, GtkPaperSize* paper_size){
gtk_print_settings_set_paper_size(settings, paper_size);
}
gdouble print_settings_get_paper_width(GtkPrintSettings* settings, GtkUnit unit){
return gtk_print_settings_get_paper_width(settings, unit) ;
}
void print_settings_set_paper_width(GtkPrintSettings* settings, gdouble width, GtkUnit unit){
gtk_print_settings_set_paper_width(settings,width, unit);
}
gdouble print_settings_get_paper_height(GtkPrintSettings* settings, GtkUnit unit){
return gtk_print_settings_get_paper_height(settings, unit) ;
}
void print_settings_set_paper_height(GtkPrintSettings* settings, gdouble height, GtkUnit unit){
gtk_print_settings_set_paper_height(settings,height, unit);
}
gboolean print_settings_get_use_color(GtkPrintSettings* settings){
return gtk_print_settings_get_use_color(settings) ;
}
void print_settings_set_use_color(GtkPrintSettings* settings, gboolean use_color){
gtk_print_settings_set_use_color(settings, use_color);
}
gboolean print_settings_get_collate(GtkPrintSettings* settings){
return gtk_print_settings_get_collate(settings) ;
}
void print_settings_set_collate(GtkPrintSettings* settings, gboolean collate){
gtk_print_settings_set_collate(settings, collate);
}
gboolean print_settings_get_reverse(GtkPrintSettings* settings){
return gtk_print_settings_get_reverse(settings) ;
}
void print_settings_set_reverse(GtkPrintSettings* settings, gboolean reverse){
gtk_print_settings_set_reverse(settings, reverse);
}
GtkPrintDuplex print_settings_get_duplex(GtkPrintSettings* settings){
return gtk_print_settings_get_duplex(settings) ;
}
void print_settings_set_duplex(GtkPrintSettings* settings, GtkPrintDuplex duplex){
gtk_print_settings_set_duplex(settings, duplex);
}
GtkPrintQuality print_settings_get_quality(GtkPrintSettings* settings){
return gtk_print_settings_get_quality(settings) ;
}
void print_settings_set_quality(GtkPrintSettings* settings, GtkPrintQuality quality){
gtk_print_settings_set_quality(settings, quality);
}
gint print_settings_get_n_copies(GtkPrintSettings* settings){
return gtk_print_settings_get_n_copies(settings) ;
}
void print_settings_set_n_copies(GtkPrintSettings* settings, gint num_copies){
gtk_print_settings_set_n_copies(settings, num_copies);
}
gint print_settings_get_number_up(GtkPrintSettings* settings){
return gtk_print_settings_get_number_up(settings) ;
}
void print_settings_set_number_up(GtkPrintSettings* settings, gint number_up){
gtk_print_settings_set_number_up(settings, number_up);
}
GtkNumberUpLayout print_settings_get_number_up_layout(GtkPrintSettings* settings){
return gtk_print_settings_get_number_up_layout(settings) ;
}
void print_settings_set_number_up_layout(GtkPrintSettings* settings, GtkNumberUpLayout number_up_layout){
gtk_print_settings_set_number_up_layout(settings, number_up_layout);
}
gint print_settings_get_resolution(GtkPrintSettings* settings){
return gtk_print_settings_get_resolution(settings) ;
}
void print_settings_set_resolution(GtkPrintSettings* settings, gint resolution){
gtk_print_settings_set_resolution(settings, resolution);
}
void print_settings_set_resolution_xy(GtkPrintSettings* settings, gint resolution_x, gint resolution_y){
gtk_print_settings_set_resolution_xy(settings,resolution_x, resolution_y);
}
gint print_settings_get_resolution_x(GtkPrintSettings* settings){
return gtk_print_settings_get_resolution_x(settings) ;
}
gint print_settings_get_resolution_y(GtkPrintSettings* settings){
return gtk_print_settings_get_resolution_y(settings) ;
}
gdouble print_settings_get_printer_lpi(GtkPrintSettings* settings){
return gtk_print_settings_get_printer_lpi(settings) ;
}
void print_settings_set_printer_lpi(GtkPrintSettings* settings, gdouble lpi){
gtk_print_settings_set_printer_lpi(settings, lpi);
}
gdouble print_settings_get_scale(GtkPrintSettings* settings){
return gtk_print_settings_get_scale(settings) ;
}
void print_settings_set_scale(GtkPrintSettings* settings, gdouble scale){
gtk_print_settings_set_scale(settings, scale);
}
GtkPrintPages print_settings_get_print_pages(GtkPrintSettings* settings){
return gtk_print_settings_get_print_pages(settings) ;
}
void print_settings_set_print_pages(GtkPrintSettings* settings, GtkPrintPages pages){
gtk_print_settings_set_print_pages(settings, pages);
}
GtkPageRange* print_settings_get_page_ranges(GtkPrintSettings* settings, gint* num_ranges){
return gtk_print_settings_get_page_ranges(settings, num_ranges) ;
}
void print_settings_set_page_ranges(GtkPrintSettings* settings, GtkPageRange* page_ranges, gint num_ranges){
gtk_print_settings_set_page_ranges(settings,page_ranges, num_ranges);
}
GtkPageSet print_settings_get_page_set(GtkPrintSettings* settings){
return gtk_print_settings_get_page_set(settings) ;
}
void print_settings_set_page_set(GtkPrintSettings* settings, GtkPageSet page_set){
gtk_print_settings_set_page_set(settings, page_set);
}
const gchar* print_settings_get_default_source(GtkPrintSettings* settings) {
return gtk_print_settings_get_default_source(settings) ;
}
void print_settings_set_default_source(GtkPrintSettings* settings, const gchar* default_source){
gtk_print_settings_set_default_source(settings, default_source);
}
const gchar* print_settings_get_media_type(GtkPrintSettings* settings) {
return gtk_print_settings_get_media_type(settings) ;
}
void print_settings_set_media_type(GtkPrintSettings* settings, const gchar* media_type){
gtk_print_settings_set_media_type(settings, media_type);
}
const gchar* print_settings_get_dither(GtkPrintSettings* settings) {
return gtk_print_settings_get_dither(settings) ;
}
void print_settings_set_dither(GtkPrintSettings* settings, const gchar* dither){
gtk_print_settings_set_dither(settings, dither);
}
const gchar* print_settings_get_finishings(GtkPrintSettings* settings) {
return gtk_print_settings_get_finishings(settings) ;
}
void print_settings_set_finishings(GtkPrintSettings* settings, const gchar* finishings){
gtk_print_settings_set_finishings(settings, finishings);
}
const gchar* print_settings_get_output_bin(GtkPrintSettings* settings) {
return gtk_print_settings_get_output_bin(settings) ;
}
void print_settings_set_output_bin(GtkPrintSettings* settings, const gchar* output_bin){
gtk_print_settings_set_output_bin(settings, output_bin);
}
GtkPrintSettings* print_settings_new_from_file(const gchar* file_name, GError** error){
return gtk_print_settings_new_from_file(file_name, error) ;
}
GtkPrintSettings* print_settings_new_from_key_file(GKeyFile* key_file, const gchar* group_name, GError** error){
return gtk_print_settings_new_from_key_file(key_file,group_name, error) ;
}
GtkPrintSettings* print_settings_new_from_gvariant(GVariant* variant){
return gtk_print_settings_new_from_gvariant(variant) ;
}
gboolean print_settings_load_file(GtkPrintSettings* settings, const gchar* file_name, GError** error){
return gtk_print_settings_load_file(settings,file_name, error) ;
}
gboolean print_settings_load_key_file(GtkPrintSettings* settings, GKeyFile* key_file, const gchar* group_name, GError** error){
return gtk_print_settings_load_key_file(settings,key_file,group_name, error) ;
}
gboolean print_settings_to_file(GtkPrintSettings* settings, const gchar* file_name, GError** error){
return gtk_print_settings_to_file(settings,file_name, error) ;
}
void print_settings_to_key_file(GtkPrintSettings* settings, GKeyFile* key_file, const gchar* group_name){
gtk_print_settings_to_key_file(settings,key_file, group_name);
}
GVariant* print_settings_to_gvariant(GtkPrintSettings* settings){
return gtk_print_settings_to_gvariant(settings) ;
}



GtkPageSetup* page_setup_new(){
return gtk_page_setup_new() ;
}
GtkPageSetup* page_setup_copy(GtkPageSetup* other){
return gtk_page_setup_copy(other) ;
}
GtkPageOrientation page_setup_get_orientation(GtkPageSetup* setup){
return gtk_page_setup_get_orientation(setup) ;
}
void page_setup_set_orientation(GtkPageSetup* setup, GtkPageOrientation orientation){
gtk_page_setup_set_orientation(setup, orientation);
}
GtkPaperSize* page_setup_get_paper_size(GtkPageSetup* setup){
return gtk_page_setup_get_paper_size(setup) ;
}
void page_setup_set_paper_size(GtkPageSetup* setup, GtkPaperSize* size){
gtk_page_setup_set_paper_size(setup, size);
}
gdouble page_setup_get_top_margin(GtkPageSetup* setup, GtkUnit unit){
return gtk_page_setup_get_top_margin(setup, unit) ;
}
void page_setup_set_top_margin(GtkPageSetup* setup, gdouble margin, GtkUnit unit){
gtk_page_setup_set_top_margin(setup,margin, unit);
}
gdouble page_setup_get_bottom_margin(GtkPageSetup* setup, GtkUnit unit){
return gtk_page_setup_get_bottom_margin(setup, unit) ;
}
void page_setup_set_bottom_margin(GtkPageSetup* setup, gdouble margin, GtkUnit unit){
gtk_page_setup_set_bottom_margin(setup,margin, unit);
}
gdouble page_setup_get_left_margin(GtkPageSetup* setup, GtkUnit unit){
return gtk_page_setup_get_left_margin(setup, unit) ;
}
void page_setup_set_left_margin(GtkPageSetup* setup, gdouble margin, GtkUnit unit){
gtk_page_setup_set_left_margin(setup,margin, unit);
}
gdouble page_setup_get_right_margin(GtkPageSetup* setup, GtkUnit unit){
return gtk_page_setup_get_right_margin(setup, unit) ;
}
void page_setup_set_right_margin(GtkPageSetup* setup, gdouble margin, GtkUnit unit){
gtk_page_setup_set_right_margin(setup,margin, unit);
}
void page_setup_set_paper_size_and_default_margins(GtkPageSetup* setup, GtkPaperSize* size){
gtk_page_setup_set_paper_size_and_default_margins(setup, size);
}
gdouble page_setup_get_paper_width(GtkPageSetup* setup, GtkUnit unit){
return gtk_page_setup_get_paper_width(setup, unit) ;
}
gdouble page_setup_get_paper_height(GtkPageSetup* setup, GtkUnit unit){
return gtk_page_setup_get_paper_height(setup, unit) ;
}
gdouble page_setup_get_page_width(GtkPageSetup* setup, GtkUnit unit){
return gtk_page_setup_get_page_width(setup, unit) ;
}
gdouble page_setup_get_page_height(GtkPageSetup* setup, GtkUnit unit){
return gtk_page_setup_get_page_height(setup, unit) ;
}
GtkPageSetup* page_setup_new_from_file(const gchar* file_name, GError** error){
return gtk_page_setup_new_from_file(file_name, error) ;
}
GtkPageSetup* page_setup_new_from_key_file(GKeyFile* key_file, const gchar* group_name, GError** error){
return gtk_page_setup_new_from_key_file(key_file,group_name, error) ;
}
GtkPageSetup* page_setup_new_from_gvariant(GVariant* variant){
return gtk_page_setup_new_from_gvariant(variant) ;
}
gboolean page_setup_load_file(GtkPageSetup* setup, const char* file_name, GError** error){
return gtk_page_setup_load_file(setup,file_name, error) ;
}
gboolean page_setup_load_key_file(GtkPageSetup* setup, GKeyFile* key_file, const gchar* group_name, GError** error){
return gtk_page_setup_load_key_file(setup,key_file,group_name, error) ;
}
gboolean page_setup_to_file(GtkPageSetup* setup, const char* file_name, GError** error){
return gtk_page_setup_to_file(setup,file_name, error) ;
}
void page_setup_to_key_file(GtkPageSetup* setup, GKeyFile* key_file, const gchar* group_name){
gtk_page_setup_to_key_file(setup,key_file, group_name);
}
GVariant* page_setup_to_gvariant(GtkPageSetup* setup){
return gtk_page_setup_to_gvariant(setup) ;
}



GtkPaperSize* paper_size_new(const gchar* name){
return gtk_paper_size_new(name) ;
}
GtkPaperSize* paper_size_new_from_ppd(const gchar* ppd_name, const gchar* ppd_display_name, gdouble width, gdouble height){
return gtk_paper_size_new_from_ppd(ppd_name,ppd_display_name,width, height) ;
}
GtkPaperSize* paper_size_new_from_ipp(const gchar* ipp_name, gdouble width, gdouble height){
return gtk_paper_size_new_from_ipp(ipp_name,width, height) ;
}
GtkPaperSize* paper_size_new_custom(const gchar* name, const gchar* display_name, gdouble width, gdouble height, GtkUnit unit){
return gtk_paper_size_new_custom(name,display_name,width,height, unit) ;
}
GtkPaperSize* paper_size_copy(GtkPaperSize* other){
return gtk_paper_size_copy(other) ;
}
void paper_size_free(GtkPaperSize* size){
gtk_paper_size_free(size);
}
gboolean paper_size_is_equal(GtkPaperSize* size1, GtkPaperSize* size2){
return gtk_paper_size_is_equal(size1, size2) ;
}
GList* paper_size_get_paper_sizes(gboolean include_custom){
return gtk_paper_size_get_paper_sizes(include_custom) ;
}
const gchar* paper_size_get_name(GtkPaperSize* size) {
return gtk_paper_size_get_name(size) ;
}
const gchar* paper_size_get_display_name(GtkPaperSize* size) {
return gtk_paper_size_get_display_name(size) ;
}
const gchar* paper_size_get_ppd_name(GtkPaperSize* size) {
return gtk_paper_size_get_ppd_name(size) ;
}
gdouble paper_size_get_width(GtkPaperSize* size, GtkUnit unit){
return gtk_paper_size_get_width(size, unit) ;
}
gdouble paper_size_get_height(GtkPaperSize* size, GtkUnit unit){
return gtk_paper_size_get_height(size, unit) ;
}
gboolean paper_size_is_ipp(GtkPaperSize* size){
return gtk_paper_size_is_ipp(size) ;
}
gboolean paper_size_is_custom(GtkPaperSize* size){
return gtk_paper_size_is_custom(size) ;
}
void paper_size_set_size(GtkPaperSize* size, gdouble width, gdouble height, GtkUnit unit){
gtk_paper_size_set_size(size,width,height, unit);
}
gdouble paper_size_get_default_top_margin(GtkPaperSize* size, GtkUnit unit){
return gtk_paper_size_get_default_top_margin(size, unit) ;
}
gdouble paper_size_get_default_bottom_margin(GtkPaperSize* size, GtkUnit unit){
return gtk_paper_size_get_default_bottom_margin(size, unit) ;
}
gdouble paper_size_get_default_left_margin(GtkPaperSize* size, GtkUnit unit){
return gtk_paper_size_get_default_left_margin(size, unit) ;
}
gdouble paper_size_get_default_right_margin(GtkPaperSize* size, GtkUnit unit){
return gtk_paper_size_get_default_right_margin(size, unit) ;
}
const gchar* paper_size_get_default() {
return gtk_paper_size_get_default() ;
}
GtkPaperSize* paper_size_new_from_key_file(GKeyFile* key_file, const gchar* group_name, GError** error){
return gtk_paper_size_new_from_key_file(key_file,group_name, error) ;
}
GtkPaperSize* paper_size_new_from_gvariant(GVariant* variant){
return gtk_paper_size_new_from_gvariant(variant) ;
}
void paper_size_to_key_file(GtkPaperSize* size, GKeyFile* key_file, const gchar* group_name){
gtk_paper_size_to_key_file(size,key_file, group_name);
}
GVariant* paper_size_to_gvariant(GtkPaperSize* paper_size){
return gtk_paper_size_to_gvariant(paper_size) ;
}


#if defined(GTKKA_PRINTER_ENABLED)

GtkPrinter* printer_new(const gchar* name, GtkPrintBackend* backend, gboolean virtual_){
return gtk_printer_new(name,backend, virtual_) ;
}
GtkPrintBackend* printer_get_backend(GtkPrinter* printer){
return gtk_printer_get_backend(printer) ;
}
const gchar* printer_get_name(GtkPrinter* printer) {
return gtk_printer_get_name(printer) ;
}
const gchar* printer_get_state_message(GtkPrinter* printer) {
return gtk_printer_get_state_message(printer) ;
}
const gchar* printer_get_description(GtkPrinter* printer) {
return gtk_printer_get_description(printer) ;
}
const gchar* printer_get_location(GtkPrinter* printer) {
return gtk_printer_get_location(printer) ;
}
const gchar* printer_get_icon_name(GtkPrinter* printer) {
return gtk_printer_get_icon_name(printer) ;
}
gint printer_get_job_count(GtkPrinter* printer){
return gtk_printer_get_job_count(printer) ;
}
gboolean printer_is_active(GtkPrinter* printer){
return gtk_printer_is_active(printer) ;
}
gboolean printer_is_paused(GtkPrinter* printer){
return gtk_printer_is_paused(printer) ;
}
gboolean printer_is_accepting_jobs(GtkPrinter* printer){
return gtk_printer_is_accepting_jobs(printer) ;
}
gboolean printer_is_virtual(GtkPrinter* printer){
return gtk_printer_is_virtual(printer) ;
}
gboolean printer_is_default(GtkPrinter* printer){
return gtk_printer_is_default(printer) ;
}
gboolean printer_accepts_ps(GtkPrinter* printer){
return gtk_printer_accepts_ps(printer) ;
}
gboolean printer_accepts_pdf(GtkPrinter* printer){
return gtk_printer_accepts_pdf(printer) ;
}
GList* printer_list_papers(GtkPrinter* printer){
return gtk_printer_list_papers(printer) ;
}
gint printer_compare(GtkPrinter* a, GtkPrinter* b){
return gtk_printer_compare(a, b) ;
}
gboolean printer_has_details(GtkPrinter* printer){
return gtk_printer_has_details(printer) ;
}
void printer_request_details(GtkPrinter* printer){
gtk_printer_request_details(printer);
}
GtkPrintCapabilities printer_get_capabilities(GtkPrinter* printer){
return gtk_printer_get_capabilities(printer) ;
}
GtkPageSetup* printer_get_default_page_size(GtkPrinter* printer){
return gtk_printer_get_default_page_size(printer) ;
}
gboolean printer_get_hard_margins(GtkPrinter* printer, gdouble* top, gdouble* bottom, gdouble* left, gdouble* right){
return gtk_printer_get_hard_margins(printer,top,bottom,left, right) ;
}



void enumerate_printers(GtkPrinterFunc func, gpointer data, GDestroyNotify destroy, gboolean wait){
gtk_enumerate_printers(func,data,destroy, wait);
}


#endif // defined(GTKKA_PRINTER_ENABLED)
#if defined(GTKKA_PRINT_JOB_ENABLED)





GtkPrintJob* print_job_new(const gchar* title, GtkPrinter* printer, GtkPrintSettings* settings, GtkPageSetup* page_setup){
return gtk_print_job_new(title,printer,settings, page_setup) ;
}
GtkPrintSettings* print_job_get_settings(GtkPrintJob* job){
return gtk_print_job_get_settings(job) ;
}
GtkPrint* print_job_get_printer(GtkPrintJob* job){
return gtk_print_job_get_printer(job) ;
}
const gchar* print_job_get_title(GtkPrintJob* job) {
return gtk_print_job_get_title(job) ;
}
GtkPrintStatus print_job_get_status(GtkPrintJob* job){
return gtk_print_job_get_status(job) ;
}
gboolean print_job_set_source_fd(GtkPrintJob* job, int fd, GError** error){
return gtk_print_job_set_source_fd(job,fd, error) ;
}
gboolean print_job_set_source_file(GtkPrintJob* job, const gchar* filename, GError** error){
return gtk_print_job_set_source_file(job,filename, error) ;
}
cairo_surface_t* print_job_get_surface(GtkPrintJob* job, GError** error){
return gtk_print_job_get_surface(job, error) ;
}
void print_job_send(GtkPrintJob* job, GtkPrintJobCompleteFunc callback, gpointer user_data, GDestroyNotify dnotify){
gtk_print_job_send(job,callback,user_data, dnotify);
}
void print_job_set_track_print_status(GtkPrintJob* job, gboolean track_status){
gtk_print_job_set_track_print_status(job, track_status);
}
gboolean print_job_get_track_print_status(GtkPrintJob* job){
return gtk_print_job_get_track_print_status(job) ;
}
GtkPrintPages print_job_get_pages(GtkPrintJob* job){
return gtk_print_job_get_pages(job) ;
}
void print_job_set_pages(GtkPrintJob* job, GtkPrintPages pages){
gtk_print_job_set_pages(job, pages);
}
GtkPageRange* print_job_get_page_ranges(GtkPrintJob* job, gint* n_ranges){
return gtk_print_job_get_page_ranges(job, n_ranges) ;
}
void print_job_set_page_ranges(GtkPrintJob* job, GtkPageRange* ranges, gint n_ranges){
gtk_print_job_set_page_ranges(job,ranges, n_ranges);
}
GtkPageSet print_job_get_page_set(GtkPrintJob* job){
return gtk_print_job_get_page_set(job) ;
}
void print_job_set_page_set(GtkPrintJob* job, GtkPageSet page_set){
gtk_print_job_set_page_set(job, page_set);
}
gint print_job_get_num_copies(GtkPrintJob* job){
return gtk_print_job_get_num_copies(job) ;
}
void print_job_set_num_copies(GtkPrintJob* job, gint num_copies){
gtk_print_job_set_num_copies(job, num_copies);
}
gdouble print_job_get_scale(GtkPrintJob* job){
return gtk_print_job_get_scale(job) ;
}
void print_job_set_scale(GtkPrintJob* job, gdouble scale){
gtk_print_job_set_scale(job, scale);
}
guint print_job_get_n_up(GtkPrintJob* job){
return gtk_print_job_get_n_up(job) ;
}
void print_job_set_n_up(GtkPrintJob* job, guint n_up){
gtk_print_job_set_n_up(job, n_up);
}
GtkNumberUpLayout print_job_get_n_up_layout(GtkPrintJob* job){
return gtk_print_job_get_n_up_layout(job) ;
}
void print_job_set_n_up_layout(GtkPrintJob* job, GtkNumberUpLayout layout){
gtk_print_job_set_n_up_layout(job, layout);
}
gboolean print_job_get_rotate(GtkPrintJob* job){
return gtk_print_job_get_rotate(job) ;
}
void print_job_set_rotate(GtkPrintJob* job, gboolean rotate){
gtk_print_job_set_rotate(job, rotate);
}
gboolean print_job_get_collate(GtkPrintJob* job){
return gtk_print_job_get_collate(job) ;
}
void print_job_set_collate(GtkPrintJob* job, gboolean collate){
gtk_print_job_set_collate(job, collate);
}
gboolean print_job_get_reverse(GtkPrintJob* job){
return gtk_print_job_get_reverse(job) ;
}
void print_job_set_reverse(GtkPrintJob* job, gboolean reverse){
gtk_print_job_set_reverse(job, reverse);
}


#endif // defined(GTKKA_PRINT_JOB_ENABLED)

#if defined(GTKKA_PRINT_DIALOG)

GtkWidget* print_unix_dialog_new(const gchar* title, GtkWindow* parent){
return gtk_print_unix_dialog_new(title, parent) ;
}
void print_unix_dialog_set_page_setup(GtkPrintUnixDialog* dialog, GtkPageSetup* page_setup){
gtk_print_unix_dialog_set_page_setup(dialog, page_setup);
}
GtkPageSetup* print_unix_dialog_get_page_setup(GtkPrintUnixDialog* dialog){
return gtk_print_unix_dialog_get_page_setup(dialog) ;
}
void print_unix_dialog_set_current_page(GtkPrintUnixDialog* dialog, gint current_page){
gtk_print_unix_dialog_set_current_page(dialog, current_page);
}
gint print_unix_dialog_get_current_page(GtkPrintUnixDialog* dialog){
return gtk_print_unix_dialog_get_current_page(dialog) ;
}
void print_unix_dialog_set_settings(GtkPrintUnixDialog* dialog, GtkPrintSettings* settings){
gtk_print_unix_dialog_set_settings(dialog, settings);
}
GtkPrintSettings* print_unix_dialog_get_settings(GtkPrintUnixDialog* dialog){
return gtk_print_unix_dialog_get_settings(dialog) ;
}
GtkPrinter* print_unix_dialog_get_selected_printer(GtkPrintUnixDialog* dialog){
return gtk_print_unix_dialog_get_selected_printer(dialog) ;
}

void print_unix_dialog_add_custom_tab(GtkPrintUnixDialog* dialog, GtkWidget* child, GtkWidget* tab_label){
gtk_print_unix_dialog_add_custom_tab(dialog,child, tab_label);
}
void print_unix_dialog_set_support_selection(GtkPrintUnixDialog* dialog, gboolean support_selection){
gtk_print_unix_dialog_set_support_selection(dialog, support_selection);
}
gboolean print_unix_dialog_get_support_selection(GtkPrintUnixDialog* dialog){
return gtk_print_unix_dialog_get_support_selection(dialog) ;
}
void print_unix_dialog_set_has_selection(GtkPrintUnixDialog* dialog, gboolean has_selection){
gtk_print_unix_dialog_set_has_selection(dialog, has_selection);
}
gboolean print_unix_dialog_get_has_selection(GtkPrintUnixDialog* dialog){
return gtk_print_unix_dialog_get_has_selection(dialog) ;
}
void print_unix_dialog_set_embed_page_setup(GtkPrintUnixDialog* dialog, gboolean embed){
gtk_print_unix_dialog_set_embed_page_setup(dialog, embed);
}
gboolean print_unix_dialog_get_embed_page_setup(GtkPrintUnixDialog* dialog){
return gtk_print_unix_dialog_get_embed_page_setup(dialog) ;
}
gboolean print_unix_dialog_get_page_setup_set(GtkPrintUnixDialog* dialog){
return gtk_print_unix_dialog_get_page_setup_set(dialog) ;
}
void print_unix_dialog_set_manual_capabilities(GtkPrintUnixDialog* dialog, GtkPrintCapabilities capabilities){
gtk_print_unix_dialog_set_manual_capabilities(dialog, capabilities);
}
GtkPrintCapabilities print_unix_dialog_get_manual_capabilities(GtkPrintUnixDialog* dialog){
return gtk_print_unix_dialog_get_manual_capabilities(dialog) ;
}



GtkWidget* page_setup_unix_dialog_new(const gchar* title, GtkWindow* parent){
return gtk_page_setup_unix_dialog_new(title, parent) ;
}
void page_setup_unix_dialog_set_page_setup(GtkPageSetupUnixDialog* dialog, GtkPageSetup* page_setup){
gtk_page_setup_unix_dialog_set_page_setup(dialog, page_setup);
}
GtkPageSetup* page_setup_unix_dialog_get_page_setup(GtkPageSetupUnixDialog* dialog){
return gtk_page_setup_unix_dialog_get_page_setup(dialog) ;
}
void page_setup_unix_dialog_set_print_settings(GtkPageSetupUnixDialog* dialog, GtkPrintSettings* print_settings){
gtk_page_setup_unix_dialog_set_print_settings(dialog, print_settings);
}
GtkPrintSettings* page_setup_unix_dialog_get_print_settings(GtkPageSetupUnixDialog* dialog){
return gtk_page_setup_unix_dialog_get_print_settings(dialog) ;
}


#endif // defined(GTKKA_PRINT_DIALOG)

GtkAdjustment* adjustment_new(gdouble value, gdouble lower, gdouble upper, gdouble step_increment, gdouble page_increment, gdouble page_size){
return gtk_adjustment_new(value,lower,upper,step_increment,page_increment, page_size) ;
}
gdouble adjustment_get_value(GtkAdjustment* adjustment){
return gtk_adjustment_get_value(adjustment) ;
}
void adjustment_set_value(GtkAdjustment* adjustment, gdouble value){
gtk_adjustment_set_value(adjustment, value);
}
void adjustment_clamp_page(GtkAdjustment* adjustment, gdouble lower, gdouble upper){
gtk_adjustment_clamp_page(adjustment,lower, upper);
}


void adjustment_configure(GtkAdjustment* adjustment, gdouble value, gdouble lower, gdouble upper, gdouble step_increment, gdouble page_increment, gdouble page_size){
gtk_adjustment_configure(adjustment,value,lower,upper,step_increment,page_increment, page_size);
}
gdouble adjustment_get_lower(GtkAdjustment* adjustment){
return gtk_adjustment_get_lower(adjustment) ;
}
gdouble adjustment_get_page_increment(GtkAdjustment* adjustment){
return gtk_adjustment_get_page_increment(adjustment) ;
}
gdouble adjustment_get_page_size(GtkAdjustment* adjustment){
return gtk_adjustment_get_page_size(adjustment) ;
}
gdouble adjustment_get_step_increment(GtkAdjustment* adjustment){
return gtk_adjustment_get_step_increment(adjustment) ;
}
gdouble adjustment_get_minimum_increment(GtkAdjustment* adjustment){
return gtk_adjustment_get_minimum_increment(adjustment) ;
}
gdouble adjustment_get_upper(GtkAdjustment* adjustment){
return gtk_adjustment_get_upper(adjustment) ;
}
void adjustment_set_lower(GtkAdjustment* adjustment, gdouble lower){
gtk_adjustment_set_lower(adjustment, lower);
}
void adjustment_set_page_increment(GtkAdjustment* adjustment, gdouble page_increment){
gtk_adjustment_set_page_increment(adjustment, page_increment);
}
void adjustment_set_page_size(GtkAdjustment* adjustment, gdouble page_size){
gtk_adjustment_set_page_size(adjustment, page_size);
}
void adjustment_set_step_increment(GtkAdjustment* adjustment, gdouble step_increment){
gtk_adjustment_set_step_increment(adjustment, step_increment);
}
void adjustment_set_upper(GtkAdjustment* adjustment, gdouble upper){
gtk_adjustment_set_upper(adjustment, upper);
}









GtkWidget* calendar_new(){
return gtk_calendar_new() ;
}
void calendar_select_month(GtkCalendar* calendar, guint month, guint year){
gtk_calendar_select_month(calendar,month, year);
}
void calendar_select_day(GtkCalendar* calendar, guint day){
gtk_calendar_select_day(calendar, day);
}
void calendar_mark_day(GtkCalendar* calendar, guint day){
gtk_calendar_mark_day(calendar, day);
}
void calendar_unmark_day(GtkCalendar* calendar, guint day){
gtk_calendar_unmark_day(calendar, day);
}
gboolean calendar_get_day_is_marked(GtkCalendar* calendar, guint day){
return gtk_calendar_get_day_is_marked(calendar, day) ;
}
void calendar_clear_marks(GtkCalendar* calendar){
gtk_calendar_clear_marks(calendar);
}
GtkCalendarDisplayOptions calendar_get_display_options(GtkCalendar* calendar){
return gtk_calendar_get_display_options(calendar) ;
}
void calendar_set_display_options(GtkCalendar* calendar, GtkCalendarDisplayOptions flags){
gtk_calendar_set_display_options(calendar, flags);
}
void calendar_get_date(GtkCalendar* calendar, guint* year, guint* month, guint* day){
gtk_calendar_get_date(calendar,year,month, day);
}
void calendar_set_detail_func(GtkCalendar* calendar, GtkCalendarDetailFunc func, gpointer data, GDestroyNotify destroy){
gtk_calendar_set_detail_func(calendar,func,data, destroy);
}
gint calendar_get_detail_width_chars(GtkCalendar* calendar){
return gtk_calendar_get_detail_width_chars(calendar) ;
}
void calendar_set_detail_width_chars(GtkCalendar* calendar, gint chars){
gtk_calendar_set_detail_width_chars(calendar, chars);
}
gint calendar_get_detail_height_rows(GtkCalendar* calendar){
return gtk_calendar_get_detail_height_rows(calendar) ;
}
void calendar_set_detail_height_rows(GtkCalendar* calendar, gint rows){
gtk_calendar_set_detail_height_rows(calendar, rows);
}



GtkWidget* drawing_area_new(){
return gtk_drawing_area_new() ;
}




GtkWidget* gl_area_new(){
return gtk_gl_area_new() ;
}
GdkGLContext* gl_area_get_context(GtkGLArea* area){
return gtk_gl_area_get_context(area) ;
}
void gl_area_make_current(GtkGLArea* area){
gtk_gl_area_make_current(area);
}
void gl_area_queue_render(GtkGLArea* area){
gtk_gl_area_queue_render(area);
}
void gl_area_attach_buffers(GtkGLArea* area){
gtk_gl_area_attach_buffers(area);
}
void gl_area_set_error(GtkGLArea* area, const GError* error){
gtk_gl_area_set_error(area, error);
}
GError* gl_area_get_error(GtkGLArea* area){
return gtk_gl_area_get_error(area) ;
}
void gl_area_set_has_alpha(GtkGLArea* area, gboolean has_alpha){
gtk_gl_area_set_has_alpha(area, has_alpha);
}
gboolean gl_area_get_has_alpha(GtkGLArea* area){
return gtk_gl_area_get_has_alpha(area) ;
}
void gl_area_set_has_depth_buffer(GtkGLArea* area, gboolean has_depth_buffer){
gtk_gl_area_set_has_depth_buffer(area, has_depth_buffer);
}
gboolean gl_area_get_has_depth_buffer(GtkGLArea* area){
return gtk_gl_area_get_has_depth_buffer(area) ;
}
void gl_area_set_has_stencil_buffer(GtkGLArea* area, gboolean has_stencil_buffer){
gtk_gl_area_set_has_stencil_buffer(area, has_stencil_buffer);
}
gboolean gl_area_get_has_stencil_buffer(GtkGLArea* area){
return gtk_gl_area_get_has_stencil_buffer(area) ;
}
void gl_area_set_auto_render(GtkGLArea* area, gboolean auto_render){
gtk_gl_area_set_auto_render(area, auto_render);
}
gboolean gl_area_get_auto_render(GtkGLArea* area){
return gtk_gl_area_get_auto_render(area) ;
}
void gl_area_get_required_version(GtkGLArea* area, gint* major, gint* minor){
gtk_gl_area_get_required_version(area,major, minor);
}
void gl_area_set_required_version(GtkGLArea* area, gint major, gint minor){
gtk_gl_area_set_required_version(area,major, minor);
}
void gl_area_set_use_es(GtkGLArea* area, gboolean use_es){
gtk_gl_area_set_use_es(area, use_es);
}
gboolean gl_area_get_use_es(GtkGLArea* area){
return gtk_gl_area_get_use_es(area) ;
}



GtkWidget* event_box_new(){
return gtk_event_box_new() ;
}
void event_box_set_above_child(GtkEventBox* event_box, gboolean above_child){
gtk_event_box_set_above_child(event_box, above_child);
}
gboolean event_box_get_above_child(GtkEventBox* event_box){
return gtk_event_box_get_above_child(event_box) ;
}
void event_box_set_visible_window(GtkEventBox* event_box, gboolean visible_window){
gtk_event_box_set_visible_window(event_box, visible_window);
}
gboolean event_box_get_visible_window(GtkEventBox* event_box){
return gtk_event_box_get_visible_window(event_box) ;
}

















GtkIMContext* im_context_simple_new(){
return gtk_im_context_simple_new() ;
}
void im_context_simple_add_table(GtkIMContextSimple* context_simple, guint16* data, gint max_seq_len, gint n_seqs){
gtk_im_context_simple_add_table(context_simple,data,max_seq_len, n_seqs);
}



GtkIMContext* im_multicontext_new(){
return gtk_im_multicontext_new() ;
}


const char* im_multicontext_get_context_id(GtkIMMulticontext* context) {
return gtk_im_multicontext_get_context_id(context) ;
}
void im_multicontext_set_context_id(GtkIMMulticontext* context, const char* context_id){
gtk_im_multicontext_set_context_id(context, context_id);
}



GtkSizeGroup* size_group_new(GtkSizeGroupMode mode){
return gtk_size_group_new(mode) ;
}
void size_group_set_mode(GtkSizeGroup* size_group, GtkSizeGroupMode mode){
gtk_size_group_set_mode(size_group, mode);
}
GtkSizeGroupMode size_group_get_mode(GtkSizeGroup* size_group){
return gtk_size_group_get_mode(size_group) ;
}



void size_group_add_widget(GtkSizeGroup* size_group, GtkWidget* widget){
gtk_size_group_add_widget(size_group, widget);
}
void size_group_remove_widget(GtkSizeGroup* size_group, GtkWidget* widget){
gtk_size_group_remove_widget(size_group, widget);
}
GSList* size_group_get_widgets(GtkSizeGroup* size_group){
return gtk_size_group_get_widgets(size_group) ;
}



void tooltip_set_markup(GtkTooltip* tooltip, const gchar* markup){
gtk_tooltip_set_markup(tooltip, markup);
}
void tooltip_set_text(GtkTooltip* tooltip, const gchar* text){
gtk_tooltip_set_text(tooltip, text);
}
void tooltip_set_icon(GtkTooltip* tooltip, GdkPixbuf* pixbuf){
gtk_tooltip_set_icon(tooltip, pixbuf);
}



void tooltip_set_icon_from_icon_name(GtkTooltip* tooltip, const gchar* icon_name, GtkIconSize size){
gtk_tooltip_set_icon_from_icon_name(tooltip,icon_name, size);
}
void tooltip_set_icon_from_gicon(GtkTooltip* tooltip, GIcon* gicon, GtkIconSize size){
gtk_tooltip_set_icon_from_gicon(tooltip,gicon, size);
}
void tooltip_set_custom(GtkTooltip* tooltip, GtkWidget* custom_widget){
gtk_tooltip_set_custom(tooltip, custom_widget);
}
void tooltip_trigger_tooltip_query(GdkDisplay* display){
gtk_tooltip_trigger_tooltip_query(display);
}
void tooltip_set_tip_area(GtkTooltip* tooltip, const GdkRectangle* rect){
gtk_tooltip_set_tip_area(tooltip, rect);
}



GtkWidget* viewport_new(GtkAdjustment* hadjustment, GtkAdjustment* vadjustment){
return gtk_viewport_new(hadjustment, vadjustment) ;
}






void viewport_set_shadow_type(GtkViewport* viewport, GtkShadowType type){
gtk_viewport_set_shadow_type(viewport, type);
}
GtkShadowType viewport_get_shadow_type(GtkViewport* viewport){
return gtk_viewport_get_shadow_type(viewport) ;
}
GdkWindow* viewport_get_bin_window(GtkViewport* viewport){
return gtk_viewport_get_bin_window(viewport) ;
}
GdkWindow* viewport_get_view_window(GtkViewport* viewport){
return gtk_viewport_get_view_window(viewport) ;
}




GtkWidget* accessible_get_widget(GtkAccessible* accessible){
return gtk_accessible_get_widget(accessible) ;
}
void accessible_set_widget(GtkAccessible* accessible, GtkWidget* widget){
gtk_accessible_set_widget(accessible, widget);
}






template <typename... Val>
GtkWidget* widget_new(GType type, const gchar* first_property_name, Val... value){
return (gtk_widget_new(type,first_property_name,value), ...) ;
}
void widget_destroy(GtkWidget* widget){
gtk_widget_destroy(widget);
}
gboolean widget_in_destruction(GtkWidget* widget){
return gtk_widget_in_destruction(widget) ;
}
void widget_destroyed(GtkWidget* widget, GtkWidget** widget_pointer){
gtk_widget_destroyed(widget, widget_pointer);
}
void widget_unparent(GtkWidget* widget){
gtk_widget_unparent(widget);
}
void widget_show(GtkWidget* widget){
gtk_widget_show(widget);
}
void widget_show_now(GtkWidget* widget){
gtk_widget_show_now(widget);
}
void widget_hide(GtkWidget* widget){
gtk_widget_hide(widget);
}
void widget_show_all(GtkWidget* widget){
gtk_widget_show_all(widget);
}
void widget_map(GtkWidget* widget){
gtk_widget_map(widget);
}
void widget_unmap(GtkWidget* widget){
gtk_widget_unmap(widget);
}
void widget_realize(GtkWidget* widget){
gtk_widget_realize(widget);
}
void widget_unrealize(GtkWidget* widget){
gtk_widget_unrealize(widget);
}
void widget_draw(GtkWidget* widget, cairo_t* cr){
gtk_widget_draw(widget, cr);
}
void widget_queue_draw(GtkWidget* widget){
gtk_widget_queue_draw(widget);
}
void widget_queue_resize(GtkWidget* widget){
gtk_widget_queue_resize(widget);
}
void widget_queue_resize_no_redraw(GtkWidget* widget){
gtk_widget_queue_resize_no_redraw(widget);
}
void widget_queue_allocate(GtkWidget* widget){
gtk_widget_queue_allocate(widget);
}
GdkFrameClock* widget_get_frame_clock(GtkWidget* widget){
return gtk_widget_get_frame_clock(widget) ;
}
gint widget_get_scale_factor(GtkWidget* widget){
return gtk_widget_get_scale_factor(widget) ;
}




guint widget_add_tick_callback(GtkWidget* widget, GtkTickCallback callback, gpointer user_data, GDestroyNotify notify){
return gtk_widget_add_tick_callback(widget,callback,user_data, notify) ;
}
void widget_remove_tick_callback(GtkWidget* widget, guint id){
gtk_widget_remove_tick_callback(widget, id);
}




void widget_size_allocate(GtkWidget* widget, GtkAllocation* allocation){
gtk_widget_size_allocate(widget, allocation);
}
void widget_size_allocate_with_baseline(GtkWidget* widget, GtkAllocation* allocation, gint baseline){
gtk_widget_size_allocate_with_baseline(widget,allocation, baseline);
}
void widget_add_accelerator(GtkWidget* widget, const gchar* accel_signal, GtkAccelGroup* accel_group, guint accel_key, GdkModifierType accel_mods, GtkAccelFlags accel_flags){
gtk_widget_add_accelerator(widget,accel_signal,accel_group,accel_key,accel_mods, accel_flags);
}
gboolean widget_remove_accelerator(GtkWidget* widget, GtkAccelGroup* accel_group, guint accel_key, GdkModifierType accel_mods){
return gtk_widget_remove_accelerator(widget,accel_group,accel_key, accel_mods) ;
}
void widget_set_accel_path(GtkWidget* widget, const gchar* accel_path, GtkAccelGroup* accel_group){
gtk_widget_set_accel_path(widget,accel_path, accel_group);
}
GList* widget_list_accel_closures(GtkWidget* widget){
return gtk_widget_list_accel_closures(widget) ;
}
gboolean widget_can_activate_accel(GtkWidget* widget, guint signal_id){
return gtk_widget_can_activate_accel(widget, signal_id) ;
}
gboolean widget_event(GtkWidget* widget, GdkEvent* event){
return gtk_widget_event(widget, event) ;
}
gboolean widget_activate(GtkWidget* widget){
return gtk_widget_activate(widget) ;
}


gboolean widget_intersect(GtkWidget* widget, const GdkRectangle* area, GdkRectangle* intersection){
return gtk_widget_intersect(widget,area, intersection) ;
}
gboolean widget_is_focus(GtkWidget* widget){
return gtk_widget_is_focus(widget) ;
}
void widget_grab_focus(GtkWidget* widget){
gtk_widget_grab_focus(widget);
}
void widget_grab_default(GtkWidget* widget){
gtk_widget_grab_default(widget);
}
void widget_set_name(GtkWidget* widget, const gchar* name){
gtk_widget_set_name(widget, name);
}
const gchar* widget_get_name(GtkWidget* widget) {
return gtk_widget_get_name(widget) ;
}


void widget_set_sensitive(GtkWidget* widget, gboolean sensitive){
gtk_widget_set_sensitive(widget, sensitive);
}
void widget_set_parent(GtkWidget* widget, GtkWidget* parent){
gtk_widget_set_parent(widget, parent);
}
void widget_set_parent_window(GtkWidget* widget, GdkWindow* parent_window){
gtk_widget_set_parent_window(widget, parent_window);
}
GdkWindow* widget_get_parent_window(GtkWidget* widget){
return gtk_widget_get_parent_window(widget) ;
}
void widget_set_events(GtkWidget* widget, gint events){
gtk_widget_set_events(widget, events);
}
gint widget_get_events(GtkWidget* widget){
return gtk_widget_get_events(widget) ;
}
void widget_add_events(GtkWidget* widget, gint events){
gtk_widget_add_events(widget, events);
}
void widget_set_device_events(GtkWidget* widget, GdkDevice* device, GdkEventMask events){
gtk_widget_set_device_events(widget,device, events);
}
GdkEventMask widget_get_device_events(GtkWidget* widget, GdkDevice* device){
return gtk_widget_get_device_events(widget, device) ;
}
void widget_add_device_events(GtkWidget* widget, GdkDevice* device, GdkEventMask events){
gtk_widget_add_device_events(widget,device, events);
}
void widget_set_device_enabled(GtkWidget* widget, GdkDevice* device, gboolean enabled){
gtk_widget_set_device_enabled(widget,device, enabled);
}
gboolean widget_get_device_enabled(GtkWidget* widget, GdkDevice* device){
return gtk_widget_get_device_enabled(widget, device) ;
}
GtkWidget* widget_get_toplevel(GtkWidget* widget){
return gtk_widget_get_toplevel(widget) ;
}
GtkWidget* widget_get_ancestor(GtkWidget* widget, GType widget_type){
return gtk_widget_get_ancestor(widget, widget_type) ;
}
GdkVisual* widget_get_visual(GtkWidget* widget){
return gtk_widget_get_visual(widget) ;
}
void widget_set_visual(GtkWidget* widget, GdkVisual* visual){
gtk_widget_set_visual(widget, visual);
}
void widget_get_pointer(GtkWidget* widget, gint* x, gint* y){
gtk_widget_get_pointer(widget,x, y);
}
gboolean widget_is_ancestor(GtkWidget* widget, GtkWidget* ancestor){
return gtk_widget_is_ancestor(widget, ancestor) ;
}
gboolean widget_translate_coordinates(GtkWidget* src_widget, GtkWidget* dest_widget, gint src_x, gint src_y, gint* dest_x, gint* dest_y){
return gtk_widget_translate_coordinates(src_widget,dest_widget,src_x,src_y,dest_x, dest_y) ;
}
gboolean widget_hide_on_delete(GtkWidget* widget){
return gtk_widget_hide_on_delete(widget) ;
}






void widget_set_direction(GtkWidget* widget, GtkTextDirection dir){
gtk_widget_set_direction(widget, dir);
}
GtkTextDirection widget_get_direction(GtkWidget* widget){
return gtk_widget_get_direction(widget) ;
}
void widget_set_default_direction(GtkTextDirection dir){
gtk_widget_set_default_direction(dir);
}
GtkTextDirection widget_get_default_direction(){
return gtk_widget_get_default_direction() ;
}
void widget_shape_combine_region(GtkWidget* widget, cairo_region_t* region){
gtk_widget_shape_combine_region(widget, region);
}
void widget_input_shape_combine_region(GtkWidget* widget, cairo_region_t* region){
gtk_widget_input_shape_combine_region(widget, region);
}











































PangoContext* widget_create_pango_context(GtkWidget* widget){
return gtk_widget_create_pango_context(widget) ;
}
PangoContext* widget_get_pango_context(GtkWidget* widget){
return gtk_widget_get_pango_context(widget) ;
}
void widget_set_font_options(GtkWidget* widget, const cairo_font_options_t* options){
gtk_widget_set_font_options(widget, options);
}
const cairo_font_options_t* widget_get_font_options(GtkWidget* widget) {
return gtk_widget_get_font_options(widget) ;
}
void widget_set_font_map(GtkWidget* widget, PangoFontMap* font_map){
gtk_widget_set_font_map(widget, font_map);
}
PangoFontMap* widget_get_font_map(GtkWidget* widget){
return gtk_widget_get_font_map(widget) ;
}
PangoLayout* widget_create_pango_layout(GtkWidget* widget, const gchar* text){
return gtk_widget_create_pango_layout(widget, text) ;
}









void widget_queue_draw_area(GtkWidget* widget, gint x, gint y, gint width, gint height){
gtk_widget_queue_draw_area(widget,x,y,width, height);
}
void widget_queue_draw_region(GtkWidget* widget, const cairo_region_t* region){
gtk_widget_queue_draw_region(widget, region);
}
void widget_set_app_paintable(GtkWidget* widget, gboolean app_paintable){
gtk_widget_set_app_paintable(widget, app_paintable);
}


void widget_set_redraw_on_allocate(GtkWidget* widget, gboolean redraw_on_allocate){
gtk_widget_set_redraw_on_allocate(widget, redraw_on_allocate);
}


gboolean widget_mnemonic_activate(GtkWidget* widget, gboolean group_cycling){
return gtk_widget_mnemonic_activate(widget, group_cycling) ;
}
void widget_class_install_style_property(GtkWidgetClass* klass, GParamSpec* pspec){
gtk_widget_class_install_style_property(klass, pspec);
}
void widget_class_install_style_property_parser(GtkWidgetClass* klass, GParamSpec* pspec, GtkRcPropertyParser parser){
gtk_widget_class_install_style_property_parser(klass,pspec, parser);
}
GParamSpec* widget_class_find_style_property(GtkWidgetClass* klass, const gchar* property_name){
return gtk_widget_class_find_style_property(klass, property_name) ;
}
GParamSpec** widget_class_list_style_properties(GtkWidgetClass* klass, guint* n_properties){
return gtk_widget_class_list_style_properties(klass, n_properties) ;
}




gboolean widget_send_focus_change(GtkWidget* widget, GdkEvent* event){
return gtk_widget_send_focus_change(widget, event) ;
}
template <typename... Pairs>
void widget_style_get(GtkWidget* widget, const gchar* first_property_name, Pairs... location){
(gtk_widget_style_get(widget,first_property_name,location), ...);
}
void widget_style_get_property(GtkWidget* widget, const gchar* property_name, GValue* value){
gtk_widget_style_get_property(widget,property_name, value);
}
void widget_style_get_valist(GtkWidget* widget, const gchar* first_property_name, va_list var_args){
gtk_widget_style_get_valist(widget,first_property_name, var_args);
}


void widget_class_set_accessible_type(GtkWidgetClass* widget_class, GType type){
gtk_widget_class_set_accessible_type(widget_class, type);
}
void widget_class_set_accessible_role(GtkWidgetClass* widget_class, AtkRole role){
gtk_widget_class_set_accessible_role(widget_class, role);
}
AtkObject* widget_get_accessible(GtkWidget* widget){
return gtk_widget_get_accessible(widget) ;
}
gboolean widget_child_focus(GtkWidget* widget, GtkDirectionType direction){
return gtk_widget_child_focus(widget, direction) ;
}
void widget_child_notify(GtkWidget* widget, const gchar* child_property){
gtk_widget_child_notify(widget, child_property);
}
void widget_freeze_child_notify(GtkWidget* widget){
gtk_widget_freeze_child_notify(widget);
}
gboolean widget_get_child_visible(GtkWidget* widget){
return gtk_widget_get_child_visible(widget) ;
}
GtkWidget* widget_get_parent(GtkWidget* widget){
return gtk_widget_get_parent(widget) ;
}
GtkSettings* widget_get_settings(GtkWidget* widget){
return gtk_widget_get_settings(widget) ;
}
GtkClipboard* widget_get_clipboard(GtkWidget* widget, GdkAtom selection){
return gtk_widget_get_clipboard(widget, selection) ;
}
GdkDisplay* widget_get_display(GtkWidget* widget){
return gtk_widget_get_display(widget) ;
}

GdkScreen* widget_get_screen(GtkWidget* widget){
return gtk_widget_get_screen(widget) ;
}
gboolean widget_has_screen(GtkWidget* widget){
return gtk_widget_has_screen(widget) ;
}
void widget_get_size_request(GtkWidget* widget, gint* width, gint* height){
gtk_widget_get_size_request(widget,width, height);
}
void widget_set_child_visible(GtkWidget* widget, gboolean is_visible){
gtk_widget_set_child_visible(widget, is_visible);
}
void widget_set_size_request(GtkWidget* widget, gint width, gint height){
gtk_widget_set_size_request(widget,width, height);
}
void widget_thaw_child_notify(GtkWidget* widget){
gtk_widget_thaw_child_notify(widget);
}
void widget_set_no_show_all(GtkWidget* widget, gboolean no_show_all){
gtk_widget_set_no_show_all(widget, no_show_all);
}
gboolean widget_get_no_show_all(GtkWidget* widget){
return gtk_widget_get_no_show_all(widget) ;
}
GList* widget_list_mnemonic_labels(GtkWidget* widget){
return gtk_widget_list_mnemonic_labels(widget) ;
}
void widget_add_mnemonic_label(GtkWidget* widget, GtkWidget* label){
gtk_widget_add_mnemonic_label(widget, label);
}

void widget_remove_mnemonic_label(GtkWidget* widget, GtkWidget* label){
gtk_widget_remove_mnemonic_label(widget, label);
}

void widget_error_bell(GtkWidget* widget){
gtk_widget_error_bell(widget);
}
gboolean widget_keynav_failed(GtkWidget* widget, GtkDirectionType direction){
return gtk_widget_keynav_failed(widget, direction) ;
}
gchar* widget_get_tooltip_markup(GtkWidget* widget){
return gtk_widget_get_tooltip_markup(widget) ;
}
void widget_set_tooltip_markup(GtkWidget* widget, const gchar* markup){
gtk_widget_set_tooltip_markup(widget, markup);
}
gchar* widget_get_tooltip_text(GtkWidget* widget){
return gtk_widget_get_tooltip_text(widget) ;
}
void widget_set_tooltip_text(GtkWidget* widget, const gchar* text){
gtk_widget_set_tooltip_text(widget, text);
}
GtkWindow* widget_get_tooltip_window(GtkWidget* widget){
return gtk_widget_get_tooltip_window(widget) ;
}
void widget_set_tooltip_window(GtkWidget* widget, GtkWindow* custom_window){
gtk_widget_set_tooltip_window(widget, custom_window);
}
gboolean widget_get_has_tooltip(GtkWidget* widget){
return gtk_widget_get_has_tooltip(widget) ;
}
void widget_set_has_tooltip(GtkWidget* widget, gboolean has_tooltip){
gtk_widget_set_has_tooltip(widget, has_tooltip);
}
void widget_trigger_tooltip_query(GtkWidget* widget){
gtk_widget_trigger_tooltip_query(widget);
}
GdkWindow* widget_get_window(GtkWidget* widget){
return gtk_widget_get_window(widget) ;
}
void widget_register_window(GtkWidget* widget, GdkWindow* window){
gtk_widget_register_window(widget, window);
}
void widget_unregister_window(GtkWidget* widget, GdkWindow* window){
gtk_widget_unregister_window(widget, window);
}
gboolean cairo_should_draw_window(cairo_t* cr, GdkWindow* window){
return gtk_cairo_should_draw_window(cr, window) ;
}
void cairo_transform_to_window(cairo_t* cr, GtkWidget* widget, GdkWindow* window){
gtk_cairo_transform_to_window(cr,widget, window);
}
int widget_get_allocated_width(GtkWidget* widget){
return gtk_widget_get_allocated_width(widget) ;
}
int widget_get_allocated_height(GtkWidget* widget){
return gtk_widget_get_allocated_height(widget) ;
}
void widget_get_allocation(GtkWidget* widget, GtkAllocation* allocation){
gtk_widget_get_allocation(widget, allocation);
}
void widget_set_allocation(GtkWidget* widget, const GtkAllocation* allocation){
gtk_widget_set_allocation(widget, allocation);
}
int widget_get_allocated_baseline(GtkWidget* widget){
return gtk_widget_get_allocated_baseline(widget) ;
}
void widget_get_allocated_size(GtkWidget* widget, GtkAllocation* allocation, int* baseline){
gtk_widget_get_allocated_size(widget,allocation, baseline);
}
void widget_get_clip(GtkWidget* widget, GtkAllocation* clip){
gtk_widget_get_clip(widget, clip);
}
void widget_set_clip(GtkWidget* widget, const GtkAllocation* clip){
gtk_widget_set_clip(widget, clip);
}
gboolean widget_get_app_paintable(GtkWidget* widget){
return gtk_widget_get_app_paintable(widget) ;
}
gboolean widget_get_can_default(GtkWidget* widget){
return gtk_widget_get_can_default(widget) ;
}
void widget_set_can_default(GtkWidget* widget, gboolean can_default){
gtk_widget_set_can_default(widget, can_default);
}
gboolean widget_get_can_focus(GtkWidget* widget){
return gtk_widget_get_can_focus(widget) ;
}
void widget_set_can_focus(GtkWidget* widget, gboolean can_focus){
gtk_widget_set_can_focus(widget, can_focus);
}
gboolean widget_get_focus_on_click(GtkWidget* widget){
return gtk_widget_get_focus_on_click(widget) ;
}
void widget_set_focus_on_click(GtkWidget* widget, gboolean focus_on_click){
gtk_widget_set_focus_on_click(widget, focus_on_click);
}

gboolean widget_get_has_window(GtkWidget* widget){
return gtk_widget_get_has_window(widget) ;
}
void widget_set_has_window(GtkWidget* widget, gboolean has_window){
gtk_widget_set_has_window(widget, has_window);
}
gboolean widget_get_sensitive(GtkWidget* widget){
return gtk_widget_get_sensitive(widget) ;
}
gboolean widget_is_sensitive(GtkWidget* widget){
return gtk_widget_is_sensitive(widget) ;
}

gboolean widget_get_visible(GtkWidget* widget){
return gtk_widget_get_visible(widget) ;
}
gboolean widget_is_visible(GtkWidget* widget){
return gtk_widget_is_visible(widget) ;
}
void widget_set_visible(GtkWidget* widget, gboolean visible){
return gtk_widget_set_visible(widget, visible) ;
}
void widget_set_state_flags(GtkWidget* widget, GtkStateFlags flags, gboolean clear){
gtk_widget_set_state_flags(widget,flags, clear);
}
void widget_unset_state_flags(GtkWidget* widget, GtkStateFlags flags){
gtk_widget_unset_state_flags(widget, flags);
}
GtkStateFlags widget_get_state_flags(GtkWidget* widget){
return gtk_widget_get_state_flags(widget) ;
}
gboolean widget_has_default(GtkWidget* widget){
return gtk_widget_has_default(widget) ;
}
gboolean widget_has_focus(GtkWidget* widget){
return gtk_widget_has_focus(widget) ;
}
gboolean widget_has_visible_focus(GtkWidget* widget){
return gtk_widget_has_visible_focus(widget) ;
}
gboolean widget_has_grab(GtkWidget* widget){
return gtk_widget_has_grab(widget) ;
}

gboolean widget_is_drawable(GtkWidget* widget){
return gtk_widget_is_drawable(widget) ;
}
gboolean widget_is_toplevel(GtkWidget* widget){
return gtk_widget_is_toplevel(widget) ;
}
void widget_set_window(GtkWidget* widget, GdkWindow* window){
gtk_widget_set_window(widget, window);
}
void widget_set_receives_default(GtkWidget* widget, gboolean receives_default){
gtk_widget_set_receives_default(widget, receives_default);
}
gboolean widget_get_receives_default(GtkWidget* widget){
return gtk_widget_get_receives_default(widget) ;
}
void widget_set_support_multidevice(GtkWidget* widget, gboolean support_multidevice){
gtk_widget_set_support_multidevice(widget, support_multidevice);
}
gboolean widget_get_support_multidevice(GtkWidget* widget){
return gtk_widget_get_support_multidevice(widget) ;
}
void widget_set_realized(GtkWidget* widget, gboolean realized){
gtk_widget_set_realized(widget, realized);
}
gboolean widget_get_realized(GtkWidget* widget){
return gtk_widget_get_realized(widget) ;
}
void widget_set_mapped(GtkWidget* widget, gboolean mapped){
gtk_widget_set_mapped(widget, mapped);
}
gboolean widget_get_mapped(GtkWidget* widget){
return gtk_widget_get_mapped(widget) ;
}


gboolean widget_device_is_shadowed(GtkWidget* widget, GdkDevice* device){
return gtk_widget_device_is_shadowed(widget, device) ;
}
GdkModifierType widget_get_modifier_mask(GtkWidget* widget, GdkModifierIntent intent){
return gtk_widget_get_modifier_mask(widget, intent) ;
}
void widget_insert_action_group(GtkWidget* widget, const gchar* name, GActionGroup* group){
gtk_widget_insert_action_group(widget,name, group);
}
double widget_get_opacity(GtkWidget* widget){
return gtk_widget_get_opacity(widget) ;
}
void widget_set_opacity(GtkWidget* widget, double opacity){
gtk_widget_set_opacity(widget, opacity);
}
const gchar** widget_list_action_prefixes(GtkWidget* widget) {
return gtk_widget_list_action_prefixes(widget) ;
}
GActionGroup* widget_get_action_group(GtkWidget* widget, const gchar* prefix){
return gtk_widget_get_action_group(widget, prefix) ;
}
GtkWidgetPath* widget_get_path(GtkWidget* widget){
return gtk_widget_get_path(widget) ;
}
GtkStyleContext* widget_get_style_context(GtkWidget* widget){
return gtk_widget_get_style_context(widget) ;
}
void widget_reset_style(GtkWidget* widget){
gtk_widget_reset_style(widget);
}
const char* widget_class_get_css_name(GtkWidgetClass* widget_class) {
return gtk_widget_class_get_css_name(widget_class) ;
}
void widget_class_set_css_name(GtkWidgetClass* widget_class, const char* name){
gtk_widget_class_set_css_name(widget_class, name);
}
GtkRequisition* requisition_new(){
return gtk_requisition_new() ;
}
GtkRequisition* requisition_copy(const GtkRequisition* requisition){
return gtk_requisition_copy(requisition) ;
}
void requisition_free(GtkRequisition* requisition){
gtk_requisition_free(requisition);
}
void widget_get_preferred_height(GtkWidget* widget, gint* minimum_height, gint* natural_height){
gtk_widget_get_preferred_height(widget,minimum_height, natural_height);
}
void widget_get_preferred_width(GtkWidget* widget, gint* minimum_width, gint* natural_width){
gtk_widget_get_preferred_width(widget,minimum_width, natural_width);
}
void widget_get_preferred_height_for_width(GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height){
gtk_widget_get_preferred_height_for_width(widget,width,minimum_height, natural_height);
}
void widget_get_preferred_width_for_height(GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width){
gtk_widget_get_preferred_width_for_height(widget,height,minimum_width, natural_width);
}
void widget_get_preferred_height_and_baseline_for_width(GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height, gint* minimum_baseline, gint* natural_baseline){
gtk_widget_get_preferred_height_and_baseline_for_width(widget,width,minimum_height,natural_height,minimum_baseline, natural_baseline);
}
GtkSizeRequestMode widget_get_request_mode(GtkWidget* widget){
return gtk_widget_get_request_mode(widget) ;
}
void widget_get_preferred_size(GtkWidget* widget, GtkRequisition* minimum_size, GtkRequisition* natural_size){
gtk_widget_get_preferred_size(widget,minimum_size, natural_size);
}
gint distribute_natural_allocation(gint extra_space, guint n_requested_sizes, GtkRequestedSize* sizes){
return gtk_distribute_natural_allocation(extra_space,n_requested_sizes, sizes) ;
}
GtkAlign widget_get_halign(GtkWidget* widget){
return gtk_widget_get_halign(widget) ;
}
void widget_set_halign(GtkWidget* widget, GtkAlign align){
gtk_widget_set_halign(widget, align);
}
GtkAlign widget_get_valign(GtkWidget* widget){
return gtk_widget_get_valign(widget) ;
}
GtkAlign widget_get_valign_with_baseline(GtkWidget* widget){
return gtk_widget_get_valign_with_baseline(widget) ;
}
void widget_set_valign(GtkWidget* widget, GtkAlign align){
gtk_widget_set_valign(widget, align);
}




gint widget_get_margin_start(GtkWidget* widget){
return gtk_widget_get_margin_start(widget) ;
}
void widget_set_margin_start(GtkWidget* widget, gint margin){
gtk_widget_set_margin_start(widget, margin);
}
gint widget_get_margin_end(GtkWidget* widget){
return gtk_widget_get_margin_end(widget) ;
}
void widget_set_margin_end(GtkWidget* widget, gint margin){
gtk_widget_set_margin_end(widget, margin);
}
gint widget_get_margin_top(GtkWidget* widget){
return gtk_widget_get_margin_top(widget) ;
}
void widget_set_margin_top(GtkWidget* widget, gint margin){
gtk_widget_set_margin_top(widget, margin);
}
gint widget_get_margin_bottom(GtkWidget* widget){
return gtk_widget_get_margin_bottom(widget) ;
}
void widget_set_margin_bottom(GtkWidget* widget, gint margin){
gtk_widget_set_margin_bottom(widget, margin);
}
gboolean widget_get_hexpand(GtkWidget* widget){
return gtk_widget_get_hexpand(widget) ;
}
void widget_set_hexpand(GtkWidget* widget, gboolean expand){
gtk_widget_set_hexpand(widget, expand);
}
gboolean widget_get_hexpand_set(GtkWidget* widget){
return gtk_widget_get_hexpand_set(widget) ;
}
void widget_set_hexpand_set(GtkWidget* widget, gboolean set){
gtk_widget_set_hexpand_set(widget, set);
}
gboolean widget_get_vexpand(GtkWidget* widget){
return gtk_widget_get_vexpand(widget) ;
}
void widget_set_vexpand(GtkWidget* widget, gboolean expand){
gtk_widget_set_vexpand(widget, expand);
}
gboolean widget_get_vexpand_set(GtkWidget* widget){
return gtk_widget_get_vexpand_set(widget) ;
}
void widget_set_vexpand_set(GtkWidget* widget, gboolean set){
gtk_widget_set_vexpand_set(widget, set);
}
void widget_queue_compute_expand(GtkWidget* widget){
gtk_widget_queue_compute_expand(widget);
}
gboolean widget_compute_expand(GtkWidget* widget, GtkOrientation orientation){
return gtk_widget_compute_expand(widget, orientation) ;
}
void widget_init_template(GtkWidget* widget){
gtk_widget_init_template(widget);
}
void widget_class_set_template(GtkWidgetClass* widget_class, GBytes* template_bytes){
gtk_widget_class_set_template(widget_class, template_bytes);
}
void widget_class_set_template_from_resource(GtkWidgetClass* widget_class, const gchar* resource_name){
gtk_widget_class_set_template_from_resource(widget_class, resource_name);
}
GObject* widget_get_template_child(GtkWidget* widget, GType widget_type, const gchar* name){
return gtk_widget_get_template_child(widget,widget_type, name) ;
}
void widget_class_bind_template_child_full(GtkWidgetClass* widget_class, const gchar* name, gboolean internal_child, gssize struct_offset){
gtk_widget_class_bind_template_child_full(widget_class,name,internal_child, struct_offset);
}
void widget_class_bind_template_callback_full(GtkWidgetClass* widget_class, const gchar* callback_name, GCallback callback_symbol){
gtk_widget_class_bind_template_callback_full(widget_class,callback_name, callback_symbol);
}
void widget_class_set_connect_func(GtkWidgetClass* widget_class, GtkBuilderConnectFunc connect_func, gpointer connect_data, GDestroyNotify connect_data_destroy){
gtk_widget_class_set_connect_func(widget_class,connect_func,connect_data, connect_data_destroy);
}



void container_add(GtkContainer* container, GtkWidget* widget){
gtk_container_add(container, widget);
}
void container_remove(GtkContainer* container, GtkWidget* widget){
gtk_container_remove(container, widget);
}
template <typename... Property>
void container_add_with_properties(GtkContainer* container, GtkWidget* widget, const gchar* first_prop_name, Property... values){

}



void container_check_resize(GtkContainer* container){
gtk_container_check_resize(container);
}
void container_foreach(GtkContainer* container, GtkCallback callback, gpointer callback_data){
gtk_container_foreach(container,callback, callback_data);
}
GList* container_get_children(GtkContainer* container){
return gtk_container_get_children(container) ;
}
GtkWidgetPath* container_get_path_for_child(GtkContainer* container, GtkWidget* child){
return gtk_container_get_path_for_child(container, child) ;
}


GtkWidget* container_get_focus_child(GtkContainer* container){
return gtk_container_get_focus_child(container) ;
}
void container_set_focus_child(GtkContainer* container, GtkWidget* child){
gtk_container_set_focus_child(container, child);
}
GtkAdjustment* container_get_focus_vadjustment(GtkContainer* container){
return gtk_container_get_focus_vadjustment(container) ;
}
void container_set_focus_vadjustment(GtkContainer* container, GtkAdjustment* adjustment){
gtk_container_set_focus_vadjustment(container, adjustment);
}
GtkAdjustment* container_get_focus_hadjustment(GtkContainer* container){
return gtk_container_get_focus_hadjustment(container) ;
}
void container_set_focus_hadjustment(GtkContainer* container, GtkAdjustment* adjustment){
gtk_container_set_focus_hadjustment(container, adjustment);
}

GType container_child_type(GtkContainer* container){
return gtk_container_child_type(container) ;
}
template <typename... Location>
void container_child_get(GtkContainer* container, GtkWidget* child, const gchar* first_prop_name, Location... property){
(gtk_container_child_get(container,child,first_prop_name,property), ...);
}
template <typename... Property>
void container_child_set(GtkContainer* container, GtkWidget* child, const gchar* first_prop_name, Property... list){
(gtk_container_child_set(container,child,first_prop_name,list), ...);
}
void container_child_get_property(GtkContainer* container, GtkWidget* child, const gchar* property_name, GValue* value){
gtk_container_child_get_property(container,child,property_name, value);
}
void container_child_set_property(GtkContainer* container, GtkWidget* child, const gchar* property_name, const GValue* value){
gtk_container_child_set_property(container,child,property_name, value);
}
void container_child_get_valist(GtkContainer* container, GtkWidget* child, const gchar* first_property_name, va_list var_args){
gtk_container_child_get_valist(container,child,first_property_name, var_args);
}
void container_child_set_valist(GtkContainer* container, GtkWidget* child, const gchar* first_property_name, va_list var_args){
gtk_container_child_set_valist(container,child,first_property_name, var_args);
}
void container_child_notify(GtkContainer* container, GtkWidget* child, const gchar* child_property){
gtk_container_child_notify(container,child, child_property);
}
void container_child_notify_by_pspec(GtkContainer* container, GtkWidget* child, GParamSpec* pspec){
gtk_container_child_notify_by_pspec(container,child, pspec);
}
void container_forall(GtkContainer* container, GtkCallback callback, gpointer callback_data){
gtk_container_forall(container,callback, callback_data);
}
guint container_get_border_width(GtkContainer* container){
return gtk_container_get_border_width(container) ;
}
void container_set_border_width(GtkContainer* container, guint border_width){
gtk_container_set_border_width(container, border_width);
}
void container_propagate_draw(GtkContainer* container, GtkWidget* child, cairo_t* cr){
gtk_container_propagate_draw(container,child, cr);
}





GParamSpec* container_class_find_child_property(GObjectClass* cclass, const gchar* property_name){
return gtk_container_class_find_child_property(cclass, property_name) ;
}
void container_class_install_child_property(GtkContainerClass* cclass, guint property_id, GParamSpec* pspec){
gtk_container_class_install_child_property(cclass,property_id, pspec);
}
void container_class_install_child_properties(GtkContainerClass* cclass, guint n_pspecs, GParamSpec** pspecs){
gtk_container_class_install_child_properties(cclass,n_pspecs, pspecs);
}
GParamSpec** container_class_list_child_properties(GObjectClass* cclass, guint* n_properties){
return gtk_container_class_list_child_properties(cclass, n_properties) ;
}
void container_class_handle_border_width(GtkContainerClass* klass){
gtk_container_class_handle_border_width(klass);
}




GtkWidget* bin_get_child(GtkBin* bin){
return gtk_bin_get_child(bin) ;
}



void menu_shell_append(GtkMenuShell* menu_shell, GtkWidget* child){
gtk_menu_shell_append(menu_shell, child);
}
void menu_shell_prepend(GtkMenuShell* menu_shell, GtkWidget* child){
gtk_menu_shell_prepend(menu_shell, child);
}
void menu_shell_insert(GtkMenuShell* menu_shell, GtkWidget* child, gint position){
gtk_menu_shell_insert(menu_shell,child, position);
}
void menu_shell_deactivate(GtkMenuShell* menu_shell){
gtk_menu_shell_deactivate(menu_shell);
}
void menu_shell_select_item(GtkMenuShell* menu_shell, GtkWidget* menu_item){
gtk_menu_shell_select_item(menu_shell, menu_item);
}
void menu_shell_select_first(GtkMenuShell* menu_shell, gboolean search_sensitive){
gtk_menu_shell_select_first(menu_shell, search_sensitive);
}
void menu_shell_deselect(GtkMenuShell* menu_shell){
gtk_menu_shell_deselect(menu_shell);
}
void menu_shell_activate_item(GtkMenuShell* menu_shell, GtkWidget* menu_item, gboolean force_deactivate){
gtk_menu_shell_activate_item(menu_shell,menu_item, force_deactivate);
}
void menu_shell_cancel(GtkMenuShell* menu_shell){
gtk_menu_shell_cancel(menu_shell);
}
void menu_shell_set_take_focus(GtkMenuShell* menu_shell, gboolean take_focus){
gtk_menu_shell_set_take_focus(menu_shell, take_focus);
}
gboolean menu_shell_get_take_focus(GtkMenuShell* menu_shell){
return gtk_menu_shell_get_take_focus(menu_shell) ;
}
GtkWidget* menu_shell_get_selected_item(GtkMenuShell* menu_shell){
return gtk_menu_shell_get_selected_item(menu_shell) ;
}
GtkWidget* menu_shell_get_parent_shell(GtkMenuShell* menu_shell){
return gtk_menu_shell_get_parent_shell(menu_shell) ;
}
void menu_shell_bind_model(GtkMenuShell* menu_shell, GMenuModel* model, const gchar* action_namespace, gboolean with_separators){
gtk_menu_shell_bind_model(menu_shell,model,action_namespace, with_separators);
}



gdouble range_get_fill_level(GtkRange* range){
return gtk_range_get_fill_level(range) ;
}
gboolean range_get_restrict_to_fill_level(GtkRange* range){
return gtk_range_get_restrict_to_fill_level(range) ;
}
gboolean range_get_show_fill_level(GtkRange* range){
return gtk_range_get_show_fill_level(range) ;
}
void range_set_fill_level(GtkRange* range, gdouble fill_level){
gtk_range_set_fill_level(range, fill_level);
}
void range_set_restrict_to_fill_level(GtkRange* range, gboolean restrict_to_fill_level){
gtk_range_set_restrict_to_fill_level(range, restrict_to_fill_level);
}
void range_set_show_fill_level(GtkRange* range, gboolean show_fill_level){
gtk_range_set_show_fill_level(range, show_fill_level);
}
GtkAdjustment* range_get_adjustment(GtkRange* range){
return gtk_range_get_adjustment(range) ;
}
void range_set_adjustment(GtkRange* range, GtkAdjustment* adjustment){
gtk_range_set_adjustment(range, adjustment);
}
gboolean range_get_inverted(GtkRange* range){
return gtk_range_get_inverted(range) ;
}
void range_set_inverted(GtkRange* range, gboolean setting){
gtk_range_set_inverted(range, setting);
}
gdouble range_get_value(GtkRange* range){
return gtk_range_get_value(range) ;
}
void range_set_value(GtkRange* range, gdouble value){
gtk_range_set_value(range, value);
}
void range_set_increments(GtkRange* range, gdouble step, gdouble page){
gtk_range_set_increments(range,step, page);
}
void range_set_range(GtkRange* range, gdouble min, gdouble max){
gtk_range_set_range(range,min, max);
}
gint range_get_round_digits(GtkRange* range){
return gtk_range_get_round_digits(range) ;
}
void range_set_round_digits(GtkRange* range, gint round_digits){
gtk_range_set_round_digits(range, round_digits);
}
void range_set_lower_stepper_sensitivity(GtkRange* range, GtkSensitivityType sensitivity){
gtk_range_set_lower_stepper_sensitivity(range, sensitivity);
}
GtkSensitivityType range_get_lower_stepper_sensitivity(GtkRange* range){
return gtk_range_get_lower_stepper_sensitivity(range) ;
}
void range_set_upper_stepper_sensitivity(GtkRange* range, GtkSensitivityType sensitivity){
gtk_range_set_upper_stepper_sensitivity(range, sensitivity);
}
GtkSensitivityType range_get_upper_stepper_sensitivity(GtkRange* range){
return gtk_range_get_upper_stepper_sensitivity(range) ;
}
gboolean range_get_flippable(GtkRange* range){
return gtk_range_get_flippable(range) ;
}
void range_set_flippable(GtkRange* range, gboolean flippable){
gtk_range_set_flippable(range, flippable);
}

void range_get_range_rect(GtkRange* range, GdkRectangle* range_rect){
gtk_range_get_range_rect(range, range_rect);
}
void range_get_slider_range(GtkRange* range, gint* slider_start, gint* slider_end){
gtk_range_get_slider_range(range,slider_start, slider_end);
}
gboolean range_get_slider_size_fixed(GtkRange* range){
return gtk_range_get_slider_size_fixed(range) ;
}


void range_set_slider_size_fixed(GtkRange* range, gboolean size_fixed){
gtk_range_set_slider_size_fixed(range, size_fixed);
}



void im_context_set_client_window(GtkIMContext* context, GdkWindow* window){
gtk_im_context_set_client_window(context, window);
}
void im_context_get_preedit_string(GtkIMContext* context, gchar** str, PangoAttrList** attrs, gint* cursor_pos){
gtk_im_context_get_preedit_string(context,str,attrs, cursor_pos);
}
gboolean im_context_filter_keypress(GtkIMContext* context, GdkEventKey* event){
return gtk_im_context_filter_keypress(context, event) ;
}
void im_context_focus_in(GtkIMContext* context){
gtk_im_context_focus_in(context);
}
void im_context_focus_out(GtkIMContext* context){
gtk_im_context_focus_out(context);
}
void im_context_reset(GtkIMContext* context){
gtk_im_context_reset(context);
}
void im_context_set_cursor_location(GtkIMContext* context, const GdkRectangle* area){
gtk_im_context_set_cursor_location(context, area);
}
void im_context_set_use_preedit(GtkIMContext* context, gboolean use_preedit){
gtk_im_context_set_use_preedit(context, use_preedit);
}
void im_context_set_surrounding(GtkIMContext* context, const gchar* text, gint len, gint cursor_index){
gtk_im_context_set_surrounding(context,text,len, cursor_index);
}
gboolean im_context_get_surrounding(GtkIMContext* context, gchar** text, gint* cursor_index){
return gtk_im_context_get_surrounding(context,text, cursor_index) ;
}
gboolean im_context_delete_surrounding(GtkIMContext* context, gint offset, gint n_chars){
return gtk_im_context_delete_surrounding(context,offset, n_chars) ;
}



void native_dialog_show(GtkNativeDialog* self){
gtk_native_dialog_show(self);
}
void native_dialog_hide(GtkNativeDialog* self){
gtk_native_dialog_hide(self);
}
void native_dialog_destroy(GtkNativeDialog* self){
gtk_native_dialog_destroy(self);
}
gboolean native_dialog_get_visible(GtkNativeDialog* self){
return gtk_native_dialog_get_visible(self) ;
}
void native_dialog_set_modal(GtkNativeDialog* self, gboolean modal){
gtk_native_dialog_set_modal(self, modal);
}
gboolean native_dialog_get_modal(GtkNativeDialog* self){
return gtk_native_dialog_get_modal(self) ;
}
void native_dialog_set_title(GtkNativeDialog* self, const char* title){
gtk_native_dialog_set_title(self, title);
}
const gchar* native_dialog_get_title(GtkNativeDialog* self) {
return gtk_native_dialog_get_title(self) ;
}
void native_dialog_set_transient_for(GtkNativeDialog* self, GtkWindow* parent){
gtk_native_dialog_set_transient_for(self, parent);
}
GtkWindow* native_dialog_get_transient_for(GtkNativeDialog* self){
return gtk_native_dialog_get_transient_for(self) ;
}
gint native_dialog_run(GtkNativeDialog* self){
return gtk_native_dialog_run(self) ;
}


#if defined(GTKKA_PLUG_ENABLED)

void plug_construct(GtkPlug* plug, Window socket_id){
gtk_plug_construct(plug, socked_id);
}
void plug_construct_for_display(GtkPlug* plug, GdkDisplay* display, Window socket_id){
gtk_plug_construct_for_display(plug,display, socket_id);
}
GtkWidget* plug_new(Window socket_id){
return gtk_plug_new(socked_id) ;
}
GtkWidget* plug_new_for_display(GdkDisplay* display, Window socket_id){
return gtk_plug_new_for_display(display, socket_id) ;
}
Window plug_get_id(GtkPlug* plug){
return gtk_plug_get_id(plug) ;
}
gboolean plug_get_embedded(GtkPlug* plug){
return gtk_plug_get_embedded(plug) ;
}
GdkWindow* plug_get_socket_window(GtkPlug* plug){
return gtk_plug_get_socket_window(plug) ;
}


#endif // defined(GTKKA_PLUG_ENABLED)
#if defined(GTKKA_SOCKET_ENABLED)

GtkWidget* socket_new(){
return gtk_socket_new() ;
}
void socket_add_id(GtkSocket* socket_, Window window){
gtk_socket_add_id(socked_, window);
}
Window socket_get_id(GtkSocket* socket_){
return gtk_socket_get_id(socket_) ;
}
GdkWindow* socket_get_plug_window(GtkSocket* socket_){
return gtk_socket_get_plug_window(socket_) ;
}


#endif // defined(GTKKA_SOCKET_ENABLED)

GtkRecentManager* recent_manager_new(){
return gtk_recent_manager_new() ;
}
GtkRecentManager* recent_manager_get_default(){
return gtk_recent_manager_get_default() ;
}
gboolean recent_manager_add_item(GtkRecentManager* manager, const gchar* uri){
return gtk_recent_manager_add_item(manager, uri) ;
}
gboolean recent_manager_add_full(GtkRecentManager* manager, const gchar* uri, const GtkRecentData* recent_data){
return gtk_recent_manager_add_full(manager,uri, recent_data) ;
}
gboolean recent_manager_remove_item(GtkRecentManager* manager, const gchar* uri, GError** error){
return gtk_recent_manager_remove_item(manager,uri, error) ;
}
GtkRecentInfo* recent_manager_lookup_item(GtkRecentManager* manager, const gchar* uri, GError** error){
return gtk_recent_manager_lookup_item(manager,uri, error) ;
}
gboolean recent_manager_has_item(GtkRecentManager* manager, const gchar* uri){
return gtk_recent_manager_has_item(manager, uri) ;
}
gboolean recent_manager_move_item(GtkRecentManager* manager, const gchar* uri, const gchar* new_uri, GError** error){
return gtk_recent_manager_move_item(manager,uri,new_uri, error) ;
}
GList* recent_manager_get_items(GtkRecentManager* manager){
return gtk_recent_manager_get_items(manager) ;
}
gint recent_manager_purge_items(GtkRecentManager* manager, GError** error){
return gtk_recent_manager_purge_items(manager, error) ;
}
GtkRecentInfo* recent_info_ref(GtkRecentInfo* info){
return gtk_recent_info_ref(info) ;
}
void recent_info_unref(GtkRecentInfo* info){
gtk_recent_info_unref(info);
}
const gchar* recent_info_get_uri(GtkRecentInfo* info) {
return gtk_recent_info_get_uri(info) ;
}
const gchar* recent_info_get_display_name(GtkRecentInfo* info) {
return gtk_recent_info_get_display_name(info) ;
}
const gchar* recent_info_get_description(GtkRecentInfo* info) {
return gtk_recent_info_get_description(info) ;
}
const gchar* recent_info_get_mime_type(GtkRecentInfo* info) {
return gtk_recent_info_get_mime_type(info) ;
}
time_t recent_info_get_added(GtkRecentInfo* info){
return gtk_recent_info_get_added(info) ;
}
time_t recent_info_get_modified(GtkRecentInfo* info){
return gtk_recent_info_get_modified(info) ;
}
time_t recent_info_get_visited(GtkRecentInfo* info){
return gtk_recent_info_get_visited(info) ;
}
gboolean recent_info_get_private_hint(GtkRecentInfo* info){
return gtk_recent_info_get_private_hint(info) ;
}
gboolean recent_info_get_application_info(GtkRecentInfo* info, const gchar* app_name, const gchar** app_exec, guint* count, time_t* time_){
return gtk_recent_info_get_application_info(info,app_name,app_exec,count, time_) ;
}
gchar** recent_info_get_applications(GtkRecentInfo* info, gsize* length){
return gtk_recent_info_get_applications(info, length) ;
}
gchar* recent_info_last_application(GtkRecentInfo* info){
return gtk_recent_info_last_application(info) ;
}
gboolean recent_info_has_application(GtkRecentInfo* info, const gchar* app_name){
return gtk_recent_info_has_application(info, app_name) ;
}
GAppInfo* recent_info_create_app_info(GtkRecentInfo* info, const gchar* app_name, GError** error){
return gtk_recent_info_create_app_info(info,app_name, error) ;
}
gchar** recent_info_get_groups(GtkRecentInfo* info, gsize* length){
return gtk_recent_info_get_groups(info, length) ;
}
gboolean recent_info_has_group(GtkRecentInfo* info, const gchar* group_name){
return gtk_recent_info_has_group(info, group_name) ;
}
GdkPixbuf* recent_info_get_icon(GtkRecentInfo* info, gint size){
return gtk_recent_info_get_icon(info, size) ;
}
GIcon* recent_info_get_gicon(GtkRecentInfo* info){
return gtk_recent_info_get_gicon(info) ;
}
gchar* recent_info_get_short_name(GtkRecentInfo* info){
return gtk_recent_info_get_short_name(info) ;
}
gchar* recent_info_get_uri_display(GtkRecentInfo* info){
return gtk_recent_info_get_uri_display(info) ;
}
gint recent_info_get_age(GtkRecentInfo* info){
return gtk_recent_info_get_age(info) ;
}
gboolean recent_info_is_local(GtkRecentInfo* info){
return gtk_recent_info_is_local(info) ;
}
gboolean recent_info_exists(GtkRecentInfo* info){
return gtk_recent_info_exists(info) ;
}
gboolean recent_info_match(GtkRecentInfo* info_a, GtkRecentInfo* info_b){
return gtk_recent_info_match(info_a, info_b) ;
}



void recent_chooser_set_show_private(GtkRecentChooser* chooser, gboolean show_private){
gtk_recent_chooser_set_show_private(chooser, show_private);
}
gboolean recent_chooser_get_show_private(GtkRecentChooser* chooser){
return gtk_recent_chooser_get_show_private(chooser) ;
}
void recent_chooser_set_show_not_found(GtkRecentChooser* chooser, gboolean show_not_found){
gtk_recent_chooser_set_show_not_found(chooser, show_not_found);
}
gboolean recent_chooser_get_show_not_found(GtkRecentChooser* chooser){
return gtk_recent_chooser_get_show_not_found(chooser) ;
}
void recent_chooser_set_show_icons(GtkRecentChooser* chooser, gboolean show_icons){
gtk_recent_chooser_set_show_icons(chooser, show_icons);
}
gboolean recent_chooser_get_show_icons(GtkRecentChooser* chooser){
return gtk_recent_chooser_get_show_icons(chooser) ;
}
void recent_chooser_set_select_multiple(GtkRecentChooser* chooser, gboolean select_multiple){
gtk_recent_chooser_set_select_multiple(chooser, select_multiple);
}
gboolean recent_chooser_get_select_multiple(GtkRecentChooser* chooser){
return gtk_recent_chooser_get_select_multiple(chooser) ;
}
void recent_chooser_set_local_only(GtkRecentChooser* chooser, gboolean local_only){
gtk_recent_chooser_set_local_only(chooser, local_only);
}
gboolean recent_chooser_get_local_only(GtkRecentChooser* chooser){
return gtk_recent_chooser_get_local_only(chooser) ;
}
void recent_chooser_set_limit(GtkRecentChooser* chooser, gint limit){
gtk_recent_chooser_set_limit(chooser, limit);
}
gint recent_chooser_get_limit(GtkRecentChooser* chooser){
return gtk_recent_chooser_get_limit(chooser) ;
}
void recent_chooser_set_show_tips(GtkRecentChooser* chooser, gboolean show_tips){
gtk_recent_chooser_set_show_tips(chooser, show_tips);
}
gboolean recent_chooser_get_show_tips(GtkRecentChooser* chooser){
return gtk_recent_chooser_get_show_tips(chooser) ;
}
void recent_chooser_set_sort_type(GtkRecentChooser* chooser, GtkRecentSortType sort_type){
gtk_recent_chooser_set_sort_type(chooser, sort_type);
}
GtkRecentSortType recent_chooser_get_sort_type(GtkRecentChooser* chooser){
return gtk_recent_chooser_get_sort_type(chooser) ;
}




void recent_chooser_set_sort_func(GtkRecentChooser* chooser, GtkRecentSortFunc sort_func, gpointer sort_data, GDestroyNotify data_destroy){
gtk_recent_chooser_set_sort_func(chooser,sort_func,sort_data, data_destroy);
}
gboolean recent_chooser_set_current_uri(GtkRecentChooser* chooser, const gchar* uri, GError** error){
return gtk_recent_chooser_set_current_uri(chooser,uri, error) ;
}
gchar* recent_chooser_get_current_uri(GtkRecentChooser* chooser){
return gtk_recent_chooser_get_current_uri(chooser) ;
}
GtkRecentInfo* recent_chooser_get_current_item(GtkRecentChooser* chooser){
return gtk_recent_chooser_get_current_item(chooser) ;
}
gboolean recent_chooser_select_uri(GtkRecentChooser* chooser, const gchar* uri, GError** error){
return gtk_recent_chooser_select_uri(chooser,uri, error) ;
}
void recent_chooser_unselect_uri(GtkRecentChooser* chooser, const gchar* uri){
gtk_recent_chooser_unselect_uri(chooser, uri);
}
void recent_chooser_select_all(GtkRecentChooser* chooser){
gtk_recent_chooser_select_all(chooser);
}
void recent_chooser_unselect_all(GtkRecentChooser* chooser){
gtk_recent_chooser_unselect_all(chooser);
}
GList* recent_chooser_get_items(GtkRecentChooser* chooser){
return gtk_recent_chooser_get_items(chooser) ;
}
gchar** recent_chooser_get_uris(GtkRecentChooser* chooser, gsize* length){
return gtk_recent_chooser_get_uris(chooser, length) ;
}
void recent_chooser_add_filter(GtkRecentChooser* chooser, GtkRecentFilter* filter){
gtk_recent_chooser_add_filter(chooser, filter);
}
void recent_chooser_remove_filter(GtkRecentChooser* chooser, GtkRecentFilter* filter){
gtk_recent_chooser_remove_filter(chooser, filter);
}
GSList* recent_chooser_list_filters(GtkRecentChooser* chooser){
return gtk_recent_chooser_list_filters(chooser) ;
}
void recent_chooser_set_filter(GtkRecentChooser* chooser, GtkRecentFilter* filter){
gtk_recent_chooser_set_filter(chooser, filter);
}
GtkRecentFilter* recent_chooser_get_filter(GtkRecentChooser* chooser){
return gtk_recent_chooser_get_filter(chooser) ;
}




template <typename... ID>
GtkWidget* recent_chooser_dialog_new(const gchar* title, GtkWindow* parent, const gchar* first_button_text, ID... response_id){
return (gtk_recent_chooser_dialog_new(title,parent,first_button_text,response_id), ...) ;
}
template <typename... ID>
GtkWidget* recent_chooser_dialog_new_for_manager(const gchar* title, GtkWindow* parent, GtkRecentManager* manager, const gchar* first_button_text, ID... response_id){
return (gtk_recent_chooser_dialog_new_for_manager(title,parent,manager,first_button_text,response_id), ...) ;
}



GtkWidget* recent_chooser_menu_new(){
return gtk_recent_chooser_menu_new() ;
}
GtkWidget* recent_chooser_menu_new_for_manager(GtkRecentManager* manager){
return gtk_recent_chooser_menu_new_for_manager(manager) ;
}
gboolean recent_chooser_menu_get_show_numbers(GtkRecentChooserMenu* menu){
return gtk_recent_chooser_menu_get_show_numbers(menu) ;
}
void recent_chooser_menu_set_show_numbers(GtkRecentChooserMenu* menu, gboolean show_numbers){
gtk_recent_chooser_menu_set_show_numbers(menu, show_numbers);
}



GtkWidget* recent_chooser_widget_new(){
return gtk_recent_chooser_widget_new() ;
}
GtkWidget* recent_chooser_widget_new_for_manager(GtkRecentManager* manager){
return gtk_recent_chooser_widget_new_for_manager(manager) ;
}






GtkRecentFilter* recent_filter_new(){
return gtk_recent_filter_new() ;
}
const gchar* recent_filter_get_name(GtkRecentFilter* filter) {
return gtk_recent_filter_get_name(filter) ;
}
void recent_filter_set_name(GtkRecentFilter* filter, const gchar* name){
gtk_recent_filter_set_name(filter, name);
}
void recent_filter_add_mime_type(GtkRecentFilter* filter, const gchar* mime_type){
gtk_recent_filter_add_mime_type(filter, mime_type);
}
void recent_filter_add_pattern(GtkRecentFilter* filter, const gchar* pattern){
gtk_recent_filter_add_pattern(filter, pattern);
}
void recent_filter_add_pixbuf_formats(GtkRecentFilter* filter){
gtk_recent_filter_add_pixbuf_formats(filter);
}
void recent_filter_add_application(GtkRecentFilter* filter, const gchar* application){
gtk_recent_filter_add_application(filter, application);
}
void recent_filter_add_group(GtkRecentFilter* filter, const gchar* group){
gtk_recent_filter_add_group(filter, group);
}
void recent_filter_add_age(GtkRecentFilter* filter, gint days){
gtk_recent_filter_add_age(filter, days);
}
void recent_filter_add_custom(GtkRecentFilter* filter, GtkRecentFilterFlags needed, GtkRecentFilterFunc func, gpointer data, GDestroyNotify data_destroy){
gtk_recent_filter_add_custom(filter,needed,func,data, data_destroy);
}
GtkRecentFilterFlags recent_filter_get_needed(GtkRecentFilter* filter){
return gtk_recent_filter_get_needed(filter) ;
}
gboolean recent_filter_filter(GtkRecentFilter* filter, const GtkRecentFilterInfo* filter_info){
return gtk_recent_filter_filter(filter, filter_info) ;
}



GAppInfo* app_chooser_get_app_info(GtkAppChooser* self){
return gtk_app_chooser_get_app_info(self) ;
}
gchar* app_chooser_get_content_type(GtkAppChooser* self){
return gtk_app_chooser_get_content_type(self) ;
}
void app_chooser_refresh(GtkAppChooser* self){
gtk_app_chooser_refresh(self);
}



GtkWidget* app_chooser_button_new(const gchar* content_type){
return gtk_app_chooser_button_new(content_type) ;
}
void app_chooser_button_append_custom_item(GtkAppChooserButton* self, const gchar* name, const gchar* label, GIcon* icon){
gtk_app_chooser_button_append_custom_item(self,name,label, icon);
}
void app_chooser_button_append_separator(GtkAppChooserButton* self){
gtk_app_chooser_button_append_separator(self);
}
void app_chooser_button_set_active_custom_item(GtkAppChooserButton* self, const gchar* name){
gtk_app_chooser_button_set_active_custom_item(self, name);
}
gboolean app_chooser_button_get_show_default_item(GtkAppChooserButton* self){
return gtk_app_chooser_button_get_show_default_item(self) ;
}
void app_chooser_button_set_show_default_item(GtkAppChooserButton* self, gboolean setting){
gtk_app_chooser_button_set_show_default_item(self, setting);
}
gboolean app_chooser_button_get_show_dialog_item(GtkAppChooserButton* self){
return gtk_app_chooser_button_get_show_dialog_item(self) ;
}
void app_chooser_button_set_show_dialog_item(GtkAppChooserButton* self, gboolean setting){
gtk_app_chooser_button_set_show_dialog_item(self, setting);
}
const gchar* app_chooser_button_get_heading(GtkAppChooserButton* self) {
return gtk_app_chooser_button_get_heading(self) ;
}
void app_chooser_button_set_heading(GtkAppChooserButton* self, const gchar* heading){
gtk_app_chooser_button_set_heading(self, heading);
}



GtkWidget* app_chooser_dialog_new(GtkWindow* parent, GtkDialogFlags flags, GFile* file){
return gtk_app_chooser_dialog_new(parent,flags, file) ;
}
GtkWidget* app_chooser_dialog_new_for_content_type(GtkWindow* parent, GtkDialogFlags flags, const gchar* content_type){
return gtk_app_chooser_dialog_new_for_content_type(parent,flags, content_type) ;
}
GtkWidget* app_chooser_dialog_get_widget(GtkAppChooserDialog* self){
return gtk_app_chooser_dialog_get_widget(self) ;
}
void app_chooser_dialog_set_heading(GtkAppChooserDialog* self, const gchar* heading){
gtk_app_chooser_dialog_set_heading(self, heading);
}
const gchar* app_chooser_dialog_get_heading(GtkAppChooserDialog* self) {
return gtk_app_chooser_dialog_get_heading(self) ;
}



GtkWidget* app_chooser_widget_new(const gchar* content_type){
return gtk_app_chooser_widget_new(content_type) ;
}
void app_chooser_widget_set_show_default(GtkAppChooserWidget* self, gboolean setting){
gtk_app_chooser_widget_set_show_default(self, setting);
}
gboolean app_chooser_widget_get_show_default(GtkAppChooserWidget* self){
return gtk_app_chooser_widget_get_show_default(self) ;
}
void app_chooser_widget_set_show_recommended(GtkAppChooserWidget* self, gboolean setting){
gtk_app_chooser_widget_set_show_recommended(self, setting);
}
gboolean app_chooser_widget_get_show_recommended(GtkAppChooserWidget* self){
return gtk_app_chooser_widget_get_show_recommended(self) ;
}
void app_chooser_widget_set_show_fallback(GtkAppChooserWidget* self, gboolean setting){
gtk_app_chooser_widget_set_show_fallback(self, setting);
}
gboolean app_chooser_widget_get_show_fallback(GtkAppChooserWidget* self){
return gtk_app_chooser_widget_get_show_fallback(self) ;
}
void app_chooser_widget_set_show_other(GtkAppChooserWidget* self, gboolean setting){
gtk_app_chooser_widget_set_show_other(self, setting);
}
gboolean app_chooser_widget_get_show_other(GtkAppChooserWidget* self){
return gtk_app_chooser_widget_get_show_other(self) ;
}
void app_chooser_widget_set_show_all(GtkAppChooserWidget* self, gboolean setting){
gtk_app_chooser_widget_set_show_all(self, setting);
}
gboolean app_chooser_widget_get_show_all(GtkAppChooserWidget* self){
return gtk_app_chooser_widget_get_show_all(self) ;
}
void app_chooser_widget_set_default_text(GtkAppChooserWidget* self, const gchar* text){
gtk_app_chooser_widget_set_default_text(self, text);
}
const gchar* app_chooser_widget_get_default_text(GtkAppChooserWidget* self) {
return gtk_app_chooser_widget_get_default_text(self) ;
}



GtkPropagationPhase event_controller_get_propagation_phase(GtkEventController* controller){
return gtk_event_controller_get_propagation_phase(controller) ;
}
void event_controller_set_propagation_phase(GtkEventController* controller, GtkPropagationPhase phase){
gtk_event_controller_set_propagation_phase(controller, phase);
}
gboolean event_controller_handle_event(GtkEventController* controller, const GdkEvent* event){
return gtk_event_controller_handle_event(controller, event) ;
}
GtkWidget* event_controller_get_widget(GtkEventController* controller){
return gtk_event_controller_get_widget(controller) ;
}
void event_controller_reset(GtkEventController* controller){
gtk_event_controller_reset(controller);
}



GtkEventController* event_controller_key_new(GtkWidget* widget){
return gtk_event_controller_key_new(widget) ;
}



GtkEventController* event_controller_scroll_new(GtkWidget* widget, GtkEventControllerScrollFlags flags){
return gtk_event_controller_scroll_new(widget, flags) ;
}
void event_controller_scroll_set_flags(GtkEventControllerScroll* controller, GtkEventControllerScrollFlags flags){
gtk_event_controller_scroll_set_flags(controller, flags);
}
GtkEventControllerScrollFlags event_controller_scroll_get_flags(GtkEventControllerScroll* controller){
return gtk_event_controller_scroll_get_flags(controller) ;
}



GtkEventController* event_controller_motion_new(GtkWidget* widget){
return gtk_event_controller_motion_new(widget) ;
}



GdkDevice* gesture_get_device(GtkGesture* gesture){
return gtk_gesture_get_device(gesture) ;
}
GdkWindow* gesture_get_window(GtkGesture* gesture){
return gtk_gesture_get_window(gesture) ;
}
void gesture_set_window(GtkGesture* gesture, GdkWindow* window){
gtk_gesture_set_window(gesture, window);
}
gboolean gesture_is_active(GtkGesture* gesture){
return gtk_gesture_is_active(gesture) ;
}
gboolean gesture_is_recognized(GtkGesture* gesture){
return gtk_gesture_is_recognized(gesture) ;
}
GtkEventSequenceState gesture_get_sequence_state(GtkGesture* gesture, GdkEventSequence* sequence){
return gtk_gesture_get_sequence_state(gesture, sequence) ;
}
gboolean gesture_set_sequence_state(GtkGesture* gesture, GdkEventSequence* sequence, GtkEventSequenceState state){
return gtk_gesture_set_sequence_state(gesture,sequence, state) ;
}
gboolean gesture_set_state(GtkGesture* gesture, GtkEventSequenceState state){
return gtk_gesture_set_state(gesture, state) ;
}
GList* gesture_get_sequences(GtkGesture* gesture){
return gtk_gesture_get_sequences(gesture) ;
}
gboolean gesture_handles_sequence(GtkGesture* gesture, GdkEventSequence* sequence){
return gtk_gesture_handles_sequence(gesture, sequence) ;
}
GdkEventSequence* gesture_get_last_updated_sequence(GtkGesture* gesture){
return gtk_gesture_get_last_updated_sequence(gesture) ;
}
const GdkEvent* gesture_get_last_event(GtkGesture* gesture, GdkEventSequence* sequence) {
return gtk_gesture_get_last_event(gesture, sequence) ;
}
gboolean gesture_get_point(GtkGesture* gesture, GdkEventSequence* sequence, gdouble* x, gdouble* y){
return gtk_gesture_get_point(gesture,sequence,x, y) ;
}
gboolean gesture_get_bounding_box(GtkGesture* gesture, GdkRectangle* rect){
return gtk_gesture_get_bounding_box(gesture, rect) ;
}
gboolean gesture_get_bounding_box_center(GtkGesture* gesture, gdouble* x, gdouble* y){
return gtk_gesture_get_bounding_box_center(gesture,x, y) ;
}
void gesture_group(GtkGesture* group_gesture, GtkGesture* gesture){
gtk_gesture_group(group_gesture, gesture);
}
void gesture_ungroup(GtkGesture* gesture){
gtk_gesture_ungroup(gesture);
}
GList* gesture_get_group(GtkGesture* gesture){
return gtk_gesture_get_group(gesture) ;
}
gboolean gesture_is_grouped_with(GtkGesture* gesture, GtkGesture* other){
return gtk_gesture_is_grouped_with(gesture, other) ;
}



gboolean gesture_single_get_exclusive(GtkGestureSingle* gesture){
return gtk_gesture_single_get_exclusive(gesture) ;
}
void gesture_single_set_exclusive(GtkGestureSingle* gesture, gboolean exclusive){
gtk_gesture_single_set_exclusive(gesture, exclusive);
}
gboolean gesture_single_get_touch_only(GtkGestureSingle* gesture){
return gtk_gesture_single_get_touch_only(gesture) ;
}
void gesture_single_set_touch_only(GtkGestureSingle* gesture, gboolean touch_only){
gtk_gesture_single_set_touch_only(gesture, touch_only);
}
guint gesture_single_get_button(GtkGestureSingle* gesture){
return gtk_gesture_single_get_button(gesture) ;
}
void gesture_single_set_button(GtkGestureSingle* gesture, guint button){
gtk_gesture_single_set_button(gesture, button);
}
guint gesture_single_get_current_button(GtkGestureSingle* gesture){
return gtk_gesture_single_get_current_button(gesture) ;
}
GdkEventSequence* gesture_single_get_current_sequence(GtkGestureSingle* gesture){
return gtk_gesture_single_get_current_sequence(gesture) ;
}



GtkGesture* gesture_drag_new(GtkWidget* widget){
return gtk_gesture_drag_new(widget) ;
}
gboolean gesture_drag_get_start_point(GtkGestureDrag* gesture, gdouble* x, gdouble* y){
return gtk_gesture_drag_get_start_point(gesture,x, y) ;
}
gboolean gesture_drag_get_offset(GtkGestureDrag* gesture, gdouble* x, gdouble* y){
return gtk_gesture_drag_get_offset(gesture,x, y) ;
}



GtkGesture* gesture_long_press_new(GtkWidget* widget){
return gtk_gesture_long_press_new(widget) ;
}



GtkGesture* gesture_multi_press_new(GtkWidget* widget){
return gtk_gesture_multi_press_new(widget) ;
}
void gesture_multi_press_set_area(GtkGestureMultiPress* gesture, const GdkRectangle* rect){
gtk_gesture_multi_press_set_area(gesture, rect);
}
gboolean gesture_multi_press_get_area(GtkGestureMultiPress* gesture, GdkRectangle* rect){
return gtk_gesture_multi_press_get_area(gesture, rect) ;
}



GtkGesture* gesture_pan_new(GtkWidget* widget, GtkOrientation orientation){
return gtk_gesture_pan_new(widget, orientation) ;
}
GtkOrientation gesture_pan_get_orientation(GtkGesturePan* gesture){
return gtk_gesture_pan_get_orientation(gesture) ;
}
void gesture_pan_set_orientation(GtkGesturePan* gesture, GtkOrientation orientation){
gtk_gesture_pan_set_orientation(gesture, orientation);
}



GtkGesture* gesture_swipe_new(GtkWidget* widget){
return gtk_gesture_swipe_new(widget) ;
}
gboolean gesture_swipe_get_velocity(GtkGestureSwipe* gesture, gdouble* velocity_x, gdouble* velocity_y){
return gtk_gesture_swipe_get_velocity(gesture,velocity_x, velocity_y) ;
}



GtkGesture* gesture_rotate_new(GtkWidget* widget){
return gtk_gesture_rotate_new(widget) ;
}
gdouble gesture_rotate_get_angle_delta(GtkGestureRotate* gesture){
return gtk_gesture_rotate_get_angle_delta(gesture) ;
}



GtkGesture* gesture_zoom_new(GtkWidget* widget){
return gtk_gesture_zoom_new(widget) ;
}
gdouble gesture_zoom_get_scale_delta(GtkGestureZoom* gesture){
return gtk_gesture_zoom_get_scale_delta(gesture) ;
}



GtkGesture* gesture_stylus_new(GtkWidget* widget){
return gtk_gesture_stylus_new(widget) ;
}
gboolean gesture_stylus_get_axis(GtkGestureStylus* gesture, GdkAxisUse axis, gdouble* value){
return gtk_gesture_stylus_get_axis(gesture,axis, value) ;
}
gboolean gesture_stylus_get_axes(GtkGestureStylus* gesture, GdkAxisUse axes[], gdouble** values){
return gtk_gesture_stylus_get_axes(gesture,axes, values) ;
}
GdkDeviceTool* gesture_stylus_get_device_tool(GtkGestureStylus* gesture){
return gtk_gesture_stylus_get_device_tool(gesture) ;
}



GtkPadController* pad_controller_new(GtkWindow* window, GActionGroup* group, GdkDevice* pad){
return gtk_pad_controller_new(window,group, pad) ;
}
void pad_controller_set_action_entries(GtkPadController* controller, const GtkPadActionEntry* entries, gint n_entries){
gtk_pad_controller_set_action_entries(controller,entries, n_entries);
}
void pad_controller_set_action(GtkPadController* controller, GtkPadActionType type, gint index, gint mode, const gchar* label, const gchar* action_name){
gtk_pad_controller_set_action(controller,type,index,mode,label, action_name);
}


}

#endif