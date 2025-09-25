#pragma once

#include <iostream>

class Pet
{
public:
  std::string name;
  std::string get_name() {
    return this->name;
  };

  void speak()
  {
    std::cout << "I am a pet. Meow... woof... squee..." << std::endl;
  };
};
