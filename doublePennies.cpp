//
// Created by T10115885 on 11/20/2018.
//

#include <iostream>
using namespace std;

// Returns number of pennies if pennies are doubled numDays times
long long DoublePennies(long long numPennies, int numDays){
    long long totalPennies;

    /* Your solution goes here  */
    if (numDays == 1){
        totalPennies = numPennies *2;
    }
    else {
        totalPennies = DoublePennies((numPennies * 2), numDays - 1);
    }

    return totalPennies;
}

// Program computes pennies if you have 1 penny today,
// 2 pennies after one day, 4 after two days, and so on
int main() {
    long long startingPennies;
    int userDays;

    startingPennies = 1;
    userDays = 21;
    cout << "Number of pennies after " << userDays << " days: "
         << DoublePennies(startingPennies, userDays) << endl;
    return 0;
}