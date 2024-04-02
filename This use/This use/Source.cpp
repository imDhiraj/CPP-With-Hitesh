#include<iostream>
using namespace std;

class Rectangle {
	double _length ;
	double _breadth ;

public:
	Rectangle(double l = 3.0, double b = 3.0) {
		double _length = l;
		double _breadth = b;
	}
	int area() {
		return  2 * _length * _breadth;
	}
	int compare();
};
int main() {
	Rectangle a();
	cout << a;
}//this is last commit for use less ones
