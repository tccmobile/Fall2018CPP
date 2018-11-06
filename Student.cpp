//
// Created by T10115885 on 11/6/2018.
//

#include <iostream>
#include "Student.h"

double Student::getGpa() const {
    return gpa;
}

void Student::setGpa(double gpa) {
    Student::gpa = gpa;
}

Student::Student() {
    //cout<<"Default Student constructor!"<<endl;
    gpa=3.0;
}

Student::Student(const string &name, int age, double gpa) : Person(name, age), gpa(gpa) {
    //cout<<"Non-default Student constructor!"<<endl;
}

void Student::printMe() {
    cout<<"My name is "<<name<<" and I am "<<age<<" years old and my gpa is "<<gpa<<endl;
}
