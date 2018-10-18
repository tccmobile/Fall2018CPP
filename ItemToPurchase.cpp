//
// Created by T10115885 on 10/16/2018.
//

#include <iostream>
#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase() {
    itemName = "none";
    itemDescription = "none";
    itemPrice = 0;
    itemQuantity = 0;

}

const string &ItemToPurchase::GetName() const {
    return itemName;
}

void ItemToPurchase::SetName(const string &itemName) {
    ItemToPurchase::itemName = itemName;
}

int ItemToPurchase::GetPrice() const {
    return itemPrice;
}

void ItemToPurchase::SetPrice(int itemPrice) {
    ItemToPurchase::itemPrice = itemPrice;
}

int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
}

void ItemToPurchase::SetQuantity(int itemQuantity) {
    ItemToPurchase::itemQuantity = itemQuantity;
}

ItemToPurchase::ItemToPurchase(const string &itemName, const string &itemDescription, int itemPrice, int itemQuantity)
        : itemName(itemName), itemDescription(itemDescription), itemPrice(itemPrice), itemQuantity(itemQuantity) {}

const string &ItemToPurchase::GetDescription() const {
    return itemDescription;
}

void ItemToPurchase::SetDescription(const string &itemDescription) {
    ItemToPurchase::itemDescription = itemDescription;
}

void ItemToPurchase::PrintItemCost() {
    cout<<itemName<<" "<<itemQuantity<<" @ $"<<itemPrice<<" = $"<<(itemQuantity*itemPrice)<<endl;
}

void ItemToPurchase::PrintItemDescription() {
    cout<<itemName<<": "<<itemDescription<<endl;
}
