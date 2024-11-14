#include <iostream>
#include "store.hpp"
#include "cat.hpp"
#include "dog.hpp"

using namespace std;

int main()
{
  Cat coco = Cat("Coco");
  Cat yumyum = Cat("Yum-Yum");
  Cat dragon_cat = Cat("Dragon Cat");
  Dog jack = Dog("Jack");
  Dog simon = Dog("Simon");
  Dog lucy = Dog("Lucy");

  Store csc_122_pet_salon = Store("CSC 122 Pet Salon");

  csc_122_pet_salon.add_to_list(coco);
  csc_122_pet_salon.add_to_list(yumyum);
  csc_122_pet_salon.add_to_list(dragon_cat);

  csc_122_pet_salon.add_to_list(jack);
  csc_122_pet_salon.add_to_list(simon);
  csc_122_pet_salon.add_to_list(lucy);

  cout << "Before Washing" << endl;
  csc_122_pet_salon.get_grooming_list();

  csc_122_pet_salon.wash_pet();

  cout << "After Washing" << endl;
  csc_122_pet_salon.get_grooming_list();
}
