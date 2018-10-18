#include <iostream>
#include "ItemToPurchase.h"

using namespace std;

int main() {

    ItemToPurchase one,two;

    string itemName,temp;
    int itemPrice, itemQuantity;

    cout<<"Item 1"<<endl;
    cout<<"Enter the item name:"<<endl;
    getline(cin,itemName);
    cout<<"Enter the item price:"<<endl;
    getline(cin,temp);
    itemPrice = stoi(temp);
   // cin>>itemPrice;
    cout<<"Enter the item quantity:"<<endl;
    getline(cin,temp);
    itemQuantity = stoi(temp);
    //cin>>itemQuantity;

    one.SetName(itemName);
    one.SetPrice(itemPrice);
    one.SetQuantity(itemQuantity);

    cout<<"\nItem 2"<<endl;
    cout<<"Enter the item name:"<<endl;
    getline(cin,itemName);
    cout<<"Enter the item price:"<<endl;
    getline(cin,temp);
    itemPrice = stoi(temp);
    // cin>>itemPrice;
    cout<<"Enter the item quantity:"<<endl;
    getline(cin,temp);
    itemQuantity = stoi(temp);
    //cin>>itemQuantity;

    two.SetName(itemName);
    two.SetPrice(itemPrice);
    two.SetQuantity(itemQuantity);

    cout<<"\nTOTAL COST"<<endl;
    cout<<one.GetName()<<" "<<one.GetQuantity()<<" @ $"<<one.GetPrice()<<" = $"<<(one.GetQuantity()*one.GetPrice())<<endl;
    cout<<two.GetName()<<" "<<two.GetQuantity()<<" @ $"<<two.GetPrice()<<" = $"<<(two.GetQuantity()*two.GetPrice())<<endl;

    cout<<"\nTotal: $"<<((one.GetQuantity()*one.GetPrice())+(two.GetQuantity()*two.GetPrice()))<<endl;
    return 0;
}