//
// Created by T10115885 on 10/9/2018.
//

#include <iostream>
#include <string>
using namespace std;

class Restaurant {                          // Info about a restaurant
   public:
      void SetName(string restaurantName);  // Sets the restuarant's name
      void SetRating(int userRating);       // Sets the rating (1-5, with 5 best)
      void Print();                         // Prints name and rating on one line

   private:
      string name;
      int rating;
};

// Sets the restuarant's name
void Restaurant::SetName(string restaurantName) {
   name = restaurantName;
}

// Sets the rating (1-5, with 5 best)
void Restaurant::SetRating(int userRating) {
    if ((userRating >=1)&&(userRating<=5)){
        rating = userRating;
    } else {
        rating = 3;
    }

}

// Prints name and rating on one line
void Restaurant::Print() {
   cout << name << " -- " << rating << endl;
}

int main() {
   Restaurant favLunchPlace;
   Restaurant favDinnerPlace;


   favLunchPlace.SetName("Central Deli");
   favLunchPlace.SetRating(4);

    //SetName("McDonalds");


   favDinnerPlace.SetName("Friends Cafe");
   favDinnerPlace.SetRating(10);

   cout << "My favorite restaurants: " << endl;
   favLunchPlace.Print();
   favDinnerPlace.Print();

   return 0;
}