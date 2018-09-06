//
// Created by T10115885 on 9/6/2018.
//

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    int myInt;
    int mySecondInt=0;
    int myNumerator = 7;
    int myDenomenator = 2;

    double myDouble = 7.1;
    float  myFloat = 3.14;
    const float PI = 3.14156;
    double answer = 0;
    int answerMod = 0;

    char myChar = 'z';

    string myName = "Will";

    myInt=42;
    //PI = 1.1;

    answer = float(myNumerator)/myDenomenator; //best way
    //answer = float(myNumerator/myDenomenator); //easy mistake
    answerMod = myNumerator%myDenomenator;

    cout<<"Value of myInt: "<<myInt<<endl;
    cout<<"Value of myDouble: "<<myDouble<<endl;
    cout<<"Value of myFloat: "<<myFloat<<endl;
    cout<<"Value of myChar: "<<myChar<<endl;
    cout<<"Value of myChar after math: "<<(myChar - 32)<<endl;
    cout<<"Value of myName: "<<myName<<endl;
    cout<<"Value of PI: "<<PI<<endl;
    cout<<"Result of division: "<<answer<<endl;
    cout<<"Result of modulus division: "<<answerMod<<endl;
    cout<<"5 cubed: "<<pow(5.0,3.0)<<endl;
    cout<<"Square root of  81: "<<sqrt(81.0)<<endl;

    srand(time(0));

    cout<<"A random number: "<<rand()<<endl;
    cout<<"Another random number: "<<rand()<<endl;
    cout<<"Random with a range 0-10: "<<rand()%11<<endl;








}