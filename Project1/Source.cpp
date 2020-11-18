#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double P, S;
	int n, k;
	P = 1;
	n = 1;
	while (n <= 25)
	{
		S = 0;
		k = 1;
		while (k <= n)
		{
			S += sqrt(pow(cos(k + n), 2));
			k++;
		}
		P *= (cos(n) + S);
		n++;
	}
	cout << P << endl;

	P = 1;
	n = 1;
	do {
		S = 0;
		k = 1;
		do {
			S += sqrt(pow(cos(k + n), 2));
			k++;
		} while (k <= n);
		P *= (cos(n) + S);
		n++;
	} while (n <= 25);
	cout << P << endl;

	P = 1;
	for (n = 1; n <= 25; n++)
	{
		S = 0;
		for (k = 1; k <= n; k++)
		{
			S += sqrt(pow(cos(k + n), 2));
		}
		P *= (cos(n) + S);
	}
	cout << P << endl;

	P = 1;
	for (n = 25; n >= 1; n--)

	{
		S = 0;
		for (k = n; k >= 1; k--)
		{
			S += sqrt(pow(cos(k + n), 2));
		}
		P *= (cos(n) + S);
	}
	cout << P << endl;
	return 0;
}