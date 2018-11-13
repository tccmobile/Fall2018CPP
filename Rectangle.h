//
// Created by T10115885 on 11/13/2018.
//

#ifndef FALL2018CPP_RECTANGLE_H
#define FALL2018CPP_RECTANGLE_H


#include <ostream>
#include "Shape.h"

class Rectangle: public Shape {
private:
    double length;
    double height;
public:
    Rectangle();

    Rectangle(double length, double height);

    double getLength() const;

    void setLength(double length);

    double getHeight() const;

    void setHeight(double height);

    double getArea() override;

    double getPerimeter() override;

    friend std::ostream &operator<<(std::ostream &os, const Rectangle &rectangle);
};


#endif //FALL2018CPP_RECTANGLE_H
