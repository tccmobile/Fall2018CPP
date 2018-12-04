//
// Created by T10115885 on 12/4/2018.
//


#include <iostream>
using namespace std;

template <typename T>
class TimeHrMn {
public:
    void SetTime(T userMin);
    void PrintTime() const;
private:
    T hrsVal;
    T minsVal;
};


template <typename T>
void TimeHrMn<T>::SetTime(T userMin) {
    minsVal = userMin;
    hrsVal = userMin / 60.0;
}

template <typename T>
void TimeHrMn<T>::PrintTime() const {
    cout << "Hours: " << hrsVal << " ";
    cout << "Minutes: " << minsVal << endl;
}

int main() {
    TimeHrMn<int> usrTimeInt;
    TimeHrMn<double> usrTimeDbl;

    usrTimeInt.SetTime(135);
    usrTimeInt.PrintTime();

    usrTimeDbl.SetTime(135.0);
    usrTimeDbl.PrintTime();

    return 0;
}