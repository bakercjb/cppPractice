#include <iostream>
using namespace std;

auto test() -> int {
	return 7;
}

template<class T>
auto tempFn(T value) -> decltype(value) {
	return value;
}

int main() {
	auto val = 4;
	auto text = "hi";

	cout << val << endl;
	cout << text << endl;

	cout << test() << endl;

	cout << tempFn("hello") << endl;

	cin.get();
	return 0;
}