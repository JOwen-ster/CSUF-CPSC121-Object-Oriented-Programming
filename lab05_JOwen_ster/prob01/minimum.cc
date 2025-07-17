#include "minimum.h"
using namespace std;

int IndexOfMinimumElement(std::vector<double> input) {
  // ==================== YOUR CODE HERE ====================
  // TODO: Find the index of the smallest element in the input
  // vector, and return it. If the input vector is empty,
  // return -1.
  // ========================================================
  if(input.empty())return -1;
  double index = 0;
  for(int i = 0; i < input.size(); i++){
    if(input[i] <= input[index]){
      index = i;
    }
  }return index;
}
