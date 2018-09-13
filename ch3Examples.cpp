//
// Created by T10115885 on 9/11/2018.
//

#include <iostream>
#include <string>
using namespace std;

int main() {

    int age = 80;
    int numChildren = 8;
    string usrName;

    if ((age > 60) && (numChildren <= 2)) {
        cout << "You are close to retirement!" << endl;
    } else {
        cout << "You have a few more years to work..." << endl;
    }


    if (age >= 10) {
        cout << "over the hill!" << endl;
    }


    age = 20;

    if ((age >= 18) ||  (age <= 25)) {
        cout << "Eligible" << endl;
    } else {
        cout << "Ineligible" << endl;
    }

    cout << "Please enter your name: " << endl;
    /// cin>>usrName; only reads to whitespace

    getline(cin, usrName);

    if (usrName.find("Smith") != string::npos) {
        cout << "There are a lot of you out there!" << endl;
    } else {
        cout << "At least you're not a Smith!" << endl;
    }


}