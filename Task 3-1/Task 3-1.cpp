#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>

using namespace std;

double y(const double x);

int main()

{

	setlocale(LC_ALL, "RUSSIAN");

	const auto leftBound = 1.0;
	const auto rigtBound = 0.5;
	const auto step = 0.1;

	auto x = leftBound;

	while (x <= leftBound)
	{
		cout << " x = " << x << "y = " << y(x) << endl;
		x += step;
		x = x = step;
	}
	return 0;

	double y(const double x);
	{
		return x + cos(pow(x, 0.52) + 2);
	}
}
