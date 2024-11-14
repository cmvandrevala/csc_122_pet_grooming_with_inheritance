#include <string>
#include "pet.hpp"

using namespace std;

class Cat : public Pet
{
public:
  explicit Cat(string name);
};
