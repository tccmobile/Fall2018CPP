//
// Created by T10115885 on 10/2/2018.
//

#include <iostream>
#include <string>
using namespace std;

double PrintPizzaArea(double pizzaDiameter);  //function declaration

int main() {
    double pizzaDiameter = 12.0;
    double newDiameter = 0.0;

    newDiameter = PrintPizzaArea(pizzaDiameter); // passes a copy of the value

    //PrintPizzaArea(pizzaDiameter); returned value discarded
    cout<<"Just checking the pizza diameter I ordered: "<<pizzaDiameter<<endl;
    cout<<"but the sale gave me a pizza of diameter: "<<newDiameter<<endl;
    return 0;
}

double PrintPizzaArea(double pizzaDiameter) {     //function definition

    double pizzaRadius;
    double pizzaArea;
    double piVal = 3.14159265;
    string name  = "Cheese";

    pizzaDiameter *=2;

    //pizzaDiameter = 12.0;
    pizzaRadius = pizzaDiameter / 2.0;
    pizzaArea = piVal * pizzaRadius * pizzaRadius;
    cout << pizzaDiameter << " inch pizza is ";
    cout << pizzaArea << " inches squared." << endl;

    return pizzaDiameter;
}
