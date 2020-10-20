#include <iostream>
#include "Shape.h"

using namespace std;

int main(){
    Shape* shapePtr = &circle; 
    cout << "Print circle: ";
    shapePtr->print(); 

    shapePtr = &triangle; 
    cout << "Print triangle";
    shapePtr->print(); 

    shapePtr = &rectangle;
    cout << "Print rectangle";
    shapePtr->print();
}

