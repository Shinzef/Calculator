#include <iostream>

int askNumber()
{
	std::cout << "enter integer: ";
	int input{}; 
	std::cin >> input; // Gets input
	return input;
}

int getTotal_andMean(int a, int b, int c, int d, int e) // Gets the Total and Mean of the 5 integers
{
	int x{ a + b + c + d + e }; // Adds them up
	int y{ x / 5 };				// Divides total to 5
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