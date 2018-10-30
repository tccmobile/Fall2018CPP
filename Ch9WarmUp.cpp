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

    cout<<"First: "<<first<<endl;
    cout<<"Second: "<<second<<endl;

    return 0;
}