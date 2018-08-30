//
// Created by William Smith on 8/30/18.
//

#include <iostream>
using namespace std;

int main() {
    int userNum;
    int userNum2;

    cout << "Enter integer:" << endl;
    cin  >> userNum;

    /* Type your code here */
    cout<< "You entered: "<<userNum<<endl;

    cout << userNum << " squared is "<<(userNum*userNum)<<endl;
    cout << "And " << userNum<< " cubed is "<<(userNum*userNum*userNum)<<"!!"<<endl;

    cout<<"Enter another integer:"<<endl;
    cin>>userNum2;

    cout<<userNum<<" + "<<userNum2<<" is "<<(userNum+userNum2)<<endl;
    cout<<userNum<<" * "<<userNum2<<" is "<<(userNum*userNum2)<<endl;
    return 0;
}