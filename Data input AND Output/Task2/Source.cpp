#include <iostream>

const double trans = 35273.92;
double enter;

void main()
{
	setlocale(LC_ALL, "Rus");
	std::cout << "������� �������� � ������" << std::endl;
	std::cin >> enter;
	double exit = enter / trans;
	int iExit = exit;
	std::cout << "��������� � ������ - " << exit << std::endl;;
	std::cout << "������� - " << iExit << std::endl;
	system("pause");
}