/*Recursion 
we can say this use stack memory for stroing an data to be run which is called last whlie be run first 
it can recall value based on that function untill the end of the function value 
it is nessary to call end to recursius function so it can stop otherwise it while overfull the stack to run*/



#include<iostream>
using namespace std;

int num = 1;



void show() {
	cout << "hi" <<""<<num << endl;
	num++;
	if (num < 30) {
		show();
	}
	
}
//hethiesh sir video is bit to stright forward so some what dicult understand satrt so refra the follwing so can give little clear understanding https://www.youtube.com/watch?v=8NZZSgtTelc.
int fact(int n) {
	if (n > 1) {
		return n * fact(n - 1);

	}
	else {
		return 1;
	}
}
int main() {
	//show();
	int n;	
	cin >> n;
	cout<<fact(n)<<endl;
	return 0;
}