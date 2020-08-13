#include "time.h"

#include <iostream>
#include <memory>

using namespace std;

int main() {

  try {

    unique_ptr<Time> p_time{new Time {"23:53"}};

    cout << *p_time << endl;

  } catch(exception & ex) {

    cout << "Exception: " << ex.what() << endl;

  }

}
