#include "bubble.h"
#include "cmath"


// This implementation file (bubble.cc) is where you should implement
double Bubble::CalculateVolume() const {
  const double PI = 3.1415; double Volume = 4.0/3;
  double volume = Volume*PI*pow(GetRadius(),3); 
  return volume;
}

// Implement the CombineBubbles function you declared in bubble.h
Bubble CombineBubbles(const Bubble &bubble1, const Bubble &bubble2){
  Bubble result;
  result.SetRadius(bubble1.GetRadius() + bubble2.GetRadius());
  return result;
}