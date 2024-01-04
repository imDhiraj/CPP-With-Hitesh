#include<iostream>
using namespace std;

int main() {
	/*int rating = 3;
	if (rating == 4) {
		puts("Your rating is 4\n");
	}
	else if (rating == 3) {
		puts("Your rating is 3\n");
	}
	
	else {
		cout << "You're rating is not good\n";
	}

	printf("The Rated feedback of rating is : %s", rating == 4 ? "Good" : "Bad""\n");*/
	

	//Assinment 1
	/*int rating = 3;
	printf("Your rating feedback is : %s \n", rating == 4 ? "awesome" : "We will work on it");*/

	//Assngiment no. 2

	int Rating;

	puts("Give your Rating for our servies in Between 1 to 5");
	cin >> Rating;
	if ((1 >= Rating <= 5)) {
		if (Rating == 5) {
			puts("Thank you for Response, we are happy to hear that form you.\n");
		}
		else if (Rating == 4) {
			puts("Thank you for response, we will try our best to improve\n");
		}
		else if (Rating == 3) {
			puts("Thanks fro sharing responce, please tell us more so we can improve\n");
		}
		else if (Rating == 2) {
			puts("feel bad to hear that but thanks for the responce give your feedback what should change we while definaly do it\n");
		}
		else if (Rating == 1) {
			puts("Sorry to hear that from you it seem you we have lots of problems that not good for our users Please Do visit us again so we can provide you good expersice\n");
		}
		else {

			cout << "plsese Rate us between 1 to 5 only\n";

		}
		return 0;
	}
	
	
}