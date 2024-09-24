#include<iostream>
// when ever u need to use it for project read this docs for better understanding https://learn.microsoft.com/en-us/cpp/cpp/lambda-expressions-in-cpp?view=msvc-170

using namespace std;

int main() {
	[] {}();
	//[capture](parameters) -> return_type {
	//	// function body
	//	};
	/*Capture([]) :
		Defines what variables from the surrounding scope the lambda can access.*/
	
	[] { cout << "tell me it runs" << endl; }();//when you don't have return type we can write () in up frount and otherwise it placeint in betweeen

	//when ever we assign an value to an retuen verbale it need to stored some where so that we can use it for displaying values
	auto sum = [](auto a, auto b) {return a + b; };
	cout << "sum two no. a and b : " <<  sum(5, 5)<<endl;
	cout << "sum two no. a and b : " << sum(4.5565, 57) << endl;

	string a = "jhgfdvcx";
	string b = "uygfcvbnhgfd";

	cout<<sum(a, b)<<endl;
	 

}