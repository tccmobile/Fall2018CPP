//
// Created by T10115885 on 11/20/2018.
//

#include <iostream>
using namespace std;

void GuessNumber(int lowVal, int highVal) {
   int midVal;            // Midpoint of low and high value
   char userAnswer;       // User response

   midVal = (highVal + lowVal) / 2;

   // Prompt user for input
   cout << "Is it " << midVal << "? (l/h/y): ";
   cin >> userAnswer;

   if( (userAnswer != 'l') && (userAnswer != 'h') ) { // Base case: found number
      cout << "Thank you!" << endl;
   }
   else {                                             // Recursive case: split into lower OR upper half
      if (userAnswer == 'l') {                        // Guess in lower half
         GuessNumber(lowVal, midVal);                 // Recursive call
      }
      else {                                          // Guess in upper half
         GuessNumber(midVal + 1, highVal);            // Recursive call
      }
   }
}

int main() {
   // Print game objective, user input commands
   cout << "Choose a number from 0 to 100." << endl;
   cout << "Answer with:" << endl;
   cout << "   l (your num is lower)" << endl;
   cout << "   h (your num is higher)" << endl;
   cout << "   any other key (guess is right)." << endl;

   // Call recursive function to guess number
   GuessNumber(0, 100);

   return 0;
}