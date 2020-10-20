#ifndef __Triangle_H__
#define __Triangle_H__

#include<string>
#include "Shape.h"

class Triangle : public Shape
{

private:
	double base;
  double height;

public:
	Triangle(std::string shapeName, double base, double height);
	~Triangle();
	void print();
	double getArea();
};

#endif
