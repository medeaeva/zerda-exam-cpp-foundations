#include "helper.h"
#include "Aircraft.h"
#include <string>

using namespace std;

unsigned int LAST_ID = 0;

Aircraft::Aircraft(unsigned int ammo_level) {
  this->id = LAST_ID;
  LAST_ID++;
  this->ammo_level = ammo_level;
}

const unsigned int Aircraft::get_id() const {
  return id;
}

void Aircraft::damage() {
  unsigned int actual_damage = ammo_level * base_damage;
  ammo_level -= ammo_level;
}

string Aircraft::get_stats() const {
  return "Type: " + type_name + ", Fuel: " + to_string(ammo_level) + ", Actual damage: " + to_string(damage);
}
