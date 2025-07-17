#include <iomanip>
#include <iostream>
#include <string>
#include <cmath>

class Star {
 public:
Star(std::string star_name, double star_radius) : star_name_(star_name), star_radius_(star_radius) 
{std::cout << "The star " << star_name_ << " was born.";}

~Star() {
  std::cout << std::fixed << std::setprecision(2);
  std::cout << "The star " << star_name_ << " has gone supernova. It was " << (star_radius_*star_radius_) << " times the volume of our sun.\n";
}
std::string GetName() {return star_name_;}

private:
std::string star_name_;
double star_radius_;

};