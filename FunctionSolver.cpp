#include <iostream>
using namespace std;

void checkValidInput()
{
	if (cin.fail())
	{
		throw "Incorrect data";
	}
}

void checkValidParams(int n)
{
	if (n < 1)
	{
		throw "Incorrect data";
	}
}

int calculate(int n, double x)
{
	double y = 0;

	if (x < 0)
	{
		double mult = 1;

		for (int i = 1; i <= (n - 1); i++)
		{
			double mult = 1;

			for (int j = 0; j < n; j++)
			{
				mult *= x - i - j;
			}

			mult += mult;
		}

		y = mult;

	}
	else
	{
		double sum = 0;

		for (int i = 0; i <= n; i++)
		{
			sum += (pow(x - i, 2));
		}

		y = sum;

	}
	return y;
}

int main()
{
	int n, x;
	try
	{
		cout << "Enter n: ";
		cin >> n;

		checkValidInput();
		checkValidParams(n);

		cout << "Enter x: ";
		cin >> x;
		checkValidInput();

		cout << "x = " << x << " " << "y = " << calculate(n, x) << endl;
	}
	catch (const char* ex)
	{
		cout << ex << endl;
		return -1;
	}
	catch (...)
	{
		cout << "Unknown error" << endl;
		return -2;
	}
}