/*Language-Specific Considerations:

High-Level vs. Low-Level:
High-level languages (Python, Java) often handle memory allocation automatically
through garbage collection. Garbage collection identifies unused memory and reclaims it for future use.

Manual Management:
In low-level languages (C, C++), programmers have more direct control over memory 
allocation using functions like malloc (allocate) and free (deallocate). This flexibility comes with the
risk of memory leaks if not managed properly.
*/

/*
* memory aloccation basically imp topic for mangging 
* both stack and heap are used in ram but same diffearce make it diffenet like 
stack= it is for stactic function and varble
heap=it is for dynimic kind storge like array pointer 
are stored in it 
but if we use heap we need also pass delete argument so that no memory like happens

*/


#include<iostream>

struct User
{
	const int id;
	int age;

	User(): id(002),age(20){}
};

int main() {
	using namespace std;
	//stack 
	int score = 100;

	// heap
	int* heap_name = new int;
	*heap_name = 200;

	User* mike = new User();
	//mike->id = 001;
	mike->age = 20;

	delete heap_name;
	delete mike;


}