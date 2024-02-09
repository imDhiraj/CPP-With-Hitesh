#include<iostream>
using namespace std;

int main() {
	printf("the sie of float is : %ld bits\n", sizeof(double )*8);
	
	float my_p_value = 20.4 + 20.4;
	if (my_p_value == 40.799999) {
		puts("got the value");
	}
	else
	{
		puts("done");
	}
	printf("my float value is %f value\n", my_p_value);

	double my_p_value1 = 20.4 + 20.4;
	 if (my_p_value1 == 40.80) {
		puts("got the value");
	}
	else
	{
		puts("done");
	}
	 
	printf("my float value is %1.2f value\n", my_p_value1);

	/*long double my_p_value2 = 20.4 + 20.4;
	printf("my float value is %1.2f value\n", my_p_value2);*/
}
// float does not give an acuwally value for the print it seems it prints some random no. in front of the actully value 

//so will using it be aware of the CAHNGE IT CARRY WITH IT AS FLOAT 