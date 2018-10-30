//
// Created by T10115885 on 10/25/2018.
//

#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass();
    ~MyClass();
private:
    int* subObj;
};

MyClass::MyClass() {
    cout << "Constructor called." << endl;
    subObj = new int; // Allocate mem for data
    *subObj = 0;
}

MyClass::~MyClass() {
    cout << "Destructor called." << endl;
    delete subObj;
}

int main() {
    MyClass* tempClassObj;      // Create object of type MyClass

    tempClassObj = new MyClass; // Allocate mem for object
    delete tempClassObj;        // No more memory leak

    //tempClassObj->~MyClass(); do NOT try to call destructor explicitly
    // Freed obj's mem, including subObj
    // Rest of program ...
    return 0;
}