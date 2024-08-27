#include<iostream>
using namespace std;

//multi inheritance 
// this simple means the inheritance of an multiple classes can be achvied in cpp

class Money { //this can be the 2nd class we can use of inheritance fro ex. see superman
public:
	void getMoney() {
		puts("i got the money 5K $ from franchaer");
	}
};

class Man {
	string _name;
	int _age;
	Man() {}

	//friend class
	friend class superman;//=this giveis acees to class super man to acess all members from man like private members
	//using frined class can be use full but it can cause sucrity issue some time besace of giveing enteire class function and not prticuler

protected: // this is an BASE CLASS so we will try to define as much is tration function that will we need put in this 
	Man(const string& name, const int& age) :_name(name), _age(age) {

	}
	void Run() {
		puts("i Can Run");

	}
	int getAge() {
		return _age;//ALTERNAT toothe friend class ==  we can use this kind of function that can give acess of perticule meaber without exposeing all 
	}
public:
	void sayMyname()const;
};
void Man::sayMyname()const {
	cout << "My Name is " << _name << " And my Age is " << _age << endl;

}
//superman
class superman :public Man,public Money{
	bool flight;
public:
	superman(string name) : Man(name, 26) {
	}
	void Run() {
		//puts("i Can Run at light speed");
		printf("i can use the webs to sving and my age is %d\n", _age);
	}

};

//spiderman
class spiderman :public Man {
	bool webbing;
public:
	spiderman(string name) : Man(name, 19) {
	}
	void Run() {
		//puts("i Can Run at normal speed");
		printf("ican use the webs to sving and my age is %d\n", getAge());
	}

};
int main() {
	superman clerk("kent");

	clerk.sayMyname();
	clerk.Run();
	clerk.getMoney();//see this Money class can used here also now this is called and multiple inheritance

	spiderman peter("pareker");
	peter.sayMyname();
	peter.Run();
}