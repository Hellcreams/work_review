#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl; // < will print \n, and flush.
//using std::flush; // << will not print \n, just flush.

int main(int argc, char *argv[]) {
	std::cout << "Hello, world!" << std::endl;
	cout << "Bye, world!" << endl;
	return EXIT_SUCCESS;  // that is 0
}

/*
 * 1. C++'s printing
 *   - C uses "printf".
 *   - C++ starts with std:cout, ends with std.endl.
 * 2. << meaning
 *   - << is Insert Operator, not Bitwise Operator (in this case).
 * 3. EXIT_SUCCESS
 *   - defined as 0 by <cstdlib> (C++) or <stdlib.h> (C).
 */
