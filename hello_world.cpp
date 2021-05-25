









































#include "gtk.hpp"
#include "gtk_import.hpp"

void activate(GtkApplication* app, gpointer userdata){
GtkWidget *window;
window=gtk::application_window_new(app);
gtk::window_set_title(window, "Window");
gtk::window_set_default_size(window, 400,300);
gtk::widget_show_all(window);
}
int main(int argc, char** argv, char** env){
GtkApplication *app;
int status=0;
app=gtk::application_new("org.gtkka.example",G_APPLICATION_FLAGS_NONE);

g_signal_connect(app, "activate", G_CALLBACK (activate), NULL);
status = g_application_run (G_APPLICATION (app), argc, argv);
g_object_unref (app);
return status ;
}
