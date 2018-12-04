//
// Created by T10115885 on 12/4/2018.
//


#include <iostream>
using namespace std;

template<typename TheType, typename TheType2>
TheType TripleMin(TheType item1, TheType2 item2, TheType2 item3) {
    TheType minVal = item1; // Holds min item value, init to first item

    if (item2 < minVal) {
        minVal = item2;
    }
    if (item3 < minVal) {
        minVal = item3;
    }

    return minVal;
}

int main() {
    int num1;
    int num2;
    int num3;
    double dbl1;

    num1 = 55;
    num2 = 99;
    num3 = 66;
    dbl1 = 12.5;

    cout << "Items: " << num1 << " " << num2 << " " << num3 << endl;
    cout << "Min: " << TripleMin(num1, num2, num3) << endl << endl;

    cout << "Items: " << dbl1 << " " << num2 << " " << num3 << endl;
    cout << "Min: " << TripleMin(dbl1, num2, num3) << endl << endl;

    return 0;
}
