#include<iostream>
using namespace std;

int mulitpleme(int a, int b) {
	return (a * b);
}
void interasting() {
	puts("this is intersting");
}

int main() {
	void(*thinks)() = interasting;
	thinks();
	int (*mulit)(int, int) = mulitpleme; ;
	//mulit 
	int prod=mulit(4, 5);
	cout << prod << endl;
}
