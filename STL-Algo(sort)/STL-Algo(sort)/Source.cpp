#include <iostream>
#include <algorithm> // Add this line to include the algorithm library which is very important for using STL feature of algorithm
using namespace std;

int main() {

	int Numbers[6] = { 2,5,4,7,6,8 };

	cout << "UnOrdered Number" << endl;
	for (int n: Numbers) {
		cout << n;
	}

	sort(Numbers,Numbers+6);
	//Sort
	// sort is the one of the featur in STL-algorithm which is use for sort the array in fast and simpple maner
	// same time it can be inffancent beacuse it use sort method in the most of the case intro sort which not very optmized method
	// and then it will use quick sort it will try to be opitmized as possible so that it can decrese the use of space

	//sort_heap(Numbers, Numbers + 6);
	//OUTPUT
	/*UnOrdered Number
		254768
		Ordered Number
		467582*/
	
	cout <<endl <<"Ordered Number" << endl;
	for (int n : Numbers) {
		cout << n;
	}

}