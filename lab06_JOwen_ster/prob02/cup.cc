#include "cup.h"

#include <iostream>

//========================== YOUR CODE HERE ==========================
// TODO: Implement the member functions for the Cup class in this
// file.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Cup class.
//====================================================================
Cup::Cup(){
  drink_type_ = "Water";
  fluid_oz_ = 16.0;
}

Cup::Cup(std::string drink_type, double oz){
  drink_type_ = drink_type;
  fluid_oz_ = oz;
}

void Cup::Drink(double amount){
  fluid_oz_ = amount >= fluid_oz_ ? 0 : fluid_oz_ - amount;
}

void Cup::Refill(double amount){
  fluid_oz_ += amount;
}

void Cup::NewDrink(std::string name, double amount){
  drink_type_ = name;
  fluid_oz_ = amount;
}

void Cup::Empty(){
  drink_type_ = "nothing";
  fluid_oz_ = 0.0;
}

double Cup::GetFluidOz(){return fluid_oz_;}
std::string Cup::GetDrinkType(){return drink_type_;}
