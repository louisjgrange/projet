/**
 Projet.cpp
 Louis Grange et Daniel Ataide
 Version 1.0
**/

#include "Simulation/Simulation.h"
#include <iostream>
#include <gtkmm.h>
#include "Gui/Gui.h"
using namespace std;

int main(int argc, char *argv[]) {
    S2d position;
    Spatial spatial(position, 0, 0, 0, 0, 0, 0);
    Simulation simulation(0, spatial);
    if(argc < 1) {
        exit(0);
    }
    simulation.lecture(argv[1]);
    auto app = Gtk::Application::create();
	return app->make_window_and_run<Window>(1, argv);
}