#include <string>
// ======================= YOUR CODE HERE =======================
// Write the Breed class here. Refer to the README for the member
// variables, constructors, and member functions needed.
//
// Note: you may define all functions inline in this file.
// ===============================================================
class Breed{
  public:
    Breed() : species_("Dog"), breed_name_("Chihuahua"), color_("Fawn"){}
    Breed(std::string species, std::string breed_name, std::string color) : species_(species), breed_name_(breed_name), color_(color){}

    std::string Species() const {return species_;}
    void SetSpecies(const std::string &species) {species_ = species;}
    std::string BreedName() const {return breed_name_;}
    void SetBreedName(const std::string &breed_name) {breed_name_ = breed_name;}
    std::string Color() const {return color_;}
    void SetColor(const std::string &color) {color_ = color;}

  private:
    std::string species_;
    std::string breed_name_;
    std::string color_;
};