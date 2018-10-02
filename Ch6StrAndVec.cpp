//
// Created by T10115885 on 10/2/2018.
//

#include <iostream>
#include <vector>
using namespace std;

void ReverseVals(vector<int>& vctrVals) {
    int i;           // Loop index
    int tmpVal;      // Temp variable for swapping

    for (i = 0; i < (vctrVals.size() / 2); ++i) {
        tmpVal = vctrVals.at(i); // These statements swap
        vctrVals.at(i) = vctrVals.at(vctrVals.size() - 1 - i);
        vctrVals.at(vctrVals.size() - 1 - i) = tmpVal;
    }
}

void PrintVals(const vector<int>& vctrVals) {
    int i;           // Loop index

    // Print updated vector
    //vctrVals.at(0)= 42; read only = cannot make changes
    cout << endl << "New values: ";
    for (i = 0; i < vctrVals.size(); ++i) {
        cout << " " << vctrVals.at(i);
    }
    cout << endl;
}

int main() {
    const int NUM_VALUES = 8;            // Vector size
    vector<int> userValues(NUM_VALUES);  // User values
    int i;                               // Loop index

    // Prompt user to populate vector
    cout << "Enter " << NUM_VALUES << " values..." << endl;
    for (i = 0; i < NUM_VALUES; ++i) {
        cout << "Value: ";
        cin >> userValues.at(i);
    }

    // Call function to reverse vector values
    ReverseVals(userValues);

    // Print reversed values
    PrintVals(userValues);

    return 0;
}