#include<iostream>
using namespace std;

class User {
	int secrt = 100;

public:
	string name = "defult";
	void printname() {
		cout << "How Was the Class, " << name << endl;
	}
};
int main() {

	User Sam;
	Sam.name = "Sam";
	Sam.printname();

	//Sam.secrt = 200;   //Class members are defalutly private

	User Hitesh ;
	Hitesh.name = "Hitesh";
	Hitesh.printname();

	User Dhiraj;
	Dhiraj.printname();
	Dhiraj.name = "Dhiraj";
	Dhiraj.printname();

}