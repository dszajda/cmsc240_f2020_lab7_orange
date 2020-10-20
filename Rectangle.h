#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include <string>
#include "Shape.h"

using namespace std;

class Rectangle : public Shape
{

    private:
        string RecName;
        double RecWid;
        double RecHei;

    public:
        Rectangle(std::string name, double width, double height);
        ~Rectangle();
        double getArea();
        void print();
        // virtual void print();      // for later testing
        // virtual void print() = 0;  // for later testing
};

#endif
