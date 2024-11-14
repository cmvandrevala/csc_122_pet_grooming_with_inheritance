#include <iostream>
#include "dog.hpp"

using namespace std;

Dog::Dog(string name)
{
  this->name = name;
}

void Dog::fetch_stick()
{
  cout << "I am running after the stick!" << endl;
  cout << "Life's as extreme as you wanna make it!!!!!" << endl;
}
