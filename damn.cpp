#include <iostream>
#include <random>
#include <limits>

void ignoreLine()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int getNum()
{
	int x;
	std::cin >> x;
	return x;
}

int randomNum()
{
	std::random_device rd;
	std::seed_seq ss{ rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd() };
	std::mt19937 mt{ ss };

	std::uniform_int_distribution num{ 1, 100 };
	return num(mt);
}

int main()
{

	int random{ randomNum() };

	std::cout << "Let's play a game. I'm thinking of a number. You have 7 tries to guess what it is.";

	while (true)
	{
		for (int count{ 1 }; count <= 7; )
		{
			std::cout << '\n' << "Guess #" << count << ": ";
			++count;
			int x{ getNum() };

			if (std::cin.fail())
			{
				std::cin.clear();
				ignoreLine();
				std::cerr << " Oops, that input isnt a number. Please try again";
				--count; 
			}
			else if (x > random)
				std::cout << "Too high.";
			else if (x < random)
				std::cout << "Too low.";
			else
				std::cout << "Correct! You win!";


		}

		std::cout << " \nWould you like to play again (y/n)? ";
		char replay{};
		std::cin >> replay;

		if (replay == 'n')
			return 0;
	}
}