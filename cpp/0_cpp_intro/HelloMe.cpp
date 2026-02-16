#include <iostream>
#include <string>

// say what standard-libary names we use
using std::cin;		using std::endl;
using std::cout;	using std::string;
using std::flush;

int main() {
	cout << "Please enter your first name: " << flush;

	// string : no need to allocate by oneself (unlike C)
	string name;
	cin >> name;

	// const : fix the variable for reading, and blocking human error
	const string greeting = "Hello, " + name + "!";
	const int pad = 1;

	const int rows = pad * 2 + 3;
	const string::size_type cols = greeting.size() + pad * 2 + 2;
	/*
	 * Defensive Programming
	 * "I can't believe myself. so I will use "const" for variable
	 * that dont need to change."
	 * Pros : Human Error Prevention / Self-Documentatiton / Compiler Optimization
	 */
	
	for (int r = 0; r < rows; ++r) {
		string::size_type c = 0;
		/*
		 * int : It has risk for overflow 
		 * 	because of very very long string (ex. 4GB txt)
		 * string::size_type : special integer range, unsigned
		 */

		while (c < cols) {
			if (r == pad + 1 && c == pad + 1) {
				cout << greeting;
				c += greeting.size();
			}
			else {
				if (r == 0 || r == rows - 1 ||
					c == 0 || c == cols - 1)
					cout <<"*";
				else
					cout << " ";
				++c;
			}
		}
		cout << endl;
	}

	return 0;
}

// ./a.out >> a.txt wont work normally...
