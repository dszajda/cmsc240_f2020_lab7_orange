#include<string>
#include <iostream>
#include"Shape.h"
#include "Triangle.h"

class Triangle : public Shape
{
	Triangle::Triangle(std::string shapeName, double base, double height)
	 : Shape(shapeName), base{base}, height{height} {}


	Triangle::~Triangle() {}

	void Triangle::print(){
		Shape::print();
		cout << "Width: " << this->width << endl;
		cout << "Height: " << this->height << endl;
	}

	double getArea()
	{
		 double area = 0.5 * this->base * this->height;

		 return area;

	}
};
