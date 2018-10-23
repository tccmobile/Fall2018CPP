//
// Created by T10115885 on 10/23/2018.
//

#include <iostream>
using namespace std;

class SimpleItem {
public:
    void PrintNums();
    SimpleItem(int initVa1 = -1, int initVal2 = -1);
private:
    int num1;
    int num2;
};

SimpleItem::SimpleItem(int initVal1, int initVal2) {
    num1 = initVal1;
    num2 = initVal2;
}

void SimpleItem::PrintNums() {
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
}

int main() {
    SimpleItem* myItemPtr1 = nullptr; // pointers to objects
    SimpleItem* myItemPtr2 = nullptr;
    SimpleItem myItem; // object
    SimpleItem myItem2(2,3);


    myItemPtr1 = new SimpleItem; // default contructor
    (*myItemPtr1).PrintNums();
    cout << endl;

    myItemPtr2 = new SimpleItem(8, 9); // over ride default values
    myItemPtr2->PrintNums(); // left hand side is a pointer

    myItem.PrintNums(); // left hand is an object
    myItem2.PrintNums();

    return 0;
}