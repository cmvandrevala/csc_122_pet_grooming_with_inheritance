#pragma once

#include <iostream>

using namespace std;

class Pet
{
public:
  string name;

  void speak()
  {
    cout << "I am a pet. Meow... woof... squee..." << endl;
  };
};
