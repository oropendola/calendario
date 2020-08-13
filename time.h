/*
 *
 * @ Javier Felipe Toribio 2020-08-13
 *
 * Time class
 *
 */

#pragma one

#include <string>
#include <iostream>

using namespace std;

class Time {
  public:

    Time(string image);

    Time(const Time &) = delete;

    bool operator <(const Time & other) const;

    friend ostream & operator<<(ostream & out, const Time & time);

  private:

    int hour;
    int minutes;

};

ostream & operator<<(ostream & out, const Time & time);


