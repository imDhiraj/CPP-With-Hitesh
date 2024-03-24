// Read This for better understanding it about Three rule of constructer https://stackoverflow.com/questions/4172722/what-is-the-rule-of-three

#include <iostream>
#include <string> // Include string header
using namespace std;

class User {
private:
    int _secrt = 100;
    string _name = "";
    string _os = "";
    int _price = 0;

public:
    User(); // Constructor declaration
    string getos() const; // Function declaration
    ~User(); // Destructor declaration
};

// Constructor definition
User::User() : _name(), _os("oxy"), _price() {
    cout << "Default Constructor" << endl;
}

// Destructor definition
User::~User() {
    cout << "Destructor called" << endl;
}

// Function definition
string User::getos() const {
    return _os;
}

int main() {
    User user; // Creating an object of class User
    cout << user.getos() << endl; // Accessing member function
    return 0;
}
//// Read This for better understanding it about Three rule of constructer https://stackoverflow.com/questions/4172722/what-is-the-rule-of-three
//
//#include<iostream>
//#include<iostream>
//using namespace std;
//
//class User {
//    int _secrt = 100;
//    string _name = "";
//    string _os = "";
//    int _price = 0;
//
//public:
//    User();
//    string getos() {
//        return _os;
//    }
//
//}
//User::User() : _name(), _os("oxy"), _price() {
//    puts("Defult Consturture");
//}
//
//int main() {
//    Phone Samsung;
//    cout << Samsung.getos() << endl;
//}