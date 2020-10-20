#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include<string>
#include "Shape.h"

class Circle : public Shape 
{

private:
	double radius;

public:
	Circle(std::string shapeName, double radVal);
	~Circle();
	void print();
	double getArea();
};

#endif