#pragma one

#include "task.h"
#include "days.h"

#include <string>
#include <stdexcept>
#include <algorithm>

using namespace std;


Task::Task(string header, string body,
           string taskDay, string startTime, string endTime) {

  day = taskDay;

  title = header;

  description = body;

  transform(day.begin(), day.end(), day.begin(), ::tolower);

  if(! Week::isValid(day)) {
    string message = "Invalid name of day of week: " + day;
    throw invalid_argument(message);
  }

  start.reset(new Time(startTime));

  end.reset(new Time(endTime));

  if(*end < *start) {
    string message = "End time '"+ endTime + 
      "' earlier than start time '" + startTime + "'";
    throw invalid_argument(message);
  }

}

ostream & operator<<(ostream & out, const Task & task) {

  out << task.title << endl 
      << string(task.title.size(),'=') << endl
      << "Task on " << task.day
      << " from "   << *task.start
      << " to "     << *task.end << endl;

  return out;
}
