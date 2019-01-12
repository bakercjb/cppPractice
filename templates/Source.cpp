#include <iostream>
#include <string>
using namespace std;

/*
1. Each object gets its own copy of the data member
2. All objects access the same function definition in the code segment

The 'this' pointer is passed as a hidden argument to all nonstatic member functions.
'this' is not available in static member functions since they can be called without any objects

*/

//can use 'typename' instead of class since primitives can be used
template<class T>
void print(T n) {
	cout << n << endl;
}

void print(int n) {
	cout << "Non-template: " << n << endl;
}

template<class T, class K>
class Test {
private:
	T obj;
	K id;
public:
	Test(T obj, K m_id) {
		this->obj = obj;
		this->id = m_id;
	}
	void print() {
		cout << obj << ": " << id << endl;
	}
};

int main() {
	Test<string, int> test1("Hello", 5);
	test1.print();

	Test<string, double> test2("hello again", 4.0);
	test2.print();
	

	print<string>("HI!!");
	print<int>(5);

	//type inference
	print("Sup");

	print<>(6);

	print(7);

	cin.get();
	return 0;
}