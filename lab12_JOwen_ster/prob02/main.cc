#include <iostream>
#include <memory>

#include "train.h"

int main() {
  // Creates a train, with the locomotive at the front of the train.
  // LinkedList diagram:
  //   Locomotive -> First Class -> Business Class -> Cafe Car -> Carriage 1 ->
  //   Carriage 2
  std::shared_ptr<Train> carriage2 = std::make_shared<Train>(100, 100, nullptr);
  std::shared_ptr<Train> carriage1 =
      std::make_shared<Train>(220, 220, carriage2);
  std::shared_ptr<Train> cafe_car =
      std::make_shared<Train>(250, 250, carriage1);
  std::shared_ptr<Train> business_class =
      std::make_shared<Train>(50, 50, cafe_car);
  std::shared_ptr<Train> first_class =
      std::make_shared<Train>(20, 20, business_class);
  std::shared_ptr<Train> locomotive =
      std::make_shared<Train>(1, 1, first_class);

  std::cout << "Total passengers in the train: ";
  // =================== YOUR CODE HERE ===================
  // 1. Print out the total number of passengers in the
  //    train by invoking TotalTrainPassengers on the
  //    first carriage in the train (the locomotive).
  // ======================================================
  std::cout << locomotive->TotalTrainPassengers();
  std::cout << std::endl;

  std::cout << "Max passengers in a carriage: ";
  // =================== YOUR CODE HERE ===================
  // 2. Print out the maximum number of passengers in a
  //    single carriage in the train by invoking
  //    MaxCarriagePassengers.
  // ======================================================
  std::cout << locomotive->MaxCarriagePassengers();
  std::cout << std::endl;

  // =================== YOUR CODE HERE ===================
  // 3. Using IsTrainFull, check if the locomotive is full.
  //    If IsTrainFull returns true, print
  //          "The train is full."
  //    If IsTrainFull returns false, print
  //          "The train has available seats."
  // ======================================================
  std::string ans = locomotive->IsTrainFull() ? "The train is full." : "The train now has available seats.";
  std::cout << ans;
  std::cout << std::endl;

  // =================== YOUR CODE HERE ===================
  // 4. Create a new std::shared_ptr<Train>. You may name
  //    it the `caboose`, which refers to the carriage at
  //    the end of a train.
  //    Set its passenger count to 40, seat count to
  //    75, and next carriage to `nullptr`.
  // ======================================================
    std::shared_ptr<Train> caboose = std::make_shared<Train>(40, 75, nullptr);
  

  std::cout << "Adding a new carriage to the train!" << std::endl;
  // =================== YOUR CODE HERE ===================
  // 5. Using `AddCarriageToEnd`, add the new Train you've
  //    created in #4 to the end of the `locomotive`.
  // ======================================================
  locomotive->AddCarriageToEnd(caboose);

  // =================== YOUR CODE HERE ===================
  // 6. Using IsTrainFull, check if the locomotive is full.
  //    If IsTrainFull returns true, print
  //          "The train is now full."
  //    If IsTrainFull returns false, print
  //          "The train now has available seats."
  // ======================================================
  std::string ans1 = caboose->IsTrainFull() ? "The train now has available seats." : "The train is now full.";
  std::cout << ans1;
  std::cout << std::endl;
  return 0;//done
}