#include <iostream>
using namespace std;

class CanGoWrong {
public:
	CanGoWrong() {
		char *pMemory = new char[999];
		delete[] pMemory;
	}
};

int main() {
	try {
		CanGoWrong wrong;
	}
	catch (bad_alloc &e) {
		cout << "Caught exception: " << e.what() << endl;
	}

	cout << "still running" << endl;

	cin.get();

	return 0;
}