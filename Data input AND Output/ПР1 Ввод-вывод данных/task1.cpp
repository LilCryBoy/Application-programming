#include <iostream>

using namespace std;

//������� 1
void Task1()
{
	double one = 1.0, two = 1.414, three = 1.732, four = 2.0, five = 2.263;

	setlocale(LC_ALL, "Rus");
	cout << " " << endl;
	cout << "����� ��������� Task2" << endl;
	cout << " " << endl;
	cout.setf(std::ios::fixed);
	cout.precision(3);
	cout << "N\t" << "Square Root" << endl;
	cout << "1\t" << one << endl;
	cout << "2\t" << two << endl;
	cout << "3\t" << three << endl;
	cout << "4\t" << four << endl;
	cout << "5\t" << five << endl;
	system("pause");
}

//������� 2
void Task2()
{

	const double trans = 35273.92;
	double enter;

	setlocale(LC_ALL, "Rus");
	cout << " " << endl;
	cout << "����� ��������� Task2" << endl;
	cout << " " << endl;
	cout << "������� �������� � ������" << endl;
	cin >> enter;
	double exit = enter / trans;
	int iExit = exit;
	cout << "��������� � ������ - " << exit << endl;
	cout.setf(std::ios::fixed);
	cout.precision(0);
	cout << "������� - " << iExit << endl;
	system("pause");
}

//������� 3
void Task3()
{
	const double Concetrat = 0.001;
	double humanWeight, mouseWeight, dead, deadHuman;

	cout << " " << endl;
	cout << "����� ��������� Task2" << endl;
	cout << " " << endl;

	setlocale(LC_ALL, "Rus");
	cout << "������� ��� �������� � ����������" << endl;
	cin >> humanWeight;
	cout << "������� ��� ����� � ����������" << endl;
	cin >> mouseWeight;
	cout << "������� ����������� � ����������" << endl;
	cin >> dead;

	deadHuman = humanWeight * dead / mouseWeight / Concetrat;
	cout << "����������� ���� - " << deadHuman << endl;
	system("pause");
}


int main()
{
	setlocale(LC_ALL, "Rus");
	int value;

	cout << "�������� �������" << endl;

	cout << "1\t" << "�������\t" << endl;
	cout << "2\t" << "�������\t" << endl;
	cout << "3\t" << "�������\t" << endl;

	cout << "������� ����� � Enter ";
	cin >> value;

	switch (value)
	{
	case 1:
		Task1();
		break;
	case 2:
		Task2();
		break;
	case 3:
		Task3();
		break;
	default:
		cout << "������" << endl;
		main();
		break;
	}

	return 0;
}