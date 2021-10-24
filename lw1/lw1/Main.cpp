#include <iostream>
#include <cmath>

using namespace std;




//Линейные программы
void Task1()
{
	cout << " " << endl;
	cout << "Старт программы Task1" << endl;
	const double PI = 3.14159265358979323846;
	const double a = 12.;

	double y = 2. * pow(sin(3. * PI - 2. * a), 2.) * pow(cos(5. * PI + 2. * a), 2.);
	double z = 0.25 - 0.25 * sin(2.5 * PI - 8. * a);

	cout << y << endl;
	cout << z << endl;

	system("pause");

	system("pause");
}


//Вычисление расстояния между населенными пунктами и время движения автомобиля.
void Task2()
{
	int mapSize = 120, speedCar = 80;
	double distance = 3.5;
	cout << " " << endl;
	cout << "Старт программы Task2" << endl;
	cout << "Вычисление расстояния между населенными пунктами и время движения автомобиля." << endl;
	cout << " " << endl;

	cout << "Масштаб карты (количество километров в одном сантиметре - ";
	cin >> mapSize;
	cout << " " << endl;

	cout << "Расстояние между точками, изображающими населенные пункты (см) - ";
	cin >> distance;
	cout << " " << endl;

	cout << "Скорость автомобиля (км/ч) - ";
	cin >> speedCar;

	double countDistance = mapSize * distance;
	int time = countDistance / speedCar * 3600;
	int h = time / 3600;
	int min = time / 60 - h * 60;



	std::cout.setf(std::ios::fixed);
	std::cout.precision(2);
	cout << "Время движения автомобиля " << h << " ч. " << min << " мин., при скорости движения автомобиля " << speedCar << " км/ч " << endl;
	system("pause");
}

//1.Составить программу вычисления значения функции F(x, y), где x, y вводятся с клавиатуры, а величины а и b являются константами.
void Task3()
{

	cout << " " << endl;
	cout << "Старт программы Task3" << endl;
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

	cout << "Выберите задание" << endl;

	cout << "1\t" << "Задание\t" << "Программа для расчета по двум формулам." << endl;
	cout << "2\t" << "Задание\t" << "Вычисление расстояния между населенными пунктами" <<  endl;
	cout << "3\t" << "Задание\t" << "Вычисление значения функции F(x,y)" << endl;

	cout << "Нажмите цифру и Enter ";
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
		cout << "ОШИБКА" << endl;
		main();
		break;
	}

	return 0;
}




