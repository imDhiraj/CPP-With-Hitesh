// Read This for better understanding it about Three rule of constructer https://stackoverflow.com/questions/4172722/what-is-the-rule-of-three

#include<iostream>
#include<string>
using namespace std;

class Phone {
private:
	string _name = "";
	string _os = "";
	int _price = 0;

public:
	Phone();
	string getos() {
		return _os;
	}
	//	~Phone() {puts("Distructure");}

};/////////////////////////////////////////C++ return type may not be specified on a constructor///////////////This Semi colon is most inportant other wise class whlie show follwing error 
Phone::Phone() : _name(), _os("oxy"), _price() {
	puts("Defult Consturture");
}

int main() {
	Phone Samsung;
	cout << Samsung.getos() << endl;
}