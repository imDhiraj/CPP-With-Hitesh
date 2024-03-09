#include<iostream>
#include "Adder.h"
using namespace std;

//call by value
void lifeUp(int life) {
	++life;
}
//call by ref1
void lifeok(int *life1) {
	++(*life1);
}
//call by ref2
void lifeDown(int &life2) {
	--life2;
}
//// creation of different funtion but same name it also expained by creatig the new header file 
//int addme(int a, int b) {
//	return a + b;
//}
//
//float addme(float a, float b) {
//	return a + b;
//}


//creation of template 
/*when we use it we dont need to define spafic arugment for data type 
it use this as defult templte ate if this type of us case occure in code it will adpet it by use of it  */
template <typename T>

	T subme(T a, T b) {
		return a - b;
	}


int main() {
	int life = 3;
	lifeUp(life);
	cout << life << endl;

	int life1 = 3;
	lifeok(&life1);
	cout << life1 << endl;

	int life2 = 3;
	lifeDown(life2);
	cout << life2 << endl;
	/*compliers funtion to idetify which funtion has been used here so that can be proper used in folleng cases
	that calver choose of complier even if name of th function is 
	 same content that in it matters so that can identify it */
	
	cout << "complier magic" << endl;
	int v1=3;
	int v2=4;
	float v3=11.5;
	float v4=5.3;
	double v5 = 2.001;
	double v6 = 1.003;

	cout << addme(v1, v2) << endl;
	cout << addme(v3, v4) << endl;

	cout << subme(v5, v6) << endl;

}