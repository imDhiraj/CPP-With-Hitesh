#include<iostream>
using namespace std;

class MyFloat {
	float ft;
public:
	MyFloat() {
		ft = 0.1;
	}
	void getValue() {
		cout << ft << endl;
	}
	 //Functors: it like opertor overloading but very spicfic one
	//Functors are the one of the part of STL libreaies it allows us to program the () Parentheses in such way that we can use it like 
	//function which can perform different activety and many more , the follwing example is perform an addtion our the given value

	void operator ()(float v) {       
		ft += v;
	}
};

int main() {
	MyFloat floaty;
	floaty.getValue();

	floaty(1);
	floaty.getValue();

	floaty(1.5);
	floaty.getValue();

}