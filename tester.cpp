#include <string>
#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
using namespace std;


int main(){

	cout << "---Testing Triangle---" << endl;

	cout << "   Triangle1:" << endl;
	Triangle triangle1 = Triangle("Triangle1", 1.6, 4.5);
	triangle1.print();
	cout << "Expected: Triangle1, base: 1.6, height: 4.5" << endl;
	cout << "Triangle1 Area: " << triangle1.getArea() << "   Expected: 3.6" << endl;

	cout << "------------------------------" << endl;

	cout << "   Triangle2: " << endl;
	Triangle triangle2("Triangle2", 2.5, 4.5);
	Triangle *triangle2ptr = &triangle2;
	triangle2ptr->print();
	cout << "Expected: Triangle2, base: 2.5, height: 4.5" << endl;
	cout << "Triangle2 Area: " << triangle2ptr->getArea() << "  Expected: 5.625" << endl;

	cout << "------------------------------" << endl;

	cout << "   Triangle3: " << endl;
	Triangle *tri3ptr = new Triangle("Triangle3", 4.1, 7.892);
	tri3ptr->print();
	cout << "Expected:  Triangle3, base: 4.1, height: 7.892" << endl;
	cout << "Triangle3 Area: " << tri3ptr->getArea() << " Expected: 16.179" << endl;
	delete tri3ptr;



	cout << "------------------------------" << endl;
	cout << "------------------------------" << endl;

	cout << "---Testing Circle---" << endl;

	cout << "   Circle1: " << endl;
	Circle circle1 = Circle("Circle1", 6.9);
	circle1.print();
	cout << "Expected: Circle1, 6.9" << endl;
	cout << "Circle1 Area: " << circle1.getArea() << "  Expected: 149.571" << endl;

	cout << "------------------------------" << endl;

	cout << "   Circle2: " << endl;
	Circle circle2("Circle2", 12.2);
	Circle *circle2ptr = &circle2;
	circle2ptr->print();
	cout << "Expected: Circle2, Radius: 12.2" << endl;
	cout << "Circle2 Area: " << circle2ptr->getArea() << "  Expected: 467.595" << endl;

	cout << "------------------------------" << endl;

	cout << "   Circle3: " << endl;
	Circle *circle3ptr = new Circle("Circle3", 3.14);
	circle3ptr->print();
	cout << "Expected:  Circle3, radius: 3.14" << endl;
	cout << "Circle3 Area: " << circle3ptr->getArea() << " Expected: 30.975" << endl;
	delete circle3ptr;







	return 0;
}