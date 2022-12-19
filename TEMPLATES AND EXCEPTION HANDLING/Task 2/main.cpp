// TEH - Task 2

#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Rectangle {

	T length, width;

public:

	Rectangle(T length, T width) {
		this->length = length;
		this->width = width;
	}
	T getArea() {
		return this->length * this->width;
	}
	
};

int main() {
	Rectangle<int>* rectangleint = new Rectangle<int>(3,5);
	int result = rectangleint->getArea();
	cout << result << endl;

	Rectangle<float>* rectanglefloat = new Rectangle<float>(5.3, 6.3);
	float result2 = rectanglefloat->getArea();
	cout << result2 << endl;
	return 0;
}