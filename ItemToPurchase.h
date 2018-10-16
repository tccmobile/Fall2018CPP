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
    int itemPrice;
    int itemQuantity;

public:
    ItemToPurchase();

    const string &GetName() const;

    void SetName(const string &itemName);

    int GetPrice() const;

    void SetPrice(int itemPrice);

    int GetQuantity() const;

    void SetQuantity(int itemQuantity);
};


#endif //FALL2018CPP_ITEMTOPURCHASE_H
