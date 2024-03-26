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
	Phone(const string& name, const string& os, const int& price);
	Phone(const Phone&);
	//~Phone() {puts("Distructure");}

};/////////////////////////////////////////C++ return type may not be specified on a constructor///////////////This Semi colon is most inportant other wise class whlie show follwing error 
Phone::Phone() : _name(), _os("oxy"), _price() {
	puts("Defult Consturture");
}

Phone::Phone(const string& name, const string& os, const int& price) : _name(name), _os(os), _price(price) {
	puts("prametraes constutacture");
}

Phone::Phone(const Phone& value)  {
	puts("copy constrture");
	_name = value._name;
	_os = "Skined-"+value._os;
	_price = value._price;
}

int main() {
	Phone Samsung;
	cout << Samsung.getos() << endl;

	Phone Redmi("Redmi", "Android", 7999);
	cout << Redmi.getos() << endl;

	Phone Redmi7a = Redmi;
	cout << Redmi7a.getos() << endl;

}