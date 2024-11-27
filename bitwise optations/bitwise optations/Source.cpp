#include<iostream>
using namespace std;
// This entrie calculation are  based on how many bit can data type care like int 32 bits , char 8 bits like this 

int main() {
	unsigned int a = 3;
	unsigned int b = 7;
	int c = ~a;
	//int c = a&b	;// AND
	/*  int c = a | b;   //OR
	    int c = a << 1; //left shift
		int c = a >> 1; //right shift
		int c = ~ a;    //complement(not)  flip the vaules and retuning value is the answer 
		int c = ^ a; // XOR           only 0^0 &&  1^1 = 0 and 0^1=1 [XOR TABLE]
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
// read about htis this has answer why this not (~) of c is giving -4 in answer https://chatgpt.com/share/67476c3f-2008-8009-92ab-146c7a4d1e0b