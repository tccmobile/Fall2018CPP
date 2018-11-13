//
// Created by T10115885 on 11/13/2018.
//

#ifndef FALL2018CPP_SQUARE_H
#define FALL2018CPP_SQUARE_H


#include <ostream>
#include "Rectangle.h"

class Square: public Rectangle {
public:
    Square();

    Square(double side);

    void setSide(double side);

    double getSide();

    double getArea() override;

    double getPerimeter() override;

    friend std::ostream &operator<<(std::ostream &os, const Square &square);


};


#endif //FALL2018CPP_SQUARE_H
