#include<iostream>
using namespace std;

int main() {
	unsigned int a = 3;
	unsigned int b = 7;

	int c = a&b	;// AND
	/*  int c = a | b;   //OR
	    int c = a << 1; //left shift
		int c = a >> 1; //right shift
		int c = ~ a;    //complement(not)
			*/
	cout << c << endl;
}
//bitwise opration run like follwing 
// 1. this for AND , OR opration 
//if we have 2 values 2 and 3 
//the it will conver that in binanry and add the 0s on perfix postion if needed 
//and then perform given opertion on each indivial bool value of both for left to right

//2.this for NOT
//in this bitwise opratoer while flep the bits for orginal and to make it equal to orginal value add nagtive to value 