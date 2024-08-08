#include<iostream>
using namespace std;

//int main() {
//	int my_arr[] = { 2,3,4,5,6 };
//
//	//this are two type of for loop 
//	/*
//	1.for loop (normaly)
//	2.range based loop (it is inplmented after c++14)
//	*/
//	
//	for (int i = 0; i < 5;i++) {
//		cout << my_arr[i] << endl;
//
//	}
//	cout << "take a bre have a kitkat" << endl; 
//
//	for (int i : my_arr) {
//		cout << i << endl;
//	}
//}

int main() {
	char my_name[] = { "dhiraj" };
	char my_string[] = { 'd','h','i','r','a','j',0 };
	printf("this is name %s \n", my_name);
	cout <<"this is string"<<" " << my_string << "\n";
	//string based array whille always end on 0 value event if it written in singulery OR entener at on line

	for (int i = 0; my_name[i] ; i++)
	{
		cout << "this is string" << " " << my_string[i] << "\n";

	}
	cout << "take breack part 1\n";
	// this for loop has reverse logic that tell to run the loop until the i reach's to zero

	for (int i = 0; my_name[i]!=0; i++)
	{
		cout << "this is string" << " " << my_string[i] << "\n";

	}
	cout << "take breack  part 2\n";
	for (char* ch = my_name; *ch != 0; ch++) {
		cout << "this is string" << " " << *ch << "\n";
	}//using my_name OR my_name[0] does not matter because it refers to 1st elemeant only the end goal is to start from 0 
	//and end at tramnating value in string which is "0"
	cout << "take breack  part 3\n";
	//for each loop
	for (char i : my_name) {
		cout << "char is :" << i << endl;
	}// this prints zreo as well because it take it in coasdreation also to not get in output we can use the if stament the breack the loop when it recahs to 0
	cout << "take breack  part 4\n";
	for (char i : my_name) {
		if (i == 0)break;
		cout << "char is :" << i << endl;
	}
}
