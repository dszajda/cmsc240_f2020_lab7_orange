#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include <string>
#include "Shape.h"

class Rectangle : public Shape
{

    private:
        double RecWid;
        double RecHei;

    public:
        Rectangle(std::string shapeName, double width, double height);
        ~Rectangle();
        double getArea();
        void print();
        // virtual void print();      // for later testing
        // virtual void print() = 0;  // for later testing
};

#endif
