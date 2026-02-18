#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl; // << \n을 포함하여 flush 해주는 기능.
//using std::flush; // << flush (출력 화면으로 띄움) 만.

int main(int argc, char *argv[]) {
	std::cout << "Hello, world!" << std::endl;
	cout << "Bye, world!" << endl;
	return EXIT_SUCCESS;  // 0
}

/*
 * 1. C++'s printing
 *   - C 는 "printf".
 *   - C++ 는 std::cout 으로 시작하여, std::endl 으로 끝남.
 * 2. << meaning
 *   - << is Insert Operator, not Bitwise Operator (in this case).
 * 3. EXIT_SUCCESS
 *   - defined as 0 by <cstdlib> (C++) or <stdlib.h> (C).
 */
