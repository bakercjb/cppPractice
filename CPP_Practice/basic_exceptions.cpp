#include <iostream>
#include <string>
using namespace std;

void mightGoWrong() {
	bool error1 = false;
	bool error2 = true;

	if (error1) {
		throw "Something went wrong.";
	}
	if (error2) {
		throw string("something else went wrong.");
	}
}

void usesMightGoWrong() {
	mightGoWrong();
}

int main() {
	try {
		usesMightGoWrong();
	}
	catch (int e) {
		cout << "Error code: " << e << endl;
	}
	catch (char const * e) {
		cout << "Error message: " << e << endl;
	}
	catch (string &e) {
		cout << "string error message: " << e << endl;
	}

	cout << "Still running!" << endl;
	std::cin.get();
	return 0;
}