#include <iostream>

const double Concetrat = 0.001;
double humanWeight, mouseWeight, dead, DeadMouse, deadHuman;
void main()
{
	setlocale(LC_ALL, "Rus");
	std::cout << "������� ��� �������� � ����������" << std::endl;
	std::cin >> humanWeight;
	std::cout << "������� ��� ����� � ����������" << std::endl;
	std::cin >> mouseWeight;
	std::cout << "������� ����������� � ����������" << std::endl;
	std::cin >> dead;

	deadHuman = humanWeight * dead / mouseWeight / Concetrat;
	std::cout << "����������� ���� - " << deadHuman << std::endl;
	system("pause");
}