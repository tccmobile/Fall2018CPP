//
// Created by T10115885 on 10/30/2018.
//

#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;

    num1 = -1; // Initial value -1 for demo purposes.
    num2 = -1;

    cout << "Enter a number: " << endl;
    cin  >> num1; // Stream error state entered here.

    cout << "Enter a second number:" << endl;
    cin  >> num2; // Stream already in error state, so extraction skipped.

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    return 0;
}