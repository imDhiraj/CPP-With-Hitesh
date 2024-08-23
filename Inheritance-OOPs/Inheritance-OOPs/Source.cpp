#include<iostream>
using namespace std;

class Man {
	string _name;
	int _age;
	Man() {}
protected: // this is an BASE CLASS so we will try to define as much is tration function that will we need put in this 
	Man(const string& name, const int& age) :_name(name), _age(age) {

	}
	void Run() {
		puts("i Can Run");

	}
public:
	void sayMyname()const;
};
void Man::sayMyname()const {
	cout << "My Name is " << _name << " And my Age is " << _age << endl;

}
//superman
class superman :public Man {
	bool flight;
public:
	superman(string name) : Man(name, 26) {
	}
	void Run() {
		puts("i Can Run at light speed");
	}

};

//spiderman
class spiderman :public Man {
	bool webbing;
public:
	spiderman(string name) : Man(name, 19) {
	}
	void Run() {
		puts("i Can Run at normal speed");
	}

};
int main() {
	superman clerk("kent");

	clerk.sayMyname();
	clerk.Run();

	spiderman peter("pareker");
	peter.sayMyname();
	peter.Run();
}