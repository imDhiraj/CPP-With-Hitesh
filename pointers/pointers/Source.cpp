#include<iostream>
using namespace std;

int main() {
	int score = 39;
	int* myp = &score;
	//pointer those which poite to loction of it.

	printf("vale of score is %d\n", score);
	printf("vale of score is %p\n", myp);

	int &another_score = score;
	 another_score = 800;

	printf("vale of score is %d\n", score);
	printf("vale of score is %p", myp);
}