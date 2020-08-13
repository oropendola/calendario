/*
 *
 * @ Javier Felipe Toribio 2020-08-13
 *
 * Schedule class
 *
 */

#include "task.h"
#include <map>
#include <string>
#include <vector>
#include <memory>

using namespace std;

class Schedule {
  public:

    Schedule() {}

    void add(string header, string body,
             string taskDay, string startTime, string endTime);

    friend ostream & operator<<(ostream & out, const Schedule & schedule);

  private:

    map<string,vector<shared_ptr<Task>>> tasks{};

};

ostream & operator<<(ostream & out, const Schedule & schedule);

