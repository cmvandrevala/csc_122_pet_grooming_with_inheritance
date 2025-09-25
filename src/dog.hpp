#pragma once

#include <string>

#include "pet.hpp"

class Dog : public Pet
{
public:
  explicit Dog(std::string name);
  std::string speak();
  std::string fetch_stick();
};
