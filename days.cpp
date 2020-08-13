#include "days.h"
#include <algorithm>

namespace Week {

  using namespace std;

  bool isValid(string day) {

    auto index = find(dayNames.begin(), dayNames.end(), day);

    return (index != dayNames.end());

  }

}
