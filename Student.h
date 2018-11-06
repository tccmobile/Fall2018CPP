//
// Created by T10115885 on 11/6/2018.
//

#ifndef FALL2018CPP_STUDENT_H
#define FALL2018CPP_STUDENT_H
#include "Person.h"

class Student: public Person {
private:
    double gpa;
public:
    double getGpa() const;

    void setGpa(double gpa);

    Student();

    Student(const string &name, int age, double gpa);

    void printMe() override;

};


#endif //FALL2018CPP_STUDENT_H
