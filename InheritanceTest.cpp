//
// Created by T10115885 on 11/6/2018.
//

#include <iostream>
#include <string>
#include <vector>
#include "Person.h"
#include "Student.h"

using namespace std;


int main(){

    vector<Person> tulsa;
    vector<Student> TCC;

    Person one;
    Person two("bob",42);

    /*one.printMe();
    two.printMe();*/

    one.setName("carl");
    one.setAge(75);

    //one.printMe();



    Student three;
    Student four("mary",17,3.9);

    //three.printMe();
    // cout<<"and my gpa is: "<<three.getGpa()<<endl;

    //four.printMe();

    three.setName("sue");
    three.setAge(51);
    three.setGpa(2.7);

    //three.printMe();

    tulsa.push_back(one);
    tulsa.push_back(two);
    tulsa.push_back(three);
    tulsa.push_back(four);

    for (int i = 0; i < tulsa.size(); ++i) {
        tulsa.at(i).printMe();
    }

    TCC.push_back(three);
    TCC.push_back(four);

    for (int j = 0; j < TCC.size(); ++j) {
        TCC.at(j).printMe();
    }


    cout<<"\nand now for something completely different....\n"<<endl;

    vector<Person *> newTulsa;

    newTulsa.push_back(new Person("joe",21));
    newTulsa.push_back(new Student("sam",33,4.0));
    newTulsa.push_back(new Person("ruth",60));
    newTulsa.push_back(new Student("alex",16,3.8));


    for (int k = 0; k < newTulsa.size(); ++k) {
        newTulsa.at(k)->printMe();
    }


    return 0;
}