#include  <iostream>
#include <numeric>
#include <vector>

double getMean(double a, double b)
{
	return a / b;
}

double getNumfromUser(int i)
{
	std::cout << "Enter the number of subject " << i << " :";
	double total;
	std::cin >> total;

	return total;
}
double getNumberfromUser(int i)
{
	std::cout << "Enter the total number of subjects of number " << i << " :";
	double total;
	std::cin >> total;

	return total;
}

int main()
{
	const int numberOne{ static_cast<int>(getNumberfromUser(1)) };
	const int numberTwo{ static_cast<int>(getNumberfromUser(2)) };

	std::vector < double > nOne(numberOne);
	std::vector < double > nTWo(numberTwo);

	for (int i{ 0 }; i < numberOne; ++i)
	{
		nOne[i] = { getNumfromUser(i + 1) };
	}

	std::cout << "Now for group 2:\n";

	for (int i{ 0 }; i < numberTwo; ++i)
	{
		nTWo[i] = { getNumfromUser(i + 1) };
	}

	const double one_total{ static_cast<double>(std::accumulate(nOne.begin(), nOne.end(), 0.0)) };
	const double two_total{ static_cast<double>(std::accumulate(nTWo.begin(), nTWo.end(), 0.0)) };

	const double oneMean{ getMean(one_total, numberOne) };
	const double twoMean{ getMean(two_total, numberTwo) };

	std::cout << "Mean of group 1 is: " << oneMean << " , and the mean of group two is " << twoMean;

}
