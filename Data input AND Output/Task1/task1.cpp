#include <iostream>

double one = 1.000, two = 1.414, three = 1.732, four = 2.000, five = 2.263;

void main()
{

	std::cout.setf(std::ios::fixed);
	std::cout.precision(3);
	std::cout << "N\t" << "Square Root" << std::endl;
	std::cout << "1\t" << one << std::endl;
	std::cout << "2\t" << two << std::endl;
	std::cout << "3\t" << three << std::endl;
	std::cout << "4\t" << four << std::endl;
	std::cout << "5\t" << five << std::endl;
	system("pause");
}