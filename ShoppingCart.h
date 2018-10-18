//
// Created by T10115885 on 10/18/2018.
//

#ifndef FALL2018CPP_SHOPPINGCART_H
#define FALL2018CPP_SHOPPINGCART_H

#include <string>
#include <vector>
#include "ItemToPurchase.h"

using namespace std;

class ShoppingCart {
private:
    string customerName;
    string currentDate;
    vector<ItemToPurchase> cartItems;

public:
    ShoppingCart();

    ShoppingCart(const string &customerName, const string &currentDate);

    const string &GetCustomerName() const;

    const string &GetDate() const;

    void AddItem(ItemToPurchase item);

    void RemoveItem(string name);

    void ModifyItem(ItemToPurchase item);

    int GetNumItemsInCart();

    int GetCostOfCart();

    void PrintTotal();

    void PrintDescriptions();

};


#endif //FALL2018CPP_SHOPPINGCART_H
