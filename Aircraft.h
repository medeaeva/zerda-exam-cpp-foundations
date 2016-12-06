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
  std::string type_name;
public:
  Aircraft(unsigned int ammo_level);
  const unsigned int get_id() const;
  void damage();
  std::string get_stats() const;
};

#endif /* AIRCRAFT_H_ */
