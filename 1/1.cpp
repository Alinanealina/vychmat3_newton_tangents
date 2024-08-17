#include <iostream>
using namespace std;
double function(double x)
{
	return (x * x + 3 * x - 2);
}
double der(double x)
{
	return (2 * x + 3);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int i = 1;
	double eps = pow(10, -8), x1, x0 = 2;
	cout << " eps = " << eps << endl << " x0 = " << x0 << endl;
	do
	{
		cout << " Шаг " << i << ":";
		if (i != 1)
			x0 = x1;
		cout << " x" << i << " = ";
		x1 = x0 - (function(x0) / der(x0));
		cout << x1 << endl;
		i++;
		cout << abs(x1 - x0) << endl;
	} while (!(abs(x1 - x0) < eps));
	return 0;
}