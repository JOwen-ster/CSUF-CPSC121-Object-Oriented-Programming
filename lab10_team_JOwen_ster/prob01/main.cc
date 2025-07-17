


#include <iostream>

#include "foodpantry.h"
#include "volunteer.h"


std::shared_ptr<FoodPantry> CreatePantry(const std::string &pantry_name) {
  // =================== YOUR CODE HERE ===================
  // 1. Create a shared_ptr containing a FoodPantry with
  //    the given pantry_name, and return the shared_ptr.
  // ======================================================
  std::shared_ptr<FoodPantry> ptr =std::make_shared<FoodPantry> (pantry_name);
  return ptr;
}

int main() {
  Volunteer jc("JC");
  Volunteer paul("Paul");

  // =================== YOUR CODE HERE ===================
  // 2. Call CreatePantry, passing in "Tuffy's Pantry"
  //    and assign it to a shared_ptr named tuffys_pantry.
  // ===========================
 std::shared_ptr <FoodPantry> tuffys_pantry = CreatePantry("Tuffys Pantry");
  
  //===========================

  // 3. With your lab partner, predict what this prints out.
  //    Then uncomment the line below, and run main to check.
    // Your prediction: 
 
  
  std::cout << tuffys_pantry.use_count() << std::endl;

  // ===================


  
  //YOUR CODE HERE ===================
  // 4. Assign the Volunteers `jc` and `paul` to the
  //    tuffys_pantry using the AssignToPantry function.
  // ======================================================

  jc.AssignToPantry(tuffys_pantry);
  paul.AssignToPantry(tuffys_pantry);
  // 5. With your lab partner, predict what this prints out.
  //    Then uncomment the line below, and run main to check.
  //    Your prediction:
  std::cout << tuffys_pantry.use_count() << std::endl;

  // If you're here, uncomment the two lines of code below!
  jc.AssignedPantry()->Donate("Mango", 5);
 paul.AssignedPantry()->Donate("Mango", 20);

  

  // 6. With your lab partner, predict what this prints out.
  //    Look in the foodpantry.h file to see what it does.
  //    Then uncomment the line below, and run main to check.
  //    Your prediction:
   tuffys_pantry->DisplayPantryItems();

  // =================== YOUR CODE HERE ===================
  // 7. Call CreatePantry and create a new shared_ptr
  //    representing a different pantry location.
  //    Assign `jc` and `paul` to the new pantry.
  // ======================================================
std::shared_ptr<FoodPantry> otherPantry = CreatePantry("PantryTwo");
  jc.AssignToPantry(otherPantry);
  paul.AssignToPantry(otherPantry);
  // 8. With your lab partner, predict what this prints out.
  //    Then uncomment the line below, and run main to check.
  //    Your prediction:
   std::cout << tuffys_pantry.use_count() << std::endl;

  // 9. With your lab partner, predict what this prints out.
  //    Then uncomment the lines below, and run main to check.
  //    Your prediction:
    tuffys_pantry = nullptr;
   std::cout << tuffys_pantry.use_count() << std::endl;

  // 10. Print out the secret key to confirm that you and
  //     your lab partner have read the README.
  std::cout << "TUFFY121L" << std::endl;

  // 11. Print out the each lab partner's name, email,
  //     and GitHub username.
  std::cout << "Lab partner 1 name: Joshua Rugh" << std::endl;
  std::cout << "Email: jrugh3@csu.fullerton.edu" << std::endl;
  std::cout << "GitHub: jrugh3" << std::endl;
  std::cout << "Lab partner 2 name: Owen Sterling" << std::endl;
  std::cout << "Email: jowen.sterling@csu.fullerton.edu" << std::endl;
  std::cout << "GitHub: JOwen-ster" << std::endl;
 // If you have a 3rd lab partner, uncomment the following lines of code
  std::cout << "Lab partner 3 name: John Olivares" << std::endl;
  std::cout << "Email: jonathan.olivares@csu.fullerton.edu" << std::endl;
  std::cout << "GitHub: itzjohnn" << std::endl;
}
