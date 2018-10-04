//
// Created by T10115885 on 10/4/2018.
//

#include <iostream>
#include <string>
using namespace std;

void DatePrint(int currDay, int currMonth, int currYear) {
   cout << currMonth << "/" << currDay << "/" << currYear;
}

/*void DatePrint(int currDay, string currMonth, int currYear) {
   cout << currMonth << " " << currDay << ", " << currYear;
}*/

int main() {

   DatePrint(30, 7, 2012);
   cout << endl;

   DatePrint(30, "July", 2012);
   cout << endl;

   return 0;
}