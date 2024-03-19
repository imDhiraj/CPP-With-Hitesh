#include<iostream>
using namespace std;

class User {
	int _secrt = 100;    // this private member for default
	//for private varible to as std prictice we sholud use _ in front of them
public:
	string name = "defult";
	void printname();
	void setsecrt(const int& newsecrt) {
		_secrt = newsecrt;
	}
	int getsecrt()const;


};

void User::printname() {
	{
		cout << "How Was the Class, " << name << endl;
	}
}


int User ::getsecrt()const {
	return _secrt; 
}

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


	const User Spk;                     //only non const objecct can acess the const and non const value but const value can only acess the const value only
	cout << Spk.getsecrt() << endl;


	User robin = Sam;                  // copy constucter is work like this to know more check file name constructor.cpp
	cout << robin.getsecrt() << endl;

	cout << 0011 << endl; // zero at the starting postion make it to call/interpt as octal and in octal 011 is 9 for futher watch th folling https://youtu.be/MGu-P4OOnh0?si=bYXAp4jlnRl_MgmW
}