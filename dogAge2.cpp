//
// Created by T10115885 on 9/11/2018.
//

#include <iostream>
using namespace std;

int main() {
    int dogAgeYears;
    int dogAgeMonths;

    cout << "Enter dog's age (in years): ";
    cin >> dogAgeYears;

    if (dogAgeYears == 0) {
        cout << "Enter dog's age in months: ";
        cin  >> dogAgeMonths;

        switch (dogAgeMonths) {
            case 0:
            case 1:
            case 2:
                cout << "That's 0..14 human months." << endl;
                break;

            case 3:
            case 4:
            case 5:
            case 6:
                cout << "That's 1..5 human years." << endl;
                break;

            case 7:
            case 8:
                cout << "That's 5..9 human years." << endl;
                break;

            case 9:
            case 10:
            case 11:
            case 12:
                cout << "That's 9..15 human years." << endl;
                break;

            default:
                cout << "Invalid input." << endl;
                break;
        }
    }
    else {
        cout << "FIXME: Do earlier dog year cases." << endl;
        switch (dogAgeYears) {
        }
    }

    return 0;
}