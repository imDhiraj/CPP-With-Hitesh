// Read This for better understanding it about Three rule of constructer https://stackoverflow.com/questions/4172722/what-is-the-rule-of-three

#include<iostream>
#include<string>
using namespace std;

class Phone {
private:
	string _name = "";
	string _os = "";
	int _price = 0;
	Phone();
public:
	
	string getos() {
		return _os;
	}
	Phone(const string& name, const string& os, const int& price);
	Phone(const Phone&);
	~Phone();
	int getprice();

};/////////////////////////////////////////C++ return type may not be specified on a constructor///////////////This Semi colon is most inportant other wise class whlie show follwing error 
Phone::Phone() : _name(), _os("oxy"), _price() {
	puts("Defult Consturture");
}

Phone::Phone(const string& name, const string& os, const int& price) : _name(name), _os(os), _price(price) {
	puts("prametraes constutacture");
}

int Phone::getprice() {
	{
		printf("value of this redmi is %p\n", this);
		return _price;
	}
};

Phone::Phone(const Phone& value)  {
	puts("copy constrture");
	_name = "new"+value._name;
	_os = "Skined-"+value._os;
	_price = value._price;
}

Phone::~Phone() {
	printf("the destrcture is called for %s \n", _name.c_str());
}

int main() {
	//Phone Samsung; //sometime this type of construture acn make little diffecult understand to new user to remove this knind amigtity 
	////we can do is making this function/ consrtuture private so that it can be get acces while deculering the object this remove the amigutity from code,
	//cout << Samsung.getos() << endl;

	Phone Redmi("Redmi", "Android", 7999);
	cout << Redmi.getos() << endl;

	printf("value of redmi is %p\n", &Redmi);

	cout << Redmi.getprice() << endl;

	Phone Redmi7a = Redmi;
	cout << Redmi7a.getos() << endl;

}