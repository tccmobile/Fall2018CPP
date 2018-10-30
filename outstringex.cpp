//
// Created by T10115885 on 10/30/2018.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
   ostringstream fullNameOSS; // Output string stream
   ostringstream ageOSS;      // Output string stream
   string firstName;          // First name
   string lastName;           // Last name
   string fullName;           // Full name (first and last)
   string ageStr;             // Age (string)
   int userAge;               // Age
   
   // Prompt user for input
   cout << "Enter \"firstname lastname age\": " << endl;
   cin >> firstName;
   cin >> lastName;
   cin >> userAge;
   
   // Writes to buffer, then copies from buffer into string
   fullNameOSS << lastName << ", " << firstName;
   fullName = fullNameOSS.str();
   
   // Output parsed input
   cout << endl << "   Full name: " << fullName << endl;
   
   // Writes int age as chars to buffer
   ageOSS << userAge;
   
   // Appends (minor) to buffer if less than 21, then
   // copies buffer into string
   if (userAge < 21) {
      ageOSS << " (minor)";
   }
   
   ageStr = ageOSS.str();
   
   // Output string
   cout << "   Age: " << ageStr << endl;
   
   return 0;
}