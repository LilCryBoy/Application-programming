#include <iostream>

using namespace std;
void Task1() 
{
	cout << " " << endl;
	cout << "����� ��������� Task1" << endl;
	int x, y;
	cout << "������� X ";
	cin >> x;
	cout << "������� Y ";
	cin >> y;

	if (x == 0 && y == 0)
		cout << "������ ���������" << endl;
	else if (x == 0)
		cout << "��� Y:" << endl;
	else if (y == 0)
		cout << "��� X:" << endl;
	else if (x >= 1 && y >= 1)
		cout << "������ ��������" << endl;
	else if (x <= 1 && y >= 1)
		cout << "������ ��������" << endl;
	else if (x <= 1 && y <= 1)
		cout << "������ ��������" << endl;
	else if (x >= 1 && y <= 1)
		cout << "��������� ��������" << endl;

	system("pause");
}

void Task2()
{
	cout << " " << endl;
	cout << "����� ��������� Task2" << endl;

	bool result;
	int num;

	std::cout << "������� ����� ";
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

	cout << "�������� �������" << endl;

	cout << "1\t" << "�������\t" << " " << endl;
	cout << "2\t" << "�������\t" << " " << endl;
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
		cout << "������" << endl;
		main();
		break;
	}
}