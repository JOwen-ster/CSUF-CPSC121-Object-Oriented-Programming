#include <iostream>

int main() {
  // TODO: Check passenger heights before riding the rollercoaster.
  std::cout << "You must be at least 55 inches to safely ride the TuffyTwister. \n Please enter your height in inches: ";
  int hII;
  std::cin >> hII;
  if(hII >= 55){
    std::cout << "Congratulations! You are tall enough to ride! ";
  }else{
    std::cout << "Safety is our first priority. Unfortunately, we can't let you ride yet. ";
  }
  return 0;
}
