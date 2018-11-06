//
// Created by T10115885 on 11/6/2018.
//
#include <iostream>
#include "Person.h"
using namespace std;

Person::Person() {
   // cout<<"Default Person constructor!"<<endl;
    name = "unknown";
    age = 0;
}

Person::Person(const string &name, int age) : name(name), age(age) {
    //cout<<"Non-default Person constructor!"<<endl;
}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

void Person::printMe() {
    cout<<"My name is "<<name<<" and I am "<<age<<" years old."<<endl;
}
