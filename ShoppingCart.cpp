//
// Created by T10115885 on 10/18/2018.
//

#include <iostream>
#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() {
    customerName = "none";
    currentDate = "January 1, 2016";
}

ShoppingCart::ShoppingCart(const string &customerName, const string &currentDate) : customerName(customerName),
                                                                                    currentDate(currentDate) {}

const string &ShoppingCart::GetCustomerName() const {
    return customerName;
}

const string &ShoppingCart::GetDate() const {
    return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase item) {

}

void ShoppingCart::RemoveItem(string name) {

}

void ShoppingCart::ModifyItem(ItemToPurchase item) {
    unsigned i;
    ItemToPurchase currItem;
    bool found;

    found = false;

    for(i = 0; i < cartItems.size(); ++i) {
        if(cartItems.at(i).GetName() == item.GetName()) {
            found = true;
            if(item.GetDescription() != "none") {
                cartItems.at(i).SetDescription(item.GetDescription());
            }

            if(item.GetPrice() != 0) {
                cartItems.at(i).SetPrice(item.GetPrice());
            }

            if(item.GetQuantity() != 0) {
                cartItems.at(i).SetQuantity(item.GetQuantity());
            }
        }
    }

    if(!found) {
        cout << "Item not found in cart. Nothing modified." << endl;
    }

}

int ShoppingCart::GetNumItemsInCart() {
    return 0;
}

int ShoppingCart::GetCostOfCart() {
    return 0;
}

void ShoppingCart::PrintTotal() {

}

void ShoppingCart::PrintDescriptions() {

}
