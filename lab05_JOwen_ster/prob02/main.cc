#include <iomanip>
#include <iostream>
#include <vector>
#include "calculate_avg.h"

int main() {
  int num_students;
  std::cout << "How many students are in your class? ";
  std::cin >> num_students;

  if (num_students <= 0) {
    std::cout << "You have no students!\n";
  } else {

    // ===================== YOUR CODE HERE =====================
    // TODO: Construct a vector whose size is the same as the
    // given number of students in the class, based on the
    // `num_students` variable. Don't forget to #include <vector>.
    // ==========================================================
    std::vector<double> students(num_students);

    std::cout << "Enter the GPA for the students in your class (0.0 - 4.0)\n";
double gpa;
    for (int i = 0; i < num_students; i++) {
      // ============ YOUR CODE HERE ============
      // TODO: Store the input GPA from cin into
      // the corresponding index in the vector.
      // ========================================
      std::cout << "Enter the GPA for student #" << i + 1 << ": ";
      std::cin >> gpa;
      students[i] = gpa;
    }
    double average = CalculateAverage(students);

    // ===================== YOUR CODE HERE =====================
    // TODO: Call your CalculateAverage function and provide any
    // necessary parameters. Then, store the results in the average
    // variable. Make sure to #include "calculate_avg.h" before you
    // use the CalculateAverage function.
    // ==========================================================

    std::cout << "Class average: " << std::setprecision(2) << std::fixed
              << average << "\n";
  }

  return 0;
}
