#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<double> numbers(20);
	/*
	size: num elements 
	capacity: internal size of array
	*/
	for (int i = 0; i < 1000; i++) {
		numbers.push_back(i);
		cout << "size: " << numbers.size() << endl;
		cout << "capacity: " << numbers.capacity() << endl;

	}
	
	//numbers.clear() removes all elements but doesnt resize array

	//numbers.resize(param) changes size to whatever specified

	//numbers.reserve(param) reserves memory (capacity)

	cin.get();
	return 0;
}