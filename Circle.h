//
// Created by T10115885 on 11/13/2018.
//

#ifndef FALL2018CPP_CIRCLE_H
#define FALL2018CPP_CIRCLE_H


#include <ostream>
#include "Shape.h"

class Circle: public Shape {
private:
    double radius;
public:
    Circle();

    Circle(double radius);

    double getRadius() const;

    void setRadius(double radius);

    double getArea() override;

    double getPerimeter() override;

    friend std::ostream &operator<<(std::ostream &os, const Circle &circle);
};


#endif //FALL2018CPP_CIRCLE_H
