/*As last time we use MACRO to dispair somepart error in for NULL Pointer 
we can define values instractions some block of code to this MACRO so to reude the code in main file 
it is helpfull for for lots and lots of aspesct but 
the major con also there for this like will devloping an program with multiple devs it is diffcult to understad if we used it lot 
becuase it is stored in different files some time so using it is helpful but to much 
like for follwing example if int32_t/PI
how? so for multiple times wirtten an same word can do in simpler way and also we can do muliple changes in code by chamging single values

and carte an problem when PRINT like MACROS are defined
*/

#include<iostream>
using namespace std;

#define SINT int32_t

#define PI 3.14
#define AREA(r) r*r*PI 

#define PRINT cout<< t <<endl;

int main() {
	int a = 7;
	SINT b = 2;
	cout << a << "\n" << b << "\n";

	int radius = 4;
	int Circlearea = AREA(radius);
	cout <<"AREA OF Circle is :" << Circlearea<<endl;

	//char file[] = __FILE__;
	//char date[] = __DATE__;
	//char time[] = __TIME__;
	//int line = __LINE__;

	////cout << "File name: " << file << "\n";    //
	////cout << "Date: " << date << "\n";          //
	//cout << "Time: " << time << "\n";          // some predefined MACROS
	//cout << "Line number: " << line << "\n";      //    

	int t = 4;

	PRINT;//should not been used 

	return 0;

}