#include <iostream>
using namespace std;


double my_pow(double indicator, int degree)    
{
	double finalNumber = 1;
	int primal_degree = degree;

	degree = degree < 0 ? -degree : degree;
	if (degree == 0)
		return 1;

	for (int i = 0; i < degree; i++)
	{
		finalNumber *= indicator;
	}

	return primal_degree < 0 ? 1 / finalNumber : finalNumber;
}

int main()
{
	int degree;
	double indicator;

	cin >> indicator >> degree;
	double number = my_pow(indicator, degree);

	cout << number;

	return 0;
}