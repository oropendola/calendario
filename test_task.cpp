
#include "task.h"
#include <iostream>
#include <memory>

using namespace std;

int main() {

  try {

    unique_ptr<Task> task1{new Task{"Videotutoriales de Mitali",
    "Aprender a hacer animaciones con ccs", "lunes", "14:00", "17:45"}};

    /*
    unique_ptr<Task> task2{new Task{"Videotutoriales de Mitali",
    "Aprender a hacer animaciones con ccs", "viernes", "22:00", "13:30"}};
    */

    unique_ptr<Task> task3{new Task{"Videotutoriales de Mitali",
    "Aprender a hacer animaciones con ccs", "Sunday", "14:00", "17:45"}};

    cout << *task1 << endl;
    //cout << *task2 << endl;

  } catch(exception & ex) {

    cout << ex.what() << endl;

  }

}
