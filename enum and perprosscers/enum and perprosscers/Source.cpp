#include<iostream>
using namespace std;
#define PI  3.145//preprocesser it majerly used for macros but the more it when old cpp is used now enum is more populer

enum MyEnum
{
	Letter = 12,
	BOLD = 15,     //enum in other hand multiple assignaed  values in it  
	Redius = 7     //and also with it iccerse the value if not assigned as defulft value is start from 1
};

int main() {
	cout<< PI * Redius ;
}