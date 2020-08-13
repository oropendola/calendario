
#include "schedule.h"
#include "days.h"

#include <iostream>
#include <algorithm>

using namespace std;

ostream & operator<<(ostream & out, const Schedule & schedule) {

  for(auto day : schedule.tasks) {

    out << day.first << endl << string(day.first.size(),'=') << endl;

    for(auto & task : day.second) {

      out << *task << endl;

    }

    out << string(42,'=') << endl;

  }

  return out;

}

void Schedule::add(string header, string body,
                   string taskDay, string startTime, string endTime) {

  string day = taskDay;

  transform(day.begin(), day.end(), day.begin(), ::tolower);

  if(Week::isValid(day)) {

     tasks[day].push_back(shared_ptr<Task>(new Task(header,body,day,startTime,endTime)));

  }

}

