//
// Created by T10115885 on 9/25/2018.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<double> weights(5);
    double total = 0, average = 0, max =0;

    for (int i = 0; i < weights.size(); ++i) {
        cout<<"Enter weight "<<(i+1)<<":"<<endl;
        cin>> weights.at(i);
        total+=weights.at(i); // total = total + weights.at(i)
        if (weights.at(i)>max){
            max = weights.at(i);
        }
    }

    cout<<"You entered: ";
    for (int j = 0; j < weights.size(); ++j) {
        cout<<weights.at(j)<<" ";
    }
    cout<<endl<<endl;

    cout<<"Total weight: "<<total<<endl;
    cout<<"Average weight: "<<total/5<<endl;
    cout<<"Max weight: "<<max<<endl;


    return 0;
}
