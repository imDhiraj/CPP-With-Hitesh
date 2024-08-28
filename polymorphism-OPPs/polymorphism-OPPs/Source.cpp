#include<iostream>
using namespace std;
//this an example of run time polymorphism which also know as method overading
//In this class method is with same name but different use and which is define at run time that why it known as runtime polymorphism

//while using the term of polymorphism pointer can differ the intire conspest of output by printing main class method so overcome it virtual function is being used to keep the base method to it self when other refrances are called with pointer


class One {
public:
	virtual void intro() {
		cout << "I'm the One\n";    //by using keyword virtual methods of it will stay for it self will using pointers 
	}
};
class Two : public One {
public:
	void intro() {
		cout << "I'm the Two\n";
	}
};

class Three : public One {
public:
	void intro() {
		cout << "I'm the Three\n";
	}
};

int main() {
	One a;
	Two b;
	Three c;

	//a.intro();
	//b.intro();
	//c.intro();

	One* d;
	d= &b;
	d->intro();

	d = &c;
	d->intro();
}