//
// Created by T10115885 on 10/9/2018.
//

#include <iostream>
using namespace std;

class PersonInfo {
public:
    void   SetNumKids(int personsKids);
    void   IncNumKids();
    int    GetNumKids() const;
private:
    int    numKids;
};

void PersonInfo::SetNumKids(int personsKids) {
    numKids = personsKids;
}

void PersonInfo::IncNumKids() {
    numKids = numKids + 1;
}

int PersonInfo::GetNumKids() const {
    return numKids;
}

int main() {
    PersonInfo person1;
    PersonInfo person2;

    person1.SetNumKids(3);

    /* Your solution goes here  */
    cout<<"Kids: "<<person1.GetNumKids()<<endl;

    person1.IncNumKids();

    cout<<"New baby, kids now: "<<person1.GetNumKids()<<endl;


    cout<<"Kids: "<<person2.GetNumKids()<<endl;

    person2.IncNumKids();

    cout<<"New baby, kids now: "<<person2.GetNumKids()<<endl;

    return 0;
}