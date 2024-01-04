#include<iostream>
using namespace std;

int main() {
	int intger_array[4] = { 1,2,3,4 };
	cout << intger_array<<endl;
	cout << intger_array[0] << endl;

	int anthoer_array[4];
	anthoer_array[0] = { 9 };
	cout << anthoer_array[0] << endl;

	* anthoer_array = 209;//this lotcte the first postion always
	cout << anthoer_array[0] << endl;
	//to locate the postion of arrart value in more the one we can o this using pointer.
	int* ap = anthoer_array;
	ap++;
	*ap = 210;
	cout << anthoer_array[1] << endl;
	//ap++;
	//*ap = 211;
	//cout << anthoer_array[2] << endl;
	ap += 2;
	*ap = 214;
	cout << anthoer_array[3] << endl;


	int op;
	op = 300;

	int *num;
	num = &op;
	/*check the notes in book to understand the raltions in pointer and array position
	in follwing code*/
	int card;
	card = *num;
	cout << card;
}