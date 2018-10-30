//
// Created by T10115885 on 10/25/2018.
//

#include <iostream>
using namespace std;

class MyClass {
public:
   MyClass();
   ~MyClass();
    MyClass(const MyClass& origClass);
    MyClass& operator=(const MyClass& objToCopy);

   // Set member value dataObj
   void SetDataObj(const int setVal) {
      *dataObj = setVal;
   }

   // Return member value dataObj
   int GetDataObj() const {
      return *dataObj;
   }
private:
   int* dataObj;// Data member
};

// Default constructor
MyClass::MyClass() {
   cout << "Constructor called." << endl;
   dataObj = new int; // Allocate mem for data
   *dataObj = -1;
}

MyClass::MyClass(const MyClass& origClass) {
    cout << "Copy constructor called." << endl;
    dataObj = new int; // Allocate sub-object
    *dataObj = *(origClass.dataObj);
}

MyClass& MyClass::operator=(const MyClass& objToCopy) {
    cout << "Assignment op called." << endl;

    if (this != &objToCopy) {           // 1. Don't self-assign
        delete dataObj;                  // 2. Delete old dataObj
        dataObj = new int;               // 3. Allocate new dataObj
        *dataObj = *(objToCopy.dataObj); // 4. Copy dataObj
    }

    return *this;
}

// Destructor
MyClass::~MyClass() {
   cout << "Destructor called." << endl;
   delete dataObj;
}

void SomeFunction(MyClass localObj) {
   // Do something with localObj
   cout<<"I'm inside SomeFunction()"<<endl;
   localObj.SetDataObj(41);

   //Destructor called on local copy
}

int main() {
   MyClass tempClassObj,tempClassObj2; // Create object of type MyClass

   // Set and print data member value
   tempClassObj.SetDataObj(9);
   cout << "Before: " << tempClassObj.GetDataObj() << endl;

   // Calls SomeFunction(), tempClassObj is passed by value
   SomeFunction(tempClassObj);

   // Print data member value
   cout << "After: " << tempClassObj.GetDataObj() << endl;

    tempClassObj2 = tempClassObj;

    cout<<"tempclassobj2's data: "<<tempClassObj2.GetDataObj()<<endl;
    cout<<"Changing value in tempclassobj2..."<<endl;
    tempClassObj2.SetDataObj(42);

    cout<<"After..."<<endl;
    cout<<"tempclassobj2's data: "<<tempClassObj2.GetDataObj()<<endl;
    cout<<"tempclassobj's data: "<<tempClassObj.GetDataObj()<<endl;



   return 0;
}