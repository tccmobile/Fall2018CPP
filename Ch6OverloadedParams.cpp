//
// Created by T10115885 on 10/2/2018.
//

#include <iostream>
using namespace std;

/* Your solution goes here  */

int NumberOfPennies(int numDollars, int numPennies=0){
    return ((numDollars*100)+numPennies);
}

int main() {
    cout << NumberOfPennies(5, 6) << endl; // Should print 506
    cout << NumberOfPennies(4) << endl;    // Should print 400
    return 0;
}