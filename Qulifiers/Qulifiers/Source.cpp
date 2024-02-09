// linker are on of the morjoer thing in cpp to read about it use folling links
// https://stackoverflow.com/questions/3322911/what-do-linkers-do
// https://stackoverflow.com/questions/9248533/how-does-a-linker-know-what-all-libraries-to-link

#include <iostream>
using namespace std;

int lifeUp() {
	 static int life = 3;
	return life = life + 1;

}
int lifeDown() {
	static int life = 3;
	return life = life - 1;// using post and per can use full here so we can use this function effentently 
}

int main() {
	int life = 3;

	cout << "your current life is :" << life<<"\n";

	life = lifeUp();
	cout << "you updated value is :" << life << "\n";

	life = lifeUp();
	cout << "you updated value is :" << life << "\n";

	life = lifeDown();
	cout << "you have this much life left with:" << life << "\n";


	//2nd way to run it
	//// life = lifeUp();
	//cout << "you updated value is :" << lifeUp()<<"\n";

	//// life = lifeUp();
	//cout << "you updated value is :" << lifeUp() << "\n";
}

//As by using static qulifer we can use that value and it can be changble also it well dwefine that perticuler value as globel varblie 

// one more thing is need here that if wee want to add both value and then give it output what will be the result.

