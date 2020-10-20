#include "Circle.h"


	Circle::Circle(std::string shapeName, double radVal)
	 : Shape(shapeName), radius{radVal} {}


	Circle::~Circle() {}

	void Circle::print()
	{
		Shape::print();
		std::cout << "Radius: " << this->radius << std::endl;
	}

	double Circle::getArea()
	{
		 const long double PI = 3.141592653589793238L;
		 double rad = this->radius;
		 double area = rad*rad*PI;

		 return area;

	}








	
