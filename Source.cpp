// Dane Merriman
// CIS 1202 501
// May 1, 2022
// Fifteenth Assignment - Creating Templates

#include <iostream>
using namespace std;

template <class T>
double half(const T& num)
{
	double num2 = num / 2;
	return num2;
}

int half(int num)
{
	int num2 = round(static_cast<float>(num / 2));
	return num2;
}