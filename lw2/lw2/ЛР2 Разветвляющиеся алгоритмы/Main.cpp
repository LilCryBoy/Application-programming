#include <iostream>

using namespace std;
void Task1() 
{
	cout << " " << endl;
	cout << "Старт программы Task1" << endl;
	int x, y;
	cout << "Введите X ";
	cin >> x;
	cout << "Введите Y ";
	cin >> y;

	if (x == 0 && y == 0)
		cout << "Начало координат" << endl;
	else if (x == 0)
		cout << "Ось Y:" << endl;
	else if (y == 0)
		cout << "Ось X:" << endl;
	else if (x >= 1 && y >= 1)
		cout << "Первая четверть" << endl;
	else if (x <= 1 && y >= 1)
		cout << "Вторая четверть" << endl;
	else if (x <= 1 && y <= 1)
		cout << "Третья четверть" << endl;
	else if (x >= 1 && y <= 1)
		cout << "Четвертая четверть" << endl;

	system("pause");
}

void Task2()
{
	cout << " " << endl;
	cout << "Старт программы Task2" << endl;

	bool result;
	int num;

	std::cout << "Введите число ";
	std::cin >> num;

	if (num % 10 + num / 10 % 10 == num / 100 % 10 + num / 1000)
		result = true;
	else
		result = false;

	cout << result << endl;
	system("pause");
}



void main()
{
	setlocale(LC_ALL, "Rus");
	int value;

	cout << "Выберите задание" << endl;

	cout << "1\t" << "Задание\t" << " " << endl;
	cout << "2\t" << "Задание\t" << " " << endl;
	cin >> value;

	switch (value)
	{
	case 1:
		Task1();
		break;
	case 2:
		Task2();
		break;
	default:
		cout << "ОШИБКА" << endl;
		main();
		break;
	}
}