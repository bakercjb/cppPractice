#include <iostream>

void test(int val)
{
	std::cout << "Num: " << val << std::endl;
}

int main()
{
	test(7);

	/*
	void*pTest(int): a function which takes an int and returns void
	*/
	void(*pTest)(int) = test;

	pTest(8);

	void(*pTest2)(int);

	//Get address of test by prefixing with ampersand
	pTest2 = &test;

	//Invoke function as if you were calling a function
	pTest2(1);

	//Or optionally dereference the function pointer
	(*pTest2)(9);

	void(*pTest3)(int);

	//Get address of test by just naming it too
	pTest3 = test;
	pTest3(100);

	std::cin.get();

	return 0;
}