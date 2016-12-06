#include <iostream>
#include "F16.h"
#include "F35.h"

using namespace std;

int main() {
  F16 ac1(5);
  F35 ac2(10);
  cout << ac1.get_stats() << endl;
  ac1.damage();
  cout << ac1.get_stats() << endl;
  cout << ac2.get_stats() << endl;
  cout << ac2.get_id() << endl;

  return 0;
}
