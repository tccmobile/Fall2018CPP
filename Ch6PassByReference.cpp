//
// Created by T10115885 on 10/2/2018.
//

#include <iostream>
using namespace std;

void ConvHrMin(int timeVal, int& hrVal, int& minVal) {
    hrVal = timeVal / 60;
    minVal = timeVal % 60;
    return;
}

int main() {
    int totTime,usrHr,usrMin;
    totTime = usrHr = usrMin= 0;

    cout << "Enter total minutes: ";
    cin >> totTime;

    ConvHrMin(totTime, usrHr, usrMin);

    cout << "Equals: ";
    cout << usrHr << " hrs ";
    cout << usrMin << " min" << endl;

    return 0;
}