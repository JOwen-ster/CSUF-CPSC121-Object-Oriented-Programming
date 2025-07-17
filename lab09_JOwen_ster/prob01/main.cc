#include <iostream>

#include "car.h"

int main() {
  // =================== YOUR CODE HERE ===================
  // 1. Create a Car object called `c1` using the default
  //    constructor.
  //    Call its Print member function.
  // ======================================================
  Car c1;
  c1.Print();
     std::cout << "\n";
    std::cout << "\n";
 

  // =================== YOUR CODE HERE ===================
  // 2. Create a `VehicleId` object with the following info:
  //    Model: Honda, ID: 3, License plate: 7B319X4
  //    Create a `Car` object `c2` using the constructor that
  //    accepts a `VehicleId` and  pass in the `VehicleId`
  //    object you just made.
  //    Call its Print member function.
  // ======================================================
  Car c2(VehicleId("Honda", 3, "7B319X4"));
  c2.Print();
  std::cout << "\n";
   std::cout << "\n";

  // =================== YOUR CODE HERE ===================
  // 3. Create a `Date` object with the following info:
  //    Day: 4, Month: 11, Year: 2018
  //    Create a `Car` object `c3` using the constructor that
  //    accepts a `Date` object and pass in the `Date` object
  //    you just made.
  //    Call its Print member function.
  // ======================================================
  Car c3(Date(4,11,2018));
  c3.Print();
  std::cout << "\n";
  std::cout << "\n";

  // =================== YOUR CODE HERE ===================
  // 4. Create a `Car` object `c4` using the constructor that
  //    accepts a `VehicleId` and `Date` object and pass in
  //    the `VehicleId` and `Date` objects you created in
  //    steps 2 and 3 above.
  //    Call its Print member function.
  // ======================================================
  Car c4(VehicleId("Honda", 3, "7B319X4"), Date(4,11,2018));
  c4.Print();
  std::cout << "\n";
  std::cout << "\n";

  // 5. Create an instance of `VehicleId` using the default constructor.

  // 6. Create an instance of `Date` using the default constructor.

  // 7. Call the `SetId` member function on `c4` and pass
  //    in the VehicleId you just created.

  // 8. Call the `SetReleaseDate` member function on `c4`
  //    and pass in the VehicleId you just created.

  // 9. Finally, call the print member function for `c4`.
  VehicleId vi0;
  Date d0;
  c4.SetId(vi0);
  c4.SetReleaseDate(d0);
  c4.Print();
 std::cout << "\n";
  return 0;
}
