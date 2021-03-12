#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int number;

	cout << "Введите число: ";
	cin >> number;

	cout << "Последняя цифра числа " << number;
	cout << " это: " << number % 10 << endl << endl;

	cout << "Готово!" << endl;
	cout << "Программа завершена." << endl;

	return 0;
}