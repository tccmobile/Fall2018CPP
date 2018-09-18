//
// Created by T10115885 on 9/18/2018.
//
#include <iostream>
using namespace std;

int main(){

    int count=10;
    char userChoice ='z';



    /*while (count<=9){
        cout<<"count: "<<count<<endl;
        count++;
    }
*/
    /*cout<<"Enter a letter. q to quit."<<endl; // priming the pump
    cin>>userChoice;

    while (userChoice!='q'){// q is a sentinal
        cout<<"You entered: "<<userChoice<<endl;
        cout<<"Enter a letter. q to quit."<<endl;
        cin>>userChoice;
    }*/

    do{
        cout<<"Enter a letter. q to quit."<<endl;
        cin>>userChoice;
        if (userChoice=='@')
            break;
        if (userChoice=='?')
            continue;
        if (userChoice!='q'){
            cout<<"You entered: "<<userChoice<<endl;
        }
    } while (userChoice != 'q');

   /* for (int myCount = 0; myCount < 9; ++myCount) {
        cout<<"myCount = "<<myCount<<endl;
    }*/

   /* for (int row = 0; row < 5; ++row) {
        for (int col = 0; col < 4; ++col) {
            cout<<"row = "<<row<<" col= "<<col<<endl;
        }
    }*/




    return 0;
}