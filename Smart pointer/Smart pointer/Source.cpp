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
	
	//1.Unique Smart pointer:   Cant be copied
	{
		unique_ptr<User>ram(new User());// this an basic way of declering Smart pointer 
		unique_ptr<User>sam = make_unique<User>();// this programers way of writing an unique pointers 
		sam->testfunc();

		//unique_ptr<User> tim = ram; cant be copied
	}

	//2.Shared Smart pointer : can be copied and used for using single momery loction 
	{
		shared_ptr<User> tim = make_shared<User>();
		shared_ptr<User> timn = tim; //coping orignal pointer is allowed in shared pointers 
		//3. Weak poniter: it use for proper deletion of oject in shared memory
		weak_ptr<User> wtim = tim;// it is an pointer that doesnt have frist intance like other smart pointers

		tim->testfunc();
		timn->testfunc();

		//shared_ptr<User>sam(new User()); 
		// This is an not an good way to create an shared pointer because it creates exess momery

	}
}