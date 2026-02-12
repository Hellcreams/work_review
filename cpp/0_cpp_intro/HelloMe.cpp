#include <iostream>
#include <string>

// say what standard-libary names we use
using std::cin;		using std::endl;
using std::cout;	using std::string;

int main() {
	// ask for the preson's name
	cout << "Please enter your first name: ";

	// read the name
	string name;
	cin >> name;

	// build the message that we intend to write
	const string greeting = "Hello, " + name + "!";

	// the number of blanks surrounding the greeting
	const int pad = 1;
}
