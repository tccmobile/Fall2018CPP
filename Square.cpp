//
// Created by T10115885 on 11/13/2018.
//

#include "Square.h"

Square::Square() {}

Square::Square(double side) : Rectangle(side, side) {}

double Square::getSide() {
    return getLength();
}

void Square::setSide(double side){
    setLength(side);
}

double Square::getArea() {
    return Rectangle::getArea();
}

double Square::getPerimeter() {
    return Rectangle::getPerimeter();
}

std::ostream &operator<<(std::ostream &os, const Square &square) {
    os <<"I am a Square = "<<" side: "<<square.getLength();;
    return os;
}
