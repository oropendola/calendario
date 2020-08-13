/*
 *
 * @ Javier Felipe Toribio 2020-08-13
 *
 * Time class
 *
 */

#include "time.h"
#include <iomanip>
#include <iostream>
#include <stdexcept>

using namespace std;

ostream & operator<<(ostream & out, const Time & time) {

  out << setw(2) << setfill('0') << time.hour << ":"
      << setw(2) << setfill('0') << time.minutes;

  return out;

}

Time::Time(string image) {

  if(image.size() != 5 || image.at(2) != ':')
    throw invalid_argument("Incorrect format");

  try {

    string hourImage = image.substr(0,2);

    string minutesImage = image.substr(3,2);

    hour = stoi(hourImage);

    minutes = stoi(minutesImage);

    if((hour    < 0 || hour    > 23) ||
       (minutes < 0 || minutes > 59)) {

      string message = "Wrong time data: " + image;
      throw out_of_range(message);
    }


  } catch(exception & ex) {

    throw invalid_argument("Time data are not numbers");
  }

}

bool Time::operator <(const Time & other) const {

  return (hour  <  other.hour ||
          (hour == other.hour && minutes < other.minutes));
}


