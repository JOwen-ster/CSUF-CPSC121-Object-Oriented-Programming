#include <string>
#include "breed.h"
#include <iostream>
// ======================= YOUR CODE HERE =======================
// Write the Pet class here. Refer to the README for the member
// variables, constructors, and member functions needed.
//
// Note: mark functions that do not modify the member variables
// as const, by writing `const` after the parameter list.
// Pass objects by const reference when appropriate.
// Remember that std::string is an object!
// ===============================================================

class Pet{
  public:
    Pet() : name_("Cookie"), weight_(15.6), breed_() {}
    Pet(std::string name, Breed breed, double weight) : name_(name), weight_(weight), breed_(breed) {}
    Pet(std::string name, std::string species, std::string breed_name, std::string color, double weight) : name_(name), breed_(species, breed_name, color), weight_(weight) {}
Breed GetBreed() const {return breed_;}
double Weight() const {return weight_;}
std::string Name() const {return name_;}
void SetName(std::string name) {name_ = name;}
void SetWeight(double weight) {weight_ = weight;}
void SetBreed(Breed &breed) {breed_ = breed;}
void SetBreed(std::string species, std::string breed_name, std::string color) {Breed breed(species, breed_name, color);breed_ = breed;}
  void Print(){
    std::cout << "Name: " << name_ << "\n"
    << "Species: " << breed_.Species() << "\n"
    << "Breed: " << breed_.BreedName() << "\n"
    << "Color: " << breed_.Color() << "\n"
    << "Weight: " << weight_ << " lbs " << "\n";
  }

  private:
    std::string name_;
    double weight_;
    Breed breed_;  
};