#include <iostream>

int main()
{
	std::cout << "Enter an integer: ";

	int first_num{ };
	std::cin >> first_num;

	std::cout << "Enter another interger: ";

	int Second_num{ };
	std::cin >> Second_num;

	std::cout << "Enter another interger: ";

	int Third_num{ };
	std::cin >> Third_num;

	std::cout << "Enter another interger: ";

	int Fourth_num{ };
	std::cin >> Fourth_num;

	std::cout << "Enter another interger: ";

	int Fifth_num{ };
	std::cin >> Fifth_num;

	std::cout << "Enter total number of integer (not including zero) : ";

	int Total_num{ };
	std::cin >> Total_num;

	int All_num{ first_num + Second_num + Third_num + Fourth_num + Fifth_num };
	std::cout << "Total is: " << All_num << '\n' ;
	std::cout << "Mean is:" << All_num / Total_num;

	return 0;
}