#include<iostream>
using namespace std;

struct user {
	const int Uid;
	const char* name;
	const char* email;
	int cousre_count;
};
int main(){
	user Dhiraj = { 111, "Dhiraj", "Dk2ishere@gmail.com", 3};
	user Ashish = { 112, "Ashish", "ashishkarche6543@gmail.com", 4 };

	cout << Ashish.cousre_count<<endl;
	Ashish.cousre_count = 6;
	cout << Ashish.cousre_count << endl;

	//Ashish.Uid = 113;     //you cannot assign to a variable that is const	strut
	//cout << Ashish.Uid << endl;

	user* D = &Dhiraj;

	D->cousre_count= 4;  //" ->" this is used when we use pointer for refarcing in struct we can t use . for futer refraece in struture
	cout << D->cousre_count << endl;
	cout << Dhiraj.cousre_count << endl;

}