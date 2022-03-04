#include <iostream>

int getIntFromUser()
{
	std::cout << "Enter integer: ";
	int input{};
    std::cin >> input;

	return input;

}

int main()
{
	std::cout << "Welcome to Mean Calc v1.1";
	int a{ getIntFromUser() };
	int b{ getIntFromUser() };
	int c{ getIntFromUser() };
	int d{ getIntFromUser() };
	int e{ getIntFromUser() };

	int All_num{ a + b + c + d + e };
	std::cout << "Total is: " << All_num << '\n' ;

	std::cout << "Mean is:" << All_num / 5;

	return 0;
}

// this is nothing idk why its not pushing
