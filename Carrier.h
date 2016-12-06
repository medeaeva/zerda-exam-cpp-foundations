#ifndef CARRIER_H_
#define CARRIER_H_

#include <string>
#include "Aircraft.h"
#include <vector>

using namespace std;

class Carrier {
private:
  unsigned int total_ammo;
  unsigned int health_points;
  vector<Aircraft*> aircrafts;
  unsigned int aircraft_count;
  std::string name;
public:
  Carrier::Carrier(std::string name, unsigned int health_points, unsigned int total_ammo);
  unsigned int get_health_points();
  unsigned int get_aircraft_count();
  std::string get_name();
  std::string get_status();
  void add_aircraft(std::string type_name);
  void fill () throw (int);
  void fight(name);
  void get_total_damage();


  ~Carrier ();
};

#endif /* CARRIER_H_ */
