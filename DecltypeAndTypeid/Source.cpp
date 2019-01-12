#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main() {
	int value;

	cout << typeid(value).name() << endl; //'int'

	double val;

	cout << typeid(val).name() << endl; //'double'

	string test;

	cout << typeid(test).name() << endl;

	//declare variables of an existing type
	decltype(test) name = "Chris";

	cout << name << endl;

	cin.get();
	return 0;
}