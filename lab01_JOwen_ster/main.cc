#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
  int main(){
    //sets decimal to .00 and truncates the rest.
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    //
    const float TAX_RATE = .075;
    float cost, tip;
    std::cout << "Please input meal cost: ";
    std::cin >> cost;
    std::cout << "Please input tip percentage: ";
    std::cin >> tip;
    std::cout << "\nRestaurant Bill\n====================\n";
    std::cout << "Subtotal: $" << cost << "\n"
    << "Taxes: $" << (cost*TAX_RATE) << "\n"
    << "Tip: $" << cost*(tip/100) << "\n"
    << "====================\n";
    std::cout << "Total: $" << cost + (cost*TAX_RATE) + (cost*tip/100) << "\n";
    
    return 0;
  }
