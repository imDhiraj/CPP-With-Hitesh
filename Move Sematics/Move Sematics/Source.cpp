#include<iostream>
using namespace std;
//Move semetics is an avance topic recqire lots of pericaes with c++ but for usbilty explaination see this https://youtu.be/ehMg6zvXuMY?si=IZc4pco6lcKUhmzI

//this an classic and simple way to solve problem swap integer 

//But the it has the problem that which 
void swap(int &a,int &b) {
	int temp = a;
	a = b;
	b=temp;
}
//but by using move semitics  the entier consoespt in terms of optimizieing the program 
//it just the same in term of looking but it creat much of differce in memory optimzintion
// like in follwing example the temp value directly getting the value of a and a is empty for second line and the a's value with b value is replaesed
// this creates better meamery opetimziztion for program 
void swapwithmovesematics(int &a,int &b) {
	int temp = move(a);
	a = move(b);
	b = move(temp);
}
//there is conspet called Lvalue and Rvalue 
// which reprersents the left value and right value from = 
//lvalue - which is object part of the code theat can be used futher in the code and directly stored in the memory 
//rvalue - which is the value part of the object mostly called once

//lvalue ref - it can be refer as normal like single & sign
// rvalue ref - it can be refered differently with  follwing sign && which is from move sementics 
// 
// for follwing example entrier string function can be moved into other string object without using more memory 

string printMe() {
	
	return "something";
}

int main() {
	int a = 20;
	int b = 30;
	swap(a, b);
	swapwithmovesematics(a, b);
	cout << a << endl << b << endl;

	string s = printMe();
	string&& ss = printMe();
}