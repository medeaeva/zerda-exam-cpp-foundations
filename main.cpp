#include <iostream>
#include "F16.h"
#include "F35.h"

using namespace std;

int main() {
  Carrier a("USS Marschall", 2000, 200);
  a.add_aircraft("F16");
  a.add_aircraft("F35");
  a.add_aircraft("F16");
  a.add_aircraft("F35");
  try {
    a.fill();
  } catch (int err) {
    cout << "Carrier is empty.";
  }

  return 0;
}
