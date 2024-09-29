#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	vector<int> inty = { 1,2,3,4,5,6,7,8,9,10 };

	for (int x : inty) {
		cout << x<<" ";
	}
	cout << endl;
	//Partition 
	// Partition is also one of the method from STL that allows us the create an partition between to differently element in vector 
	// this has many function like this stable_partition,partition_point like that which can be used as per requriment 
	// 1 . partition 
	//     it create paetition based on condtion we can use lambds function or unery function for it as will 

	partition(begin(inty), end(inty), [](auto v) {return v % 2 == 0; });//the begin and end can also be used by multiple method also these is the one
	for (int x : inty) {
		cout << x<<" ";
	}
	cout << endl;
	// 2. stable partition 
	// it whlie try to menten the partition in sorted order
	stable_partition(inty.begin(), inty.end(), [](auto s) {return s / 2 == 0; });//the is the other method 
	for (int x : inty) {
		cout << x << " ";
	}
	// 3. partition point 
	// this create an only partition point or only element that qulifues the condition
	
	}
}