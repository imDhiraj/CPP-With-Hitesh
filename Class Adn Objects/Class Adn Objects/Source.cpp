#include<iostream>
using namespace std;

class User {
	int secrt = 100;    // this private member for default

public:
	string name = "defult";
	void printname() {
		cout << "How Was the Class, " << name << endl;
	}
	void setsecrt(const int& newsecrt) {
		secrt = newsecrt;
	}
	int getsecrt() {
		return secrt;
	}
};
int main() {

	User Sam;
	Sam.name = "Sam";
	Sam.printname();
	Sam.setsecrt(333);
	cout << Sam.getsecrt() << endl;

	//Sam.secrt = 200;   //Class members are defalutly private

	User Hitesh ;
	Hitesh.name = "Hitesh";
	Hitesh.printname();
	Hitesh.setsecrt(0011);  // it is printing octal notation bcz it intrpeing it as octal value 
	cout << Hitesh.getsecrt()<<endl;

	User Dhiraj;
	Dhiraj.printname();
	Dhiraj.name = "Dhiraj";
	Dhiraj.printname();


	cout << 0011 << endl; // zero at the starting postion make it to call/interpt as octal and in octal 011 is 9 for futher watch th folling https://youtu.be/MGu-P4OOnh0?si=bYXAp4jlnRl_MgmW
}