#pragma once

#include <string>

#include "pet.hpp"

class Cat : public Pet
{
public:
  explicit Cat(std::string name);
  std::string play_with_yarn();
  std::string judge_another_pet(Pet *pet);
};
