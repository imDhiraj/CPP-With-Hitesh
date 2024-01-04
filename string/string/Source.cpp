#include<iostream>
#include<string>
using namespace std;

int main() {
	string first_name, last_name;
	cout << "Type your name so we can know you:\n";
	cout << " type your first name\n";
	getline(cin, first_name);
	cout << "type your last name\n";
	getline(cin, last_name);
	cout << "Hello" << " " << first_name << " " << last_name << " " << "welcome to my new coding jounrny\n";
}