//
// Created by T10115885 on 12/4/2018.
//

#include <iostream>
using namespace std;

template<typename TheType>
class TripleItem {
public:
    TripleItem(TheType val1 = 0, TheType val2 = 0, TheType val3 = 0);
    void PrintAll() const;   // Print all data member values
    TheType MinItem() const; // Return min data member value
private:
    TheType item1;           // Data value 1
    TheType item2;           // Data value 2
    TheType item3;           // Data value 3
};

template<typename TheType>
TripleItem<TheType>::TripleItem(TheType i1, TheType i2, TheType i3) {
    item1 = i1;
    item2 = i2;
    item3 = i3;
}

// Print all data member values
template<typename TheType>
void TripleItem<TheType>::PrintAll() const {
    cout << "(" << item1 << "," << item2
         << "," << item3 << ")" << endl;
}

// Return min data member value
template<typename TheType>
TheType TripleItem<TheType>::MinItem() const {
    TheType minVal = item1; // Holds value of min item, init to first item

    if (item2 < minVal) {
        minVal = item2;
    }
    if (item3 < minVal) {
        minVal = item3;
    }

    return minVal;
}

int main() {
    TripleItem<int> triInts(9999, 5555, 6666); // TripleItem class with ints
    TripleItem<short> triShorts(99, 55, 66);   // TripleItem class with shorts
    TripleItem<string> triString("bob","adam","carl");

    // Try functions from TripleItem
    triInts.PrintAll();
    cout << "Min: " << triInts.MinItem() << endl << endl;

    triShorts.PrintAll();
    cout << "Min: " << triShorts.MinItem() << endl << endl;

    triString.PrintAll();
    cout << "Min: " << triString.MinItem() << endl << endl;

    return 0;
}