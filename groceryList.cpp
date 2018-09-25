//
// Created by T10115885 on 9/25/2018.
//


#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> groceryList; // Vector storing shopping list
    string groceryItem;         // Individual grocery items
    string userCmd;             // User input

    // Prompt user to populate shopping list
    cout << "Enter grocery items or type done." << endl;
    cin >> groceryItem;
    while (groceryItem != "done") {
        groceryList.push_back(groceryItem);
        cin >> groceryItem;
    }

    // Display shopping list
    cout << endl << "Enter any key for next item." << endl;
    while (groceryList.size() > 0) {
        groceryItem = groceryList.back();
        groceryList.pop_back();
        cout << groceryItem << "   ";
        cin >> userCmd;
    }
    cout << endl << "Done shopping." << endl;

    return 0;
}