//
// Created by T10115885 on 10/16/2018.
//

#ifndef FALL2018CPP_ITEMTOPURCHASE_H
#define FALL2018CPP_ITEMTOPURCHASE_H

#include <string>
using namespace std;


class ItemToPurchase {
private:
    string itemName;
    string itemDescription;
    int itemPrice;
    int itemQuantity;

public:
    ItemToPurchase();

    ItemToPurchase(const string &itemName, const string &itemDescription, int itemPrice, int itemQuantity);

    const string &GetDescription() const;

    void SetDescription(const string &itemDescription);

    const string &GetName() const;

    void SetName(const string &itemName);

    int GetPrice() const;

    void SetPrice(int itemPrice);

    int GetQuantity() const;

    void SetQuantity(int itemQuantity);

    void PrintItemCost();

    void PrintItemDescription();
};


#endif //FALL2018CPP_ITEMTOPURCHASE_H
