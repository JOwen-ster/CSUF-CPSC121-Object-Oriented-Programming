#include <iostream>  

#include <iomanip> 

using namespace std; 

 
 

void salary(){ 

  cout << fixed; 

  cout << setprecision(2); 

  float wage, hours, total; 

 
 

  cout << "Hourly wage: "; 

  cin >> wage; 

  cout << "Hours worked: "; 

  cin >> hours; 

 
 

  total = hours <= 40 ? 

  wage * hours : 

  (hours > 40 && hours <= 65) ? 

  (wage * 40) + (hours - 40) * (wage * 1.5) :  

  (wage * 40) + (wage * 1.5) * 25 + (hours- 65) * wage * 2; 

 
 

  if(wage < 0 || hours < 0){ 

    cout << "Invalid input"; 

  }else{ 

    cout << "Total Salary Owed: " << total; 

  } 

} 
