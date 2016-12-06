#ifndef AIRCRAFT_H_
#define AIRCRAFT_H_

#include "helper.h"
#include <string>

class Aircraft {
private:
  unsigned int id;
  unsigned int ammo_level;
protected:
  unsigned int max_ammo;
  unsigned int base_damage;
  unsigned int current_ammo;
  std::string type_name;
public:
  virtual ~Aircraft();
  unsigned int fight();
  void refill(unsigned int& _typename);
  string get_type_name();
  string get_status();
  unsigned int get_current_ammo();
  unsigned int get_base_damage();

};

#endif /* AIRCRAFT_H_ */

