#include<iostream>
using namespace std;

class Rectangle {
	double _length ;
	double _breadth ;

public:
	Rectangle(double l = 3.0, double b = 3.0) {
		 _length = l;
		 _breadth = b;
	}
	double area() {
		return  _length * _breadth;
	}
	int compare(Rectangle rectangle) {
		return this->area() > rectangle.area();
	};//here THIS used for converting and local variable and instance variable
};
int main() {
	Rectangle h1(3.0 ,3.0);
	Rectangle h2(4.0, 4.0);

	cout << "Area of Rectangle 1: " << h1.area() << endl;
	if(h1.compare(h2))
		cout << "Rectangle 1 is larger than Rectangle 2" << endl;
	else
		cout << "Rectangle 2 is larger than Rectangle 1" << endl;
}//this is expination of THIS keyword is bit confusing so i try other/ next program of this for bitter understanding
