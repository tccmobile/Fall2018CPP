//
// Created by T10115885 on 9/25/2018.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){

    vector<string> students(3);
    vector<string> moreStudents(3);

    students.at(0) = "Bob";
    students.at(1) = "Joe";
    students.at(2) = "Will";

    for (int i = 0; i < students.size() ; ++i) {
        cout<<"Student = "<<students.at(i)<<endl;
    }

    moreStudents = students; // deep copy!!!

    cout<<"2nd class is:"<<endl;

    for (int i = 0; i < moreStudents.size() ; ++i) {
        cout<<"Student = "<<moreStudents.at(i)<<endl;
    }

    if (students == moreStudents){
        cout<<"Classes are identical"<<endl;
    } else {
        cout<<"Classes are different"<<endl;
    }

    students.at(1) = "Sue";

    if (students == moreStudents){
        cout<<"Classes are identical"<<endl;
    } else {
        cout<<"Classes are different"<<endl;
    }

    for (int i = 0; i < students.size() ; ++i) {
        cout<<"Student = "<<students.at(i)<<endl;
    }

    cout<<"2nd class is:"<<endl;

    for (int i = 0; i < moreStudents.size() ; ++i) {
        cout<<"Student = "<<moreStudents.at(i)<<endl;
    }

    moreStudents.push_back("Charlie");

    cout<<"Adding a student..."<<endl;

    for (int i = 0; i < moreStudents.size() ; ++i) {
        cout<<"Student = "<<moreStudents.at(i)<<endl;
    }

    students.pop_back();

    cout<<"Dropping a student..."<<endl;

    for (int i = 0; i < students.size() ; ++i) {
        cout<<"Student = "<<students.at(i)<<endl;
    }

    return 0;


}