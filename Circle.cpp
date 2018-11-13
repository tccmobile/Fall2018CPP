//
// Created by T10115885 on 11/13/2018.
//

#include "Circle.h"

Circle::Circle() {
    radius = 0;
}

Circle::Circle(double radius) : radius(radius) {}

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double radius) {
    Circle::radius = radius;
}

double Circle::getArea() {
    return 3.14159*radius*radius;
}

double Circle::getPerimeter() {
    return 2.0*3.14159*radius;
}

std::ostream &operator<<(std::ostream &os, const Circle &circle) {
    os << "I am a circle = " << " radius: " << circle.radius;
    return os;
}
