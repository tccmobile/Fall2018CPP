//
// Created by T10115885 on 11/27/2018.
//

#include <iostream>
#include <stdexcept>
using namespace std;

int GetWeight() {
    int weightParam;     // User defined weight

    // Get user data
    cout << "Enter weight (in pounds): ";
    cin >> weightParam;

    // Error checking, non-negative weight
    if (weightParam < 0) {
        throw runtime_error("Invalid weight.");
    }
    return weightParam;
}

int GetHeight() {
    int heightParam;     // User defined weight

    // Get user data
    cout << "Enter height (in inches): ";
    cin >> heightParam;

    // Error checking, non-negative weight
    if (heightParam < 0) {
        throw runtime_error("Invalid height.");
    }
    return heightParam;
}

int main() {
    int weightVal;        // User defined weight (lbs)
    int heightVal;        // User defined height (in)
    float bmiCalc;        // Resulting BMI
    char quitCmd;         // Indicates quit/continue

    quitCmd = 'a';

    while (quitCmd != 'q') {
        try {
            // Get user data
            weightVal = GetWeight();
            heightVal = GetHeight();

            // Calculate BMI and print user health info if no input error
            // Source: http://www.cdc.gov/
            bmiCalc = (static_cast<float>(weightVal) /
                       static_cast<float>(heightVal * heightVal)) * 703.0;

            cout << "BMI: " << bmiCalc << endl;
            cout << "(CDC: 18.6-24.9 normal)" << endl;
        }
        catch (runtime_error &excpt) {
            // Prints the error message passed by throw statement
            cout << excpt.what() << endl;
            cout << "Cannot compute health info." << endl;
        }

        // Prompt user to continue/quite
        cout << endl << "Enter any key ('q' to quit): ";
        cin >> quitCmd;
    }

    return 0;
}