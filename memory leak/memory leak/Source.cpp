#include <iostream>
using namespace std;

int main() {
	int* myp;
	/*myp = new int[10000];
	cout << "memory is being alloctoted\n";*/

	try
	{
		myp = new int[10000];
		cout << "memory is being alloctoted\n";
	}
	catch (...)
	{
		cout << "mmory alloction is failed\n";
	}
	delete[] myp;
}
//read more abot it in notes and also it is an big topic but it advance and 
//one thing valgrind is tool to identifying memory leak in programe


//"<< " this is over wrtten function in cpp to aviod comfusion read topic betwise opertor left ad right shft topic