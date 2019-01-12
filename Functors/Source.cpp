#include <iostream>
using namespace std;

struct Test {
	virtual bool operator()(string &text) = 0;
};

//Functors are classes or structs that overload '()'
struct MatchTest : Test { //no need for 'public' Test because its public by default
	bool operator()(string &text) {
		return text == "lion";
	}
};

struct MyMatchTest : Test {
	//no need for 'virtual' before bool.
	bool operator()(string &text) {
		return text == "text";
	}
};

void check(string text, Test &t) {
	if (t(text)) {
		cout << "Text matches!" << endl;
	}
	else {
		cout << "No match." << endl;
	}
}

int main() {
	MatchTest pred;
	string val = "lion";

	cout << pred(val) << endl;

	check(val, pred);

	cin.get();
	return 0;
}