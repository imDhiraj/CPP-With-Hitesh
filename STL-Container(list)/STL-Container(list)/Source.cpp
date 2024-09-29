#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
//List

//it is an type of STL container whisch stores the multiple values in dynamic way 
// //it like vector but it does not promes the contious memory of compnents so it uses itarer to traversal around the list 
// an it is majorly used for doubly linklist
int main() {
	list<int>Mylist;					
	for (int i = 3; i <= 10; i++) {
		Mylist.push_back(i);//element gets push with this with this methoad
	}
	cout<<Mylist.front()<<endl;// front and last element can be seen with this method  
	cout << Mylist.back() << endl;

	Mylist.pop_back(); //this will delete the method 

	Mylist.reverse();//this will revarse the entrie list 
	// this method are used in multiple ways but if we have custom list or other data type than intger then some of the method wont work prorly 

	for (auto i :Mylist) {
		cout << i ;
	}
}