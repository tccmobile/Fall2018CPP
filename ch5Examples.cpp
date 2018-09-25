//
// Created by T10115885 on 9/25/2018.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> items(3);
    vector<int> moreItems(5);

    items.at(0)=12;
    items.at(1)=32;
    items.at(2)=52;


    //   items.at(3)=17;


    //cout<< items.at(3);

    for (int i = 0; i < items.size(); ++i) {
        cout<<"ITEM = "<<items.at(i)<<endl;

    }

    cout<<"Now to resize"<<endl;
    items.resize(5);
    items.at(3)=62;
    items.at(4)=82;

    moreItems = items;


    cout<<"Vector now resized"<<endl;
    for (int i = 0; i < items.size(); ++i) {
        cout<<"ITEM = "<<items.at(i)<<endl;

    }

    items.resize(2);
    cout<<"Vector now resized again"<<endl;

    for (int i = 0; i < items.size(); ++i) {
        cout<<"ITEM = "<<items.at(i)<<endl;

    }


    items.resize(3);
    cout<<"Vector now resized again"<<endl;

    for (int i = 0; i < items.size(); ++i) {
        cout<<"ITEM = "<<items.at(i)<<endl;

    }

    cout<<"Values saved in 2nd vector"<<endl;
    for (int i = 0; i < moreItems.size(); ++i) {
        cout<<"ITEM = "<<moreItems.at(i)<<endl;

    }

    return 0;
}