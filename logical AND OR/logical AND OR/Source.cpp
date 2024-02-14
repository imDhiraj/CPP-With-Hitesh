#include<iostream>
using namespace std;

int main() {
	bool isFBSigned = false;
	bool isGoogleSigned = false;
	bool isOtherSigned = true;

	bool isAdmin = false;

	if (!((isFBSigned || isGoogleSigned || isOtherSigned) && isAdmin)) {
		puts("Welcome Admin\n");
	}
	else {
		puts("sorry your not the admin\n");
		puts("you can only access your data\n");
	}
}
// this follwing code repernstes the boolen based conspet of AND, OR , NOT opertion that can be used in login systems for autherations