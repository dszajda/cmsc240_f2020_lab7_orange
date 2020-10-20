#include <string>
#include <Shape.h>

class Shape
{
  Shape(std::string shapeName){
    name = shapeName;
  }

  ~Shape(){

  }

  double getArea(){

  }

  void print(){
    cout << "Shape Name: " << this->shapeName << endl;
  }
        // virtual void print();      // for later testing
        // virtual void print() = 0;  // for later testing
};

#endif
