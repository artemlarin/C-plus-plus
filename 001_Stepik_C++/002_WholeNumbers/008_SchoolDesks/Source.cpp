#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int firstMathClass;
	int secondMathClass;
	int thirdMathClass;

	cout << "Введите количество учеников в первом математическом классе: ";
	cin >> firstMathClass;
	cout << "Введите количество учеников во втором математическом классе: ";
	cin >> secondMathClass;
	cout << "Введите количество учеников в третьем математическом классе: ";
	cin >> thirdMathClass;

	/* Рассчитываем колличество парт для каждого класса по отдельности */
	int firstAmount = (firstMathClass + 1) / 2;
	int secondAmount = (secondMathClass + 1) / 2;
	int thirdAmount = (thirdMathClass + 1) / 2;

	/* общее количество парт */
	int totalNumberOfDesks = firstAmount + secondAmount + thirdAmount;

	cout << endl << "Количество парт, которое нужно преобрести для 3-х классов состовляет: ";
	cout << totalNumberOfDesks << endl << endl;

	cout << "Готово!" << endl;
	cout << "Программа завершена." << endl;

	return 0;
}