#include "Shape.h"


  Shape::Shape(std::string shapeName)
  {
    name = shapeName;
  }

  Shape::~Shape(){}
  double Shape::getArea()
  {
    return 0.0;
  }
  void Shape::print(){
    std::cout << "Shape Name: " << this->name << std::endl;
  }
        // virtual void print();      // for later testing
        // virtual void print() = 0;  // for later testing


