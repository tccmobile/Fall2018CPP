//
// Created by T10115885 on 9/13/2018.
//

#include <iostream>
#include <string> // Note: This library is needed to use the string type
using namespace std;

int main() {

    /* Type your code here. */
    string usrInput;

    cout<<"Input an abbreviation:"<<endl;

    cin>>usrInput;

    if (usrInput=="LOL"){
        cout<<"laughing out loud"<<endl;
    } else if (usrInput=="IDK"){
        cout<<"I don't know"<<endl;
    } else if (usrInput=="BFF"){
        cout<<"best friends forever"<<endl;
    } else if (usrInput=="IMHO"){
        cout<<"in my humble opinion"<<endl;
    } else if (usrInput=="TMI"){
        cout<<"too much information"<<endl;
    }
    else {
        cout<<"Unknown"<<endl;
    }

    return 0;
}