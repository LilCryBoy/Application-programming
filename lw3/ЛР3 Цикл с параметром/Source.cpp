#include <iostream>

using namespace std;
int main()
{
	double a, b, c, xStart, xEnd, dX, F;
	setlocale(LC_ALL, "Rus");
	cout << "������� � - ";
	cin >> a;
	cout << "������� b - ";
	cin >> b;
	cout << "������� c - ";
	cin >> c;
	cout << "������� xStart - ";
	cin >> xStart;
	cout << "������� xEnd - ";
	cin >> xEnd;
	cout << "������� dX - ";
	cin >> dX;



	for (double x = xStart; x <= xEnd; x += dX)
	{
		if (a < 0 && x != 0)
		{
			F = a * x * x + b;
		}
		if (x > 0 && b != 0)
		{
			F = (x - a) / (x - c);
		}
		else F = x / c;
		cout << x << "\t" << F << endl;
	}

	system("pause");
	return 0;
}