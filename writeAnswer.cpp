#include "io.h"
#include <iostream>

int readNumber()
{
	std::cout << "Write any Integer: ";
	int x{};
	std::cin >> x;
	return x;
}