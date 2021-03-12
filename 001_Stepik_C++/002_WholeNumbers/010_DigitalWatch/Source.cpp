#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int seconds;

	cout << "Введите колличество секунд: ";
	cin >> seconds;

	cout << endl;

	int hour = seconds / 3600 % 24; /* часы */
	int minute = seconds / 60 % 60; /* минуты */
	int second = seconds % 60; /* секунды */

	/* вывод времени в формате h:mm:ss */
	cout << "Преобразованные секунды в стандартный формат времени: ";
	cout << hour;
	cout << ":";
	cout << minute / 10 << minute % 10;
	cout << ":";
	cout << second / 10 << second % 10 << endl << endl;

	cout << "Готово!" << endl;
	cout << "Программа завершена." << endl;

	return 0;
}