/*
  Parke Lovett
  09/28/2022
  We will validate that user input is all digits and positive,
  then add the two numbers together
*/

#include <iomanip>
#include <iostream>                                             // Libraries to import and be used by our program
#include <string>

int main() {                                                    // Main driver for program

  double num1; double num2;                                     // Variables to hold user inputs as well as keep count of wrong inputs
  int counter1 = 1, counter2 = 1;

  std::cout << "Enter num1: ";                                  // Get user input for first number

  while ((!(std::cin >> num1)) || num1 < 0 ||                   // While loops checks if data type was correct and that num1 is positive.
         (std::cin.peek() != ' ' && std::cin.peek() != '\n' &&  // .peek() lets us 'peek' whats in the buffer, while loop continues as long as 
          std::cin.peek() != '\t' && std::cin.peek() != EOF)) { //  no tab, newline or end of file key is present
    if (counter1 < 3) {
      std::cout << "INVALID RE-Enter num1: ";
      std::cin.clear();
      std::cin.ignore(20, '\n');                                 // If user input was wrong, console prompts for a new value. 
      counter1 += 1;                                             // Then we clear input stream and increment counter
    } else {
      std::cout << "PROGRAM ABORT" << std::endl;                 // If counter over 3 program aborts 
      return -1;                                                // Return -1 means error in program run
    }
  }
  std::cout << "Enter num2: ";                                  // Get user input for second number

  while ((!(std::cin >> num2)) || num2 < 0 ||                   // While loops checks if data type was correct and that num2 is positive.
         (std::cin.peek() != ' ' && std::cin.peek() != '\n' &&  // .peek() lets us 'peek' whats in the buffer, while loop continues as long as
          std::cin.peek() != '\t' && std::cin.peek() != EOF)) { //  no tab, newline or end of file key is presen
    if (counter2 < 3) {
      std::cout << "INVALID RE-Enter num1: ";
      std::cin.clear();
      std::cin.ignore(20, '\n');                                // If user input was wrong, console prompts for a new value.
      counter2 += 1;                                            // Then we clear input stream and increment counter
    } else {
      std::cout << "PROGRAM ABORT" << std::endl;                // If counter over 3 program aborts
      return -1;                                                // Return -1 means error in program run
    }
  }
                                                                // Output results to console using proper formatting 
  std::cout << std::setw(7) << std::right << num1 << std::endl;
  std::cout << "+" << std::setw(6) << std::right << num2 << std::endl; 
  std::cout << "-------" << std::endl;
  std::cout << std::setw(7) << num1 + num2 << std::right << std::endl;

  return 0;                                                     // Return 0 means successful program run  
}
