// Polymorphism - Task 3

using namespace std;
#include <iostream>

class Shape
{
public:
	virtual double getArea() {
		cout << "call Shape getArea()" << endl;
		return -1;
	}
};

class Circle : public Shape
{
private: double radius;
public:
	Circle(double radius) { this->radius = radius; }
	double getArea() {
		cout << "call Circle getArea()" << endl;
		return 3.14 * this->radius * this->radius;
	}
};

class Square : public Shape
{
private: double length;
public:
	Square(double length) { this->length = length; }
	double getArea() {
		cout << "call Square getArea()" << endl;
		return this->length * this->length;
	}
};

int main() {
	Shape* shape;
	Shape* shape2;

	Circle* circle = new Circle(1);
	Square* sq = new Square(2);

	shape = circle;
	shape2 = sq;

	cout << shape->getArea() << endl;
	cout << shape2->getArea() << endl;
}