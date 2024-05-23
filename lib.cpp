#include <random>
#include <iomanip>
#include "lib.h"

int square(int x)
{
	return x * x;
}

int factorial(int n)
{
	return(n <= 1 ? 1 : factorial(n-1) * n); //n1 = (n - 1)! * n,0! = 1, 1! = 1
}

int add(int a, int b)
{
	return a + b;
}

float add(float a, float b)
{
	return a + b;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int max(const int* data, size_t size)
{
	size_t indexMax = 0;
	for(size_t i = 1; i < size; i++)
	{
		if (data[i] > data[indexMax])
		{
			indexMax = i;
		}
	}
	return data[indexMax];
}

void print(std::ostream& stream, int value)
{
	stream << "Value :" << value << std::endl;
}
int getRandomfrom1to100()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	int from = 1, to = 100;
	std::uniform_int_distribution<> distribution(from, to);
	int random = distribution(gen);
	return random;
}
int sum(int num, ...)
{
	va_list args;
	va_start(args, num);
	int sum = 0;
	while (num--)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return sum;
}

void print(float value, size_t precision)
{
	std::cout << std::fixed << std::setprecision(precision) << value << std::endl;
}

int doSomething(int (*func)(int, int), int a, int b)
{
	return func(a, b);
}