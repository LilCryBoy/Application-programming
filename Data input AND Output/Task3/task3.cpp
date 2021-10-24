#include <iostream>


void main()
{
	setlocale(LC_ALL, "Rus");
	std::cout << "¬ведите вес человека в килограмах" << std::endl;
	std::cin >> humanWeight;
	std::cout << "¬ведите вес мышки в килограмах" << std::endl;
	std::cin >> mouseWeight;
	std::cout << "¬ведите смертельную в килограмах" << std::endl;
	std::cin >> dead;

	deadHuman = humanWeight * dead / mouseWeight / Concetrat;
	std::cout << "—мертельна€ доза - " << deadHuman << std::endl;
	system("pause");
}