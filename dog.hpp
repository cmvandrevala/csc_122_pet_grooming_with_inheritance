#include <string>
#include "pet.hpp"

using namespace std;

class Dog : public Pet
{
public:
  explicit Dog(string name);
  void fetch_stick();
};
