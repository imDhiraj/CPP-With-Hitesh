#include <iostream>
using namespace std;

void say_first() {
	puts("30");
}
int say_two() {
	return 3;

}

string say_four() {
	return "ch is an count";
}
//because of we have put data type we can perform multile opration on it like add,etc
// but void returns value of string that we can perform any valuses over the function.
// And also we can call the void function directly by in name becsue of type but int function has the inger atech to it so that way we have to write it done 
int main() {
	say_first();
	//say_two();
	printf("%d\n", say_two());
	printf("%d\n", say_two() + 5);
	//say_four();
	printf("%s \n", say_four());
}
// this are some basics 