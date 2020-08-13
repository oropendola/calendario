/*
 *
 * @ Javier Felipe Toribio 2020-08-13
 *
 * Task class
 *
 */

#pragma one

#include <string>
#include <memory>
#include <iostream>

#include "time.h"

using namespace std;

class Task {
  public:

    Task(string header, string body,
         string taskDay, string startTime, string endTime);

    friend ostream & operator<<(ostream & out, const Task & task);

  private:

    string title{};
    string description{};
    string day{};
    shared_ptr<Time> start{nullptr};
    shared_ptr<Time> end{nullptr};

};

ostream & operator<<(ostream & out, const Task & task);


