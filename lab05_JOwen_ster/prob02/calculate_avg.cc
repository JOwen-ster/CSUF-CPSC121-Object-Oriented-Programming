#include <vector>
#include "calculate_avg.h"

double CalculateAverage(const std::vector<double> &student_grades) {
  // ================= YOUR CODE HERE =================
  // TODO: Compute and return the average grade
  // based on the input vector containing student GPAs.
  // Hint: you may want to use a range based loop!
  // ==================================================
  double avg;
  for(double g : student_grades) avg+= g;
  return student_grades.empty() ? 0 : avg / (double) (student_grades.size());
}
