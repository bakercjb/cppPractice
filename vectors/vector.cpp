#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	//vector<string> strings;
	vector<string> strings;
	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");

	vector<string>::iterator it = strings.begin();

	cout << *it << endl;
	it += 2;
	cout << *it << endl;

	for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++) {
		cout << *it << endl;
	}
	//for(auto it = strings.begin(); )

	cin.get();
	return 0;
}