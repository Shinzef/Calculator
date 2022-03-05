#include <string>
#include <iostream>
#include <iomanip>


int askNumber()
{
	std::cout << "enter integer: ";
	long double input{};
	std::cin >> input; // Gets input
	return input;
}

int getTotal_andMean(long double a, long double b, long double c, long double d, long double e) // Gets the Total and Mean of the 5 integers
{
	long double x{ a + b + c + d + e }; // Adds them up
	long double y{ x / 5 };				// Divides total to 5
	std::cout << "The total is: " << x << '\n';
	std::cout << "the mean is: " << y << '\n';
	return x;
}

int main()
{
	int a{ askNumber() };
	int b{ askNumber() };
	int c{ askNumber() };
	int d{ askNumber() };
	int e{ askNumber() };
	getTotal_andMean(a, b, c, d, e);
	return 0;
}
