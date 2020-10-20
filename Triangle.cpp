#include "Triangle.h"


Triangle::Triangle(std::string shapeName, double base, double height)
	 : Shape(shapeName), base{base}, height{height} {}


	Triangle::~Triangle() {}

	void Triangle::print(){
		Shape::print();
		std::cout << "base: " << this->base << std::endl;
		std::cout << "Height: " << this->height << std::endl;
	}

	double Triangle::getArea()
	{
		 double area = 0.5 * this->base * this->height;

		 return area;

	}
