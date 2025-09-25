#pragma once

#include <string>
#include <list>

#include "pet.hpp"

class Store
{
private:
  std::list<Pet> grooming_list;
  std::string name;

public:
  explicit Store(std::string store_name);
  std::string get_name();
  void add_to_list(Pet pet);
  void get_grooming_list();
  void wash_pet();
};
