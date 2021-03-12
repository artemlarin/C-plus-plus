#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int number;

	cout << "Введите трехзначное число: ";
	cin >> number;

	int hundreds = number / 100; // сотни
	int dozens = number % 100 / 10; // десятки
	int units = number % 10; // единицы

	cout << "Общая сумма всех чисел в отдельности данного числа " << number;
	cout << ": " << hundreds + dozens + units << endl << endl;

	cout << "Готово!" << endl;
	cout << "Программа завершена." << endl;

	return 0;
}