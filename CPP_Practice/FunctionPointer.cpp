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

	std::cin.get();

	return 0;
}