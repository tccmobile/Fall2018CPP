//
// Created by T10115885 on 10/30/2018.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    istringstream inSS;       // Input string stream
    string lineString;        // Holds line of text
    string firstName;         // First name
    string lastName;          // Last name
    int    userAge;           // Age
    bool   inputDone;         // Flag to indicate next iteration

    inputDone = false;

    // Prompt user for input
    cout << "Enter \"firstname lastname age\" on each line" << endl;
    cout << "(\"Exit\" as firstname exits)." << endl << endl;

    // Grab data as long as "Exit" is not entered
    while (!inputDone) {

        // Entire line into lineString
        getline(cin, lineString);

        // Copies to inSS's string buffer
        inSS.clear();
        inSS.str(lineString);

        // Now process the line
        inSS >> firstName;

        // Output parsed values
        if (firstName == "Exit") {
            cout << "   Exiting." << endl;

            inputDone = true;
        }
        else {
            inSS >> lastName;
            inSS >> userAge;

            cout << "   First name: " << firstName << endl;
            cout << "   Last  name: " << lastName << endl;
            cout << "   Age:        " << userAge   << endl;
            cout << endl;
        }
    }

    return 0;
}