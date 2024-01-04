#include<iostream>
#include<cstdint>
using namespace std;

int main() {
	
	//printf("size of data type  short int %ld  bits \n ", sizeof(short int)*8);
	//printf("size of data type int %ld  bits \n ", sizeof(int) * 8);
	//printf("size of data type long int %ld  bits \n ", sizeof(long int) * 8);
	//printf("size of data type long long int %ld  bits \n ", sizeof(long long int) * 8);

	//printf("size if data type charater %ld bits\n", sizeof(char)*8);

	//printf("size of cstd int chater %ld bits\n", sizeof(uint8_t) * 8);


	int fun = 22;
	printf("Fun value for the chage is% d\n", fun);              /*it can be used fro th adpit the output in from on type
	                                                               to another*/

	int fun1 = 0b1000000;
	printf("Fun value for the chage is% d\n", fun1);

	int fun2 = 0x16;
	printf("Fun value for the chage is% d\n", fun2);
}