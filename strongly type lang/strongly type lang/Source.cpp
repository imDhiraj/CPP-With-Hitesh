/*Cpp is storngly typed lang but some new keyword which questions it but 
that we have define the orignal varible before using it for its propore use 
otherwise it will get conflicts
Read Notes for better understanding*/



#include<iostream>
using namespace std;

string api_call() {                                                
	return "This is first string in code";
}

char aonterapi_call() {
	return 'a';
}
int main() {
	string apirun = api_call();
	cout << "This 1st call :" << apirun << endl;

	auto apirun2 = aonterapi_call();
	if (typeid(apirun2) == typeid(char)) {
		cout << "This 2nd call :" << apirun2 << endl;
	}
	int ar = 8;
	puts(typeid(ar).name()); // we can can use this method for ideninfing the data type of given varible 
}