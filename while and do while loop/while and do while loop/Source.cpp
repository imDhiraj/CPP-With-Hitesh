#include <iostream>
using namespace std;

int main() {
	int arr[] = { 4,5,6,7,8,9,0 };

	int i = 0;

	// this type of loop use like do.. while, while can be used for contiunes looping
	 /* do{
		cout << "current number is:" << arr[i] << endl;
		i++;

	  } while (i < 0);
	  cout << "the all arr is printed" << endl;

	  while (i < 4) {
		  cout << "current number is:" << arr[i] << endl;
		  i++;
		  
	  }
	  cout << "the all arr is printed" << endl;*/
	while (i < 7) {
		if (i == 5) {
			i++;
			cout << "the all arr is printed" << endl;
			continue;
		}
		cout << "current number is:" << arr[i] << endl;
		i = i + 1;
	}
	 

	 return 0;
}