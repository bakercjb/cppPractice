#include <iostream>
#include <exception>

//using namespace standard
using namespace std;

class MyException : public exception {
public:
	//"const throw()" means it cannot throw an exception
	virtual const char* what() const throw() {
		return "Something bad happened!";
	}
};

class Test {
public:
	void goesWrong() {
		// throw exceptions by value. catch by reference.
		// if you throw a pointer, you deal with memory mngmt issues
		throw MyException();
	}
};

int main() {
	Test test;

	try {
		test.goesWrong();
	}
	catch (MyException &e) {
		cout << e.what() << endl;
	}

	cin.get();
	return 0;
}