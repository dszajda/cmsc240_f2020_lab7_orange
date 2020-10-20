#include<string>
#include <iostream>
#include"Shape.h"
#include "Circle.h"

class Circle : public Shape 
{
	Circle::Circle(std::string shapeName, double radVal)
	 : Shape(shapeName), radius{radius} {}


	Circle::~Circle() {}

	void Circle::print()
	{
		Shape::print();
		cout << "Radius: " << this->radius << endl;
	}

	double getArea()
	{
		 const long double PI = 3.141592653589793238L;
		 double rad = this->radius;
		 double area = rad*rad*PI;

		 return area;

	}

};






	
