#include <string>

#include "cpputils/graphics/image.h"

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef ASTRONAUT_H
#define ASTRONAUT_H
class Astronaut{
public:
Astronaut(std::string astronaut_name, graphics::Color color)
 : astronaut_name_(astronaut_name), color_(color) {}

graphics::Color GetColor() const{return color_;}

std::string GetIconFilename() const{return "astronaut.bmp";}

std::string GetName() const{return astronaut_name_;}
// ========================= YOUR CODE HERE =========================
// Define the Astronaut class here. Refer to the README for instructions.
//===================================================================
protected: 
std::string astronaut_name_;
graphics::Color color_;

  
};
#endif 
 // ASTRONAUT_H