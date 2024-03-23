// Read This for better understanding it about Three rule of constructer https://stackoverflow.com/questions/4172722/what-is-the-rule-of-three

#include<iostream>
#include<string>
using namespace std;

class Phone {
	string _Name = "";
	string _OS = "";
	int _price = 0;

public:
	Phone();//construtor
	string getos()const{return _OS;}

	Phone(const string& name, const string& OS, const int price) {
		puts("Parmeter Construtor\n");
	}
	~Phone() {
		cout << "this destector\n" << endl;
	}
};

Phone::Phone() {
	cout << "this is constructor\n " << endl;
};
Phone::Phone(const string& name, const string& OS, const int price) {
	puts("Pertmetres constertur\n");
}


int main() {
	Phone Samsung("Samsung","oxy", 20000);
	cout << Samsung.getos() << endl;
		
}