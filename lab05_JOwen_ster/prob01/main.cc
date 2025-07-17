#include <iostream>
#include <vector>
#include "minimum.h"

int main() {
  // First, we ask the user what size vector they want to create.
  int size;
  std::cout << "How many elements? ";
  std::cin >> size;

  // Construct a vector of doubles with the given size.
  // This initializes all the elements in the vector to the
  // default value of double: 0.
  std::vector<double> numbers(size);
  for (int i = 0; i < size; i++) {
    // In every iteration of this for loop, we prompt the user
    // to input the element at index i, then we put value
    // into the vector at index i.
    double value;
    std::cout << "Element " << i << ": ";
    std::cin >> value;
    numbers.at(i) = value;
  }

  // ==================== YOUR CODE HERE ====================
  // TODO: Call the IndexOfMinimumElement function and pass in
  // the `numbers` vector as input, and print out the index.
  // Don't forget to #include "minimum.h" so you can
  // make a call to the IndexOfMinimumElement declared there.
  // ========================================================
  std::cout << "The minimum value in your vector is at index " << IndexOfMinimumElement(numbers) << std::endl;
}
