//
// Created by T10115885 on 11/27/2018.
//

#include<iostream>
#include <stdexcept>
#include <string>
using namespace std;


int main() {

    int value;
    cout << "Please enter an integer" << endl;
    cin >> value;

    try {
        if ((value % 2) != 0) {
            throw runtime_error("Bad bad number");
        }
        if (value == 42) {
            throw value;
        }
        cout << "Thank you for entering a even number!" << endl;

    } catch (runtime_error &exp) {
        cout << "Oh no you entered a " << exp.what() << endl;
    } catch (int value){
        cout<<"ARGHHH - the meaning of life is "<<value<<endl;
    }



    return 0;
}