#include <iostream>  

using namespace std; 

 
 

string MilitaryToRegularTime(int military_time) {  

  string mts = to_string(military_time); 

  const string sep = ":"; 

  string time; 

  // 

  int first = military_time < 1000 ? stoi(to_string(military_time).substr(0,1)) : stoi(to_string(military_time).substr(0,2)); 

  string last = military_time < 1000 ? to_string(military_time).substr(1,mts.length()) : to_string(military_time).substr(2,mts.length()); 

  // 

 
 

  if(first == 12 && military_time > 1200){ 

    time = to_string(first) + sep + last + " pm"; 

    return time; 

  } 

 
 

  if(military_time >= 1200){ 

    first = first - 12; 

    time = to_string(first) + sep + last + " pm"; 

  } 

 
 

  if(military_time < 1000){ 

    time = to_string(first) + sep + last + " am";  

    return time; 

  } 

 
 

  if(military_time < 1200){ 

    time = to_string(first) + sep + last + " am"; 

  } 

  return time; 

} 
