#include <iostream>
#include <string>

// say what standard-libary names we use
using std::cin;		using std::endl;
using std::cout;	using std::string;
using std::flush;

int main() {
	cout << "Please enter your first name: " << flush;

	// string : C와 다르게, 크기를 지정해 줄 필요가 없다!
	string name;
	cin >> name;

	// const : fix the variable for reading, and blocking human error
	const string greeting = "Hello, " + name + "!";
	const int pad = 1;

	const int rows = pad * 2 + 3;
	const string::size_type cols = greeting.size() + pad * 2 + 2;
	/*
	 * Defensive Programming
	 * 내 스스로를 믿을 수 없으니.. 혹은 바뀔 이유가 없는 변수까지 const 선언.
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
/*
Q. C++와, Python/Java의 문자열 동작 방식 차이?
Situation : a = "1" 이였는데, a = "12"로 바뀜.
C++ -> a가 차지하고 있는 메모리를 직접 수정. 만약 "12" 처럼 늘어나 공간이 부족하면, 다른 여유로운 메모리 공간으로 이사. (mutable)
Java/Python -> 새 공간에 "12"를 만들고, a가 그 공간을 가리키게 만듬. / 기존 "1"은, GC에 의해 삭제. (사용자는 편리하지만.. 그만큼 오버헤드가 많고 속도가 느림.)
*/
