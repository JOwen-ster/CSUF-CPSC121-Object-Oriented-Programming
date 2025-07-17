#include <iostream>
#include <vector>
#include "pet.h"

int main() {
  // =================== YOUR CODE HERE ===================
  // 1. Create a vector Pet objects called `pets`.
  //    Don't forget to #include <vector> and "pet.h"
  // ======================================================
  std::string name;
  std::string breed_name;
  std::string species;
  std::string color;
  double weight;
  std::vector<Pet> pets;

  do {
    std::cout << "Please enter the pet's name (q to quit): ";
    std::getline(std::cin, name);
    if (name != "q") {
      std::cout << "Please enter the pet's species: ";
      std::getline(std::cin, species);
      std::cout << "Please enter the pet's breed: ";
      std::getline(std::cin, breed_name);
      std::cout << "Please enter the pet's color: ";
      std::getline(std::cin, color);
      std::cout << "Please enter the pet's weight (lbs): ";
      std::cin >> weight;
      std::cin.ignore();

      // =================== YOUR CODE HERE ===================
      // 2. Create a Pet object using the input from the user
      //    Store the newly-created Pet object into the vector.
      // ======================================================
      Pet pet1(name, species, breed_name, color, weight);
      pets.push_back(pet1);
    }
  } while (name != "q");

  std::cout << "Printing Pets:\n";
  // =================== YOUR CODE HERE ===================
  // 3.  Print information about each pet in the `pets`
  //     vector by writing a loop to access each Pet object.
  // ======================================================
  for(Pet p: pets){p.Print();}
  return 0;
}