#include <sstream>
#include "helper.h"

using namespace std;

string to_string(int integer) {
  stringstream ss;
  ss << integer;
  return ss.str();
}
