#include "Aircraft.h"
#include "helper.h"

Carrier::Carrier(std::string name, unsigned int health_points, unsigned int total_ammo) {
  this->health_points = health_points;
  this->total_ammo = total_ammo;
  aircraft_count = 0;
}

std::string Carrier::get_status() {
  std::string output = "";
  output += "Aircraft count: " + to_string(aircraft_count) + ", ";
  output += "Ammo storage: " + to_string(total_ammo)  + "\n";
  output += "Total damage: " + to_string(total_damage) + "\n";
  output += "Aircrafts:\n";
  output += get_all_aircraft_stats();
  return output;
}

std::string Carrier::get_all_aircraft_stats() {
  std::string aircraft_stats = "";
  for (int i = 0; i < aircraft_count; ++i) {
    aircraft_stats += aircrafts[i]->get_stats() + "\n";
  }
  return aircraft_stats;
}

void Carrier::add_aircraft(string type_name) {
  if (type_name == "F16") {
    aircrafts.push_back(new F16());
  } else if (type_name == "F35") {
    aircrafts.push_back(new F35());
  }
}

void Carrier::fill() throw(int) {
  if (total_ammo == 0) {
    throw 1;
  }
  else if (total_ammo > 12) {
  for (unsigned int i = 0; i < aircrafts.max_ammo(); ++i) {
    if (aircrafts[i]->get_type_name() == "F35") {
      aircrafts[i]->refill(total_ammo);
    }
  }
  for (unsigned int i = 0; i < aircrafts.max_ammo(); ++i) {
    if (aircrafts[i]->get_type_name() == "F16") {
      aircrafts[i]->refill(total_ammo);
    }
  }
  else {
    for (unsigned int i = 0; i < aircrafts.max_ammo(); ++i) {
    if (aircrafts[i]->get_type_name() == "F35") {
      aircrafts[i]->refill(total_ammo);
    }
  }
}

Carrier::~Carrier () {
};

