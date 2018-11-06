//
// Created by T10115885 on 11/6/2018.
//

#ifndef FALL2018CPP_PERSON_H
#define FALL2018CPP_PERSON_H

#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person();

    Person(const string &name, int age);

    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    virtual void printMe();


};


#endif //FALL2018CPP_PERSON_H
