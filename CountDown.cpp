//
// Created by T10115885 on 11/20/2018.
//

#include <iostream>
using namespace std;

void CountDown(int countInt) {
    if (countInt == 0) {
        cout << "GO!\n";
    }
    else {
        cout << countInt << endl;
        CountDown(countInt - 1);
        cout << countInt << endl;
    }
}

int main() {
    CountDown(2);
    return 0;
}