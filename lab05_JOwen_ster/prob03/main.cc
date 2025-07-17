#include <iostream>
#include <string>
#include <map>

int main() {
  std::string text;
  std::cout << "Enter text to analyze: ";
  // std::getline allows us to capture an entire line of input
  // and store it into the text variable.
  std::getline(std::cin, text);

  // ===================== YOUR CODE HERE =====================
  // TODO:
  // 1. Construct a map to map from each character to its
  //    frequency in the inputted line of text.
  //    Don't forget to #include <map>.
  // 2. Write a loop to iterate through each character in the
  //    text and insert to (or update) the map to track that
  //    character's frequency. We suggest using my_map.count
  //    to check if a character is not yet in the map, see
  //    the README for an example.
  // Hint: you can use a range based for loop to iterate over
  // characters in a string: for (char c : text) {...}
  // ==========================================================
  std::map<char, int> map;
  for(char c : text){
    if (map.count(c) > 0) {// if this char appears once or more
      map.at(c) += 1; // 
    }else{
      map.insert({c,1});
    }
  }

  // The code block in a while loop will be executed as long as
  // the condition in the parentheses is true. We use `while (true)`
  // so we can ask the user for input as many times as they want.
  char input;
  while (true) {
    std::cout << "What character do you want stats on? ";
    std::cin >> input;
    // The special keyword "break" is used to jump out of a loop.
    // Since the while loop's condition is always true, we will
    // only stop looping when the user inputs 'Q'.
    if (input == 'Q') {
      break;
    }

    // =============== YOUR CODE HERE ===============
    // TODO: Use the map you constructed to access
    // the frequency of the requested character.
    // Show the user how many times the character
    // appeared.
    //
    // Hint: don't forget to check if
    // the given character exists in your map first,
    // and print out 0 if it is not in your map.
    // ==============================================
    if(map.count(input) == 0){
      std::cout << "The character " << input << " appears 0 times." << std::endl;
      }else{
      std::cout << "The character " << input << " appears " << map.at(input) << " times." << std::endl;
      }

  }
  std::cout << "Goodbye!" << std::endl;
  return 0;
}
