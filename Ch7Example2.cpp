//
// Created by T10115885 on 10/9/2018.
//

#include <iostream>
#include <string>
using namespace std;

class Restaurant {
public:
    Restaurant();
    Restaurant(string restaurantName);
    Restaurant(string restaurantName, int userRating);
    void SetName(string restaurantName);
    void SetRating(int userRating);
    void Print();

private:
    string name ;  // NoName indicates name was not set
    int rating ;         // -1 indicates rating was not set
};

Restaurant::Restaurant(string restaurantName, int userRating): name(restaurantName),rating(userRating) {

}

Restaurant::Restaurant(string restaurantName): name(restaurantName),rating(-1) {

}

Restaurant::Restaurant(): name("NoName"),rating(-1) {

}

void Restaurant::SetName(string restaurantName) {
    name = restaurantName;
}

void Restaurant::SetRating(int userRating) {
    this->rating = userRating;
}

void Restaurant::Print() {
    cout << name << " -- " << rating << endl;
}

int main() {
    Restaurant favLunchPlace;  // Initializes members with values in class definition
    Restaurant favDinnerPlace("McDonalds");
    Restaurant favBreakfastPlace("IHOP",2);


    favLunchPlace.Print();
    favDinnerPlace.Print();
    favBreakfastPlace.Print();

    //favLunchPlace.SetName("Central Deli");
    //favLunchPlace.SetRating(4);

    //favLunchPlace.Print();
    favBreakfastPlace.SetName("IHOB");
    favBreakfastPlace.SetRating(1); // SetRating(1,favBreakPlace)
    favBreakfastPlace.Print();

    return 0;
}