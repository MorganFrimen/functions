#pragma once
#include <cstddef>
#include <iostream>
#include <cstdarg>

int square(int x);
int factorial(int n);
int add(int a, int b);
float add(float a, float b);
void swap(int* a, int* b);
void swap(int& a, int& b);
int max(const int* data, size_t size);
void print(std::ostream& stream, int value);
int getRandomfrom1to100();
int sum(int num, ...);
void print(float value, size_t precision = 1u);
int doSomething(int (*func)(int, int), int a, int b);