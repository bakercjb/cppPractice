#include <iostream>
using namespace std;

class Parent {
private:
	int one;
public:
	Parent() : one(0) {

	}
	Parent(const Parent &other) : one(0) {
		one = other.one;
		cout << "copy parent" << endl;
	}

	virtual void print() {
		cout << "parent" << endl;
	}

	virtual ~Parent() {

	}
};

class Child : public Parent {
private:
	int two;
public:
	Child() : two(0) {

	}
	void print() {
		cout << "child" << endl;
	}
};

int main() {
	Child c1;
	//reference points to child object
	//assign subclass to reference
	Parent &p1 = c1;
	p1.print();

	//Copy initialization. 
	Parent p2 = Child();
	p2.print();

	cin.get();
	return 0;
}