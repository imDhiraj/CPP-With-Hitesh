/*null is which points to noting so when ever we use function overloading and that we call null it will always showa an error 
because of amiogis nature or we can say complier can not identify's the function to be called that why it shows ambiguti in code*/

#include<iostream>
using namespace std;
#define	NULL 20

void intgerval(int a) {
	printf("the value of intger is %d\n", a);

}
void intgerval(double a) {
	printf("the value of intger is %f\n", a);
}
void intgerval(int *a) {
	printf("the value of intger is %p\n", a);
}

int main() {
	intgerval(4);
	intgerval(7.808);
	intgerval(NULL); // this can be reduse be follwoingfunction named null ptr where NULL say noting 
	intgerval(nullptr);// IN case of nullptr it is self is pointer that call null cvalue so complier can understand it which function to call

}

/*Beacuse of amious nature of NULL value it is mostly been said to not use in function overloading 
This happens because of the cpp is return most of c but deesn't had a function overloading

*/