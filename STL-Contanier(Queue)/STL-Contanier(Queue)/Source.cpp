#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
//STL-queue
// it is an anther type of contanier in STL that can make list of elements ,it can of same like vector 
// Just queue is not store in contiouns from of storge like vector and it is most used in doblue linklist
//

int main() {
	/*queue<int>myQueue;
	myQueue.push(10);
	myQueue.push(11);
	myQueue.push(12);
	myQueue.push(13);
	myQueue.push(14);
	myQueue.push(15);*/

	//cout << myQueue.front() << endl;
	//cout << myQueue.back() << endl;

	////// this loop is used iteating thorugh the entire queue by poping the element because queues are cant use intterate like for loop

	//while (!myQueue.empty()) { 
	//
	//	cout << " " << myQueue.front() << endl;
	//	myQueue.pop();
	//}
	////cout << myQueue.front() << endl;


	priority_queue<int>mypq;

	mypq.push(5);
	mypq.push(30);
	mypq.push(50);
	mypq.push(10);
	mypq.push(40);

	while (!mypq.empty()) {
		cout << " " << mypq.top(); 
		/*this tis the method used for prority queue ut give more proiority to number that are big bit the queue element stays the same for indiue level but in combination the bgger the number it well get proirties
		Output:
		50 40 30 10 5
			5*/
		mypq.pop();
	}
	cout << mypq.top() << endl;
	// this is use in theding consecpt where proirty based sorting of work is need and proirity queue perform it very well

}