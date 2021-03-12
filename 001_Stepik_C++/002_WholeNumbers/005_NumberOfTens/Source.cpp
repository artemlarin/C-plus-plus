#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int number;

	cout << "Введите положительное число: ";
	cin >> number;

	cout << "Число десятков в числе " << number;
	cout << ": " << number % 100 / 10 << endl;

	cout << endl << "Готово!" << endl;
	cout << "Программа завершена." << endl;

	return 0;
}