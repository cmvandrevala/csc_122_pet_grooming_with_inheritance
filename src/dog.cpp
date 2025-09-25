#include <iostream>

#include "dog.hpp"

Dog::Dog(std::string name)
{
  this->name = name;
}

std::string Dog::speak()
{
  return this->name + " says woof woof! That means thank you!\n";
};

std::string Dog::fetch_stick()
{
  return "I am running after the stick! Life's as extreme as you wanna make it!!!!!\n";
}
