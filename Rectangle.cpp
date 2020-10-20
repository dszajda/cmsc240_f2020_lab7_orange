#include <iostream>
#include <string>
#include "Shape.h"
#include "Rectangle.h"

using namespace std;


    Rectangle::Rectangle(std::string name, double width, double height){
        if (width < 0 | height < 0){
            cout << "Rectangle width or height negative, please enter positive doubles." << endl;
            return 0;
        }
        Shape(name);
        RecWid{width};
        RecHei{height};
    };

    ~Rectangle(){};

    double getArea(){
        return RecWid * RecHei;
    };

    void print(){
        Shape::print();
        cout << "Width: " << this->RecWid << endl;
        cout << "Height: " << this->RecHei << endl;
    };

