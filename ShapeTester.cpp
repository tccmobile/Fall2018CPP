//
// Created by T10115885 on 11/13/2018.
//

#include <iostream>
#include <vector>
#include <string>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
using namespace std;

int main(){
    vector<Shape *> myShapes;

   // myShapes.push_back(new Shape());  Shape is abstract and cannot be created
    myShapes.push_back(new Circle(5));
    myShapes.push_back(new Rectangle(4,6));
    myShapes.push_back(new Square(8));

    for (int i = 0; i <myShapes.size() ; ++i) {
        cout<<myShapes.at(i)<<endl;
        cout<<"Area: "<<myShapes.at(i)->getArea()<<endl;
        cout<<"Perimeter: "<<myShapes.at(i)->getPerimeter()<<endl<<endl;
    }


    /*cout<<"output stuff...."<<endl;

    Circle myCircle(7);
    cout<<myCircle<<endl;

    Square mySquare(5);
    cout<<mySquare<<endl;
*/

    return 0;
}