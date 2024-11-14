#include <iostream>
#include <string>
#include <list>
#include "store.hpp"

using namespace std;

Store::Store(string store_name)
{
  this->name = store_name;
}

void Store::add_to_list(Pet pet)
{
  grooming_list.push_back(pet);
}

void Store::wash_pet()
{
  Pet pet = grooming_list.front();
  cout << "Washing the pet named " << pet.name << endl;
  cout << "How are you doing, bud?" << endl;
  pet.speak();
  cout << "Great! You are all done" << endl;
  cout << endl;
  grooming_list.pop_front();
}

void Store::get_grooming_list()
{
  list<Pet>::iterator i;
  cout << "Here is the list of smelly pets who need a bath!" << endl;
  for (i = grooming_list.begin(); i != grooming_list.end(); ++i)
  {
    cout << i->name << endl;
  }
  cout << endl;
}
