//
// Created by T10115885 on 11/13/2018.
//

#include "Rectangle.h"

Rectangle::Rectangle() {
    height=length=0;
}

Rectangle::Rectangle(double length, double height) : length(length), height(height) {}

double Rectangle::getLength() const {
    return length;
}

void Rectangle::setLength(double length) {
    Rectangle::length = length;
}

double Rectangle::getHeight() const {
    return height;
}

void Rectangle::setHeight(double height) {
    Rectangle::height = height;
}

double Rectangle::getArea() {
    return length*height;
}

double Rectangle::getPerimeter() {
    return (2.0*length)+(2.0*height);
}

std::ostream &operator<<(std::ostream &os, const Rectangle &rectangle) {
    os << "I am a Rectangle = "<< " length: " << rectangle.length << " height: " << rectangle.height;
    return os;
}
