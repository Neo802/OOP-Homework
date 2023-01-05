// Polymorphism - Task 2

#include <iostream>
using namespace std;

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

void f(Shape* arg) {
	Circle* bp = dynamic_cast<Circle*>(arg);
	Square* cp = dynamic_cast<Square*>(arg);

	if (bp)
		cout << bp->getArea() << endl;
	else if (cp)
		cout << cp->getArea() << endl;
	else
		cout << arg->getArea() << endl;
};

int main() {
	Shape* shape;
	Shape* shape2;
	Shape* shape3 = new Shape;

	Circle* circle = new Circle(1);
	Square* sq = new Square(2);

	shape = circle;
	shape2 = sq;

	f(shape);
	f(shape2);
	f(shape3);
}