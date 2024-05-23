#include <iostream>
#include "lib.h"

int main()
{
	int argument = 8;
	int result = square(argument);
	std::cout << argument << " ^2 = " << result << std::endl;

	int factorialArgument = 5u;
	int factorialResult = factorial(factorialArgument);
	std::cout << factorialArgument << "! = " << factorialResult << std::endl;

	int intResult = add(3, 7);
	std::cout << "int summ = " << intResult << std::endl;

	float floatRes = add(3.5f , 7.4f);
	std::cout << "float summ = " << floatRes << std::endl;

	int foo = 10;
	int bar = 20;
	swap(&foo, &bar);
	std::cout << "foo = " << foo << " bar = " << bar << std::endl;

	foo = 10;
	bar = 20;
	swap(foo, bar);
	std::cout << "foo = " << foo << " bar = " << bar << std::endl;

	const size_t size = 4u;
	int data[size] = { 5, 17, 3, 4 };
	int maxValue = max(data, size);
	std::cout << "max = " << maxValue << std::endl;

	print(std::cout, 50);

	int random = getRandomfrom1to100();
	std::cout << "Random : " << random << std::endl;

	int total = sum(7, 2, 3, 5, 7, 11, 13, 17);
	std::cout << "Total : " << total << std::endl;

	float value = 1.1539f;
	print(value);

	int(*function)(int, int) = add;
	int base = add(3, 7);
	int base2 = function(3, 7);
	int base3 = doSomething(add, 3, 7);
	std::cout << "Summ : " << base3 << std::endl;

	std::cin.get();
}