#include<iostream>
using namespace std;
//this is an extedned expaination of the this keyword by refering to the  telsko yt channel video 
//https://www.youtube.com/watch?v=k_SJOnVa_G0&t=160s 
class Female {

	int age;
	int name;
public:
	
	int getAge() {
		return age;
	};
	//void Return Type: When a function is declared with the void return type, it means that the function does not return any value.
	                  // It performs its task (like setting a value, printing something, or modifying an object) and then simply exits without giving back any data to the caller.

	void setAge(int age) {
		this->age = age; // Assign the newAge value to the age member variable
	}//here this is a pointer to the object that is calling the function setAge	for perticuler object called in that function 
	//this mke thing litte easy and dont need to create new variable to store the value of object for every new object that why THIS keyword is used
};


int main() {
	
	Female mina;
	mina.setAge(20);
	cout << mina.getAge() << endl;
	Female nima;
	nima.setAge(40);
	cout << nima.getAge() << endl;

}