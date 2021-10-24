#include <iostream>
#include <cmath>

using namespace std;




//�������� ���������
void Task1()
{
	cout << " " << endl;
	cout << "����� ��������� Task1" << endl;
	const double PI = 3.14159265358979323846;
	const double a = 12.;

	double y = 2. * pow(sin(3. * PI - 2. * a), 2.) * pow(cos(5. * PI + 2. * a), 2.);
	double z = 0.25 - 0.25 * sin(2.5 * PI - 8. * a);

	cout << y << endl;
	cout << z << endl;

	system("pause");

	system("pause");
}


//���������� ���������� ����� ����������� �������� � ����� �������� ����������.
void Task2()
{
	int mapSize = 120, speedCar = 80;
	double distance = 3.5;
	cout << " " << endl;
	cout << "����� ��������� Task2" << endl;
	cout << "���������� ���������� ����� ����������� �������� � ����� �������� ����������." << endl;
	cout << " " << endl;

	cout << "������� ����� (���������� ���������� � ����� ���������� - ";
	cin >> mapSize;
	cout << " " << endl;

	cout << "���������� ����� �������, ������������� ���������� ������ (��) - ";
	cin >> distance;
	cout << " " << endl;

	cout << "�������� ���������� (��/�) - ";
	cin >> speedCar;

	double countDistance = mapSize * distance;
	int time = countDistance / speedCar * 3600;
	int h = time / 3600;
	int min = time / 60 - h * 60;



	std::cout.setf(std::ios::fixed);
	std::cout.precision(2);
	cout << "����� �������� ���������� " << h << " �. " << min << " ���., ��� �������� �������� ���������� " << speedCar << " ��/� " << endl;
	system("pause");
}

//1.��������� ��������� ���������� �������� ������� F(x, y), ��� x, y �������� � ����������, � �������� � � b �������� �����������.
void Task3()
{

	cout << " " << endl;
	cout << "����� ��������� Task3" << endl;
	const double a = 1.0, b = 1.0;
	double x, y, rh, rd, F;
	cout << "X = ";
	cin >> x;
	cout << "Y = ";
	cin >> y;

	system("pause");

}



int main() 
{
	setlocale(LC_ALL, "Rus");
	int value;

	cout << "�������� �������" << endl;

	cout << "1\t" << "�������\t" << "��������� ��� ������� �� ���� ��������." << endl;
	cout << "2\t" << "�������\t" << "���������� ���������� ����� ����������� ��������" <<  endl;
	cout << "3\t" << "�������\t" << "���������� �������� ������� F(x,y)" << endl;

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




