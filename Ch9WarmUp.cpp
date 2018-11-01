//
// Created by T10115885 on 10/30/2018.
//

#include <iostream>
#include <string>
using namespace std;

int main() {

    /* Type your code here. */

    string userInput;

    cout<<"Enter input string:"<<endl;
    getline(cin,userInput);

    while (userInput.find(',')==string::npos){
        cout<<"Error: No comma in string."<<endl<<endl;
        cout<<"Enter input string:"<<endl;
        getline(cin,userInput);
    }

    int loc = userInput.find(',');

    string first = userInput.substr(0,loc);
    string second = userInput.substr(loc+1);


    int start = first.find_first_not_of(' ');

    string startTrim1 = first.substr(start);

    cout<<"startTrim1: "<< startTrim1<<endl;

    int end = startTrim1.find_last_not_of(' ');

    string finalFirst = startTrim1.substr(0,end+1);

    cout<<"finalFirst: "<<finalFirst<<"!"<<endl;

   /* cout<<"First: ";

    for (int i = 0; i <first.size() ; ++i) {
        if (first.at(i)!=' ')
            cout<<first.at(i);
    }
    cout<<endl;

    cout<<"Second: ";

    for (int j = 0; j < second.size() ; ++j) {
        if (second.at(j)!= ' ')
            cout<<second.at(j);
    }
    cout<<endl;*/

    return 0;
}