#include<iostream>
#include<memory> // this liberary incldes an liberie that include functionlity of unique pointers to the programe
using namespace std;

//Smart Pointer 
//creating an new pointer means it needs to deleted as soon as it work is done becucuse of other languages like java which has auto garabage colleaction 
//to using pointer for c++ can make differace for progrramers so c++ updated the pointer with the wraper around tham as smart pointer 
// because of this using pointer can be more easyier
// to use this we have to define the scope of it which means that unique pointer/ smart pointer while run in between that {} only this braect scope and at the end it will be deleted automatacally
// To know more read the follwing docs https://learn.microsoft.com/en-us/cpp/cpp/smart-pointers-modern-cpp?view=msvc-170

// it has types 
//1. unique pointers


class User {
public:
	User() {
		cout << "somthing is created\n";

	}
	~User() {
		cout << "somthing is destroyed\n";
	}
	void testfunc() {
		cout << "there is someing runing at the end\n";
	}
};
int main() {
	{
		unique_ptr<User>ram(new User());// this an basic way of declering Smart pointer 
		unique_ptr<User>sam = make_unique<User>();// this programers way of writing an unique pointers 
		sam->testfunc();
	}
	
}