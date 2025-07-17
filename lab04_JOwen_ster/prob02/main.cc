#include <iostream>

#include "rectangle.h"
using namespace std;

int main() {
  std::cout << "====== Rectangle 1 ======" << std::endl;
  // TODO: accept user input for the length and width of rectangle 1,
  // and instantiate a new Rectangle object with these inputs.
  int length1, width1;
  cout << "Please enter the length: ";
  cin >> length1;
  cout << "Please enter the width: ";
  cin >> width1;
  cout << "Rectangle 1 created with length " << length1 << " and width " << width1 << std::endl;
  Rectangle rect1; rect1.SetLength(length1); rect1.SetWidth(width1);
  cout << "The area of Rectangle 1 is: " << rect1.Area() << std::endl;
  cout << "The perimeter of Rectangle 1 is: " << rect1.Perimeter();
  cout << std::endl;
  cout << std::endl;

  std::cout << "====== Rectangle 2 ======" << std::endl;
  // TODO: accept user input for the length and width of rectangle 2,
  // and instantiate a new Rectangle object with these inputs.
  int length2, width2;
  cout << "Please enter the length: ";
  cin >> length2;
  cout << "Please enter the width: ";
  cin >> width2;
  Rectangle rect2; rect2.SetLength(length2); rect2.SetWidth(width2);
  cout << "Rectangle 2 created with length " << length2 << " and width " << width2 << std::endl;
  cout << "The area of Rectangle 2 is: " << rect2.Area() << std::endl;
  cout << "The perimeter of Rectangle 2 is: " << rect2.Perimeter();
  cout << std::endl;
  cout << std::endl;
  // TODO: call LargestRectangleByArea to determine which rectangle
  // is larger, and print out its length, width, and area.
  // Follow the README for formatting.
  cout << "The largest rectangle has a length of " << LargestRectangleByArea(rect1,rect2).GetLength() << ", a width of " << LargestRectangleByArea(rect1,rect2).GetWidth() << ", and an area of " << LargestRectangleByArea(rect1,rect2).Area() << "." << std::endl;
  return 0;
}
