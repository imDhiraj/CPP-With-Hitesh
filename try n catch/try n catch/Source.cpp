#include<iostream>
using namespace std;

int main() {
	char test = 30;
	try {
		cout << "m\n";
		throw test;

	}
	catch (int x) {
		cout << "expection is there\n";
	}
	catch (float x) {
		cout << "expection is thereby \n";
	}
	catch (...) {
		cout << " nicely done\n";

	}
	cout << "happey to see you again \n";
}
// it used for catch and trowning  a expention which is accoerd due to some or the othe resons 
//so we define that resone if it is expected form users or put ... as undefined error to soned 
// we can will use this in code for futer use  like calucuaters erroer showing message.
//

//https://www.geeksforgeeks.org/handling-the-divide-by-zero-exception-in-c/  use this for better understanding