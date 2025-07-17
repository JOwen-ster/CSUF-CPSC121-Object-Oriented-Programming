#include "date.h"
#include "vehicleid.h"
#include <iostream>

class Car{
  public:
    Car() {}
    Car(VehicleId id) : id_(id) {}
    Car(Date release_date) : release_date_(release_date) {}
    Car(VehicleId id, Date release_date) : id_(id), release_date_(release_date) {}
    Date ReleaseDate() const {return release_date_;}
    void SetReleaseDate(const Date &release_date) {release_date_ = release_date;}
    VehicleId Id() const {return id_;}
    void SetId(const VehicleId &id) {id_ = id;}
    void Print() const {
      std::cout << "The model of the car is: " << id_.Model() <<
      "\nThe VIN of the car is: " << id_.Vin() << "\nThe license plate of the car is: " << id_.LicensePlate() << "\nThe release date of the car is: " << release_date_.Month() << "/" << release_date_.Day() << "/" << release_date_.Year();
      }
  private:
    VehicleId id_;
    Date release_date_;
};
// Finally, define the following member functions:
// 1. The accessor (getter) function for the id_.
// 2. The mutator (setter) function for the id_.
// 3. The accessor (getter) function for the release_date_.
// 4. The mutator (setter) function for the release_date_.
// 5. The Print member function.
//
// Note: mark functions that do not modify the member variables
// as const, by writing `const` after the parameter list.
// Pass objects by const reference, e.g. for the Date object
// passed in as input to SetReleaseDate.
// ==============================================================