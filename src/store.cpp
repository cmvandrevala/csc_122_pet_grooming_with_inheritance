#include <iostream>
#include <string>
#include <list>

#include "store.hpp"

Store::Store(std::string store_name)
{
  this->name = store_name;
}

std::string Store::get_name() {
  return this->name;
}

void Store::add_to_list(Pet pet)
{
  grooming_list.push_back(pet);
}

void Store::wash_pet()
{
  Pet pet = grooming_list.front();
  std::cout << "Washing the pet named " << pet.name << std::endl;
  std::cout << "How are you doing, bud?" << std::endl;
  pet.speak();
  std::cout << "Great! You are all done" << std::endl;
  std::cout << std::endl;
  grooming_list.pop_front();
}

void Store::get_grooming_list()
{
  std::list<Pet>::iterator i;
  std::cout << "Here is the list of smelly pets who need a bath!" << std::endl;
  for (i = grooming_list.begin(); i != grooming_list.end(); ++i)
  {
    std::cout << i->name << std::endl;
  }
  std::cout << std::endl;
}
