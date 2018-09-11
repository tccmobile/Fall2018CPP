//
// Created by T10115885 on 9/11/2018.
//

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){

    string firstName = "William";
    string lastName = "Smith";


    cout<<"The length of the string is: "<<firstName.length()<<endl;

   // cout<<"My full name is: "<<firstName+" "+lastName<<endl;

    cout<<"My full name is: "<<firstName.append(" ").append(lastName)<<endl;

    cout<<firstName.at(0)<<endl;

    firstName.at(0)=tolower(firstName.at(0));


    firstName.at(firstName.length()-1)=toupper((firstName.at(firstName.length()-1)));

    cout<<firstName<<endl;
    //cout<<tolower(name.at(0))<<endl;

    //cout<<name.at(42)<<endl;

    cout<<"found i at: "<<firstName.find('i')<<endl;
    cout<<"found i at: "<<firstName.find('i',firstName.find('i')+1)<<endl;

    cout<<"found q at: "<<firstName.find('q')<<endl;

    if (firstName.find('q')==string::npos){
        cout<<"I didn't find that letter!"<<endl;

    }

    cout<<"Substring1: "<<firstName.substr(0,4)<<endl;
    cout<<"Substring2: "<<firstName.substr(5,4)<<endl;
    cout<<"Substring3: "<<firstName.substr(firstName.length()-4,4)<<endl;
   //cout<<"Substring4: "<<firstName.substr(firstName.length()-4,14)<<endl;

    firstName.insert(7," Alexander");

    cout<<"first name is now: "<<firstName<<endl;

    firstName.replace(8,9,"A.");

    cout<<"first name is now: "<<firstName<<endl;

    cout<<"That's all folks!"<<endl;
    return 0;
}