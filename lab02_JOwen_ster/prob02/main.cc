#include <iostream>

int main() {
  std::cout << "Thank you for applying for the Tuffy Credit card. \n Please enter your credit score. \n Credit Score: ";
  int cScore;
  std::cin >> cScore;
  std::cout << "\n \n";
  switch (cScore){
    case 0 ... 579:
      std::cout << "Unfortunately, you are ineligible for Tuffy credit cards at the moment. Please try again at a later date. \n";
      std::cout << "Thank you for using our program, please come again! ";
      break;
    case 580 ... 669:
      std::cout << "You are eligible for the Silver Tuffy Card. \n";
      std::cout << "Thank you for using our program, please come again! ";
      break;
    case 670 ... 799:
      std::cout << "You are eligible for the Gold Tuffy Card. \n";
      std::cout << "Thank you for using our program, please come again! ";
      break;
    case 800 ... 850:
      std::cout << "You are eligible for the Platinum Tuffy Card. \n";
      std::cout << "Thank you for using our program, please come again! ";
      break;
    default:
      std::cout << "That is an invalid credit score. Please run the program again and provide a valid credit score. \n";
      std::cout << "Thank you for using our program, please come again! ";
      break;
  }
  return 0;
}
