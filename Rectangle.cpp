#include "Rectangle.h"

using namespace std;


    Rectangle::Rectangle(std::string shapeName, double width, double height)
        : Shape(shapeName), RecWid{width}, RecHei{height} {}
    
    Rectangle::~Rectangle(){};
    double Rectangle::getArea()
    {
        return RecWid * RecHei;
    }

    void Rectangle::print()
    {
        Shape::print();
        cout << "Width: " << this->RecWid << endl;
        cout << "Height: " << this->RecHei << endl;
    }

