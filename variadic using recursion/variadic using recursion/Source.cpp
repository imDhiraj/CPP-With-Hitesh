/*Variadic
this is function that can be called to get multiple input at the same time (refer try catah block code)

this is basical an function for cpp which can allow templates multiple arrguments at ones which not allowd in proiously
refer the follwing https://www.geeksforgeeks.org/variadic-function-templates-c/
it works like array but in templtes which brings mor value and helps the code to get more optimize to work with.

*/




#include<iostream>
using namespace std;

int sums = 0;

template<typename T>
void func(T t){
	cout << "Type one " << t << endl;
}

template<typename T,typename... Args>
void func(T t, Args... args) {
	cout <<"Type two " << t << endl;
	func(args...);
}


int main() {
	string MyName = "Dhiraj";
	func(MyName);
	func(1, 2, 3.14, MyName);
	
}