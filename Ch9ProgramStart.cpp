//
// Created by T10115885 on 11/1/2018.
//
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;


int main(){

    string userInput, first, second;
    int loc = 0;

    cout<<"Enter a string: "<<endl;
    getline(cin,userInput);
    cout<<"You entered: "<<userInput<<endl;

    if (userInput.find(',')==string::npos){
        cout<<"Error: No comma found"<<endl;
    } else {
        loc = userInput.find(',');
        first = userInput.substr(0,loc);
        second = userInput.substr(loc+1);
    }

    if (second.find(',')!=string::npos){
        cout<<"Error: Too many commas"<<endl;
    }
    /*if (atoi(second.c_str())==0){

        cout<<"Error: string not followed by number."<<endl;

    }
*/
    istringstream inSS(second);

    int value;

    inSS>>value;

    if (inSS.fail()){
        cout<<"Error: string not followed by number."<<endl;
    }
    /*int value = atoi(second.c_str());

    cout<<"value: "<<value<<endl;*/


    return 0;
}