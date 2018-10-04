//
// Created by T10115885 on 10/4/2018.
//

#include <iostream>
#include <string>
using namespace std;

//Returns the number of characters in usrStr
int GetNumOfCharacters(const string usrStr) {

    /* Type your code here. */
    int numChars=0;

    for (int i = 0; i < usrStr.length() ; ++i) {
        numChars++;
    }

    return numChars;

    //return usrStr.length();

}

void OutputWithoutWhitespace(const string usrStr){

    cout<<"String with no whitespace: ";

    for (int i = 0; i < usrStr.length(); ++i) {
        if((usrStr.at(i)!=' ')&&(usrStr.at(i)!= '\t')){
            cout<<usrStr.at(i);
        }
    }

    cout<<endl;

    return;
}

int main() {

    /* Type your code here. */

    string usrInput;

    cout<<"Enter a sentence or phrase:"<<endl;
    getline(cin,usrInput);

    cout<<"\nYou entered: "<<usrInput<<endl;

    cout<<"\nNumber of characters: "<<GetNumOfCharacters(usrInput)<<endl;

    OutputWithoutWhitespace(usrInput);

    return 0;
}