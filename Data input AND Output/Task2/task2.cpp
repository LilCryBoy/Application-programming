#include <iostream>

const double trans = 35273.92;
double enter;

void main()
{
	setlocale(LC_ALL, "Rus");
	std::cout << "Введите значение в унциях" << std::endl;
	std::cin >> enter;
	double exit = enter / trans;
	int iExit = exit;
	std::cout << "Результат в тоннах - " << exit << std::endl;;
	std::cout << "Коробок - " << iExit << std::endl;
	system("pause");
}