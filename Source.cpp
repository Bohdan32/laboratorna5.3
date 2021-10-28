#include <iostream>
#include <cmath>
using namespace std;
double z(const double x);
int main()
{
	double gp, gk, g;
	int n;
	cout << "gp = "; cin >> gp;
	cout << "gk = "; cin >> gk;
	cout << "n = "; cin >> n;
	double dg = (gk - gp) / n;
	double p = gp;
	while (p <= gk)
	{
		g = z(p * p + 1) - z(p * p - 1) + 2 * z(p);
		cout << p << " " << g << endl;
		p += dg;
	}
	return 0;
}
double z(const double x)
{
	if (abs(x) >= 1)
		return (sin(x+1))/(cos(x+exp(x))* cos(x + exp(x)));
	else
	{
		double S = 0;
		int k = 0;
		double a = 1;
		S = a;

		do
		{
			k++;
			double R = (pow(2, k)* pow(x,k))/((k-4)*(k-3) * (k - 2) * (k - 1) *k);
			a *= R;
			S += a;
		} while (k < 6);
		int res = S / exp(x * x);
		return res;
	}
}