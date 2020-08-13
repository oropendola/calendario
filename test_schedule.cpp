#pragma one

#include <iostream>
#include <memory>

#include "schedule.h"

using namespace std;

int main() {

  unique_ptr<Schedule> schedule(new Schedule());

  schedule->add("Videotutoriales de Mitali",
    "Aprender a hacer animaciones con ccs", "lunes", "14:00", "17:45");

  schedule->add("TODO list in JavaFX",
    "Usar como guia el pdf de JavaFX", "martes", "18:00", "21:20");

  schedule->add("Juego Maze en Javascript",
    "Para practicar canvas", "miercoles", "19:00", "20:20");

  schedule->add("Cpp schedule",
    "Calendario con horarios de aprendizaje para cada lenguaje", 
    "jueves", "11:00", "13:30");

  cout << *schedule << endl;
}
