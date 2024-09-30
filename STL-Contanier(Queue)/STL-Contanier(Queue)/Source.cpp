#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
//STL-queue
// it is an anther type of contanier in STL that can make list of elements ,it can of same like vector 
// Just queue is not store in contiouns from of storge like vector and it is most used in doblue linklist
//

int main() {
	queue<int>myQueue;
	myQueue.push(10);
	myQueue.push(11);
	myQueue.push(12);
	myQueue.push(13);
	myQueue.push(14);
	myQueue.push(15);

	cout<<myQueue.front()<<endl;
	cout << myQueue.back() << endl;

	while (!myQueue.empty()) {
		cout << " " << myQueue.front() << endl;// this loop is used iteating thorugh the entire queue by poping the element because queues are cant use intterate like for loop
		myQueue.pop();
	}
	cout << myQueue.front() << endl;

}