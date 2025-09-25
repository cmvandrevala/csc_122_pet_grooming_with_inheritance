#include <iostream>
#include <string>

#include "cat.hpp"
#include "pet.hpp"

Cat::Cat(std::string name)
{
  this->name = name;
}

std::string Cat::play_with_yarn() {
  return "This ball of yarn shall feel the wrath of " + this->name + ".\n";
}

std::string Cat::judge_another_pet(Pet *pet) {
  return "I, " + this->name + ", judge you, " + pet->get_name() + ", to be unworthy.\n";
}
