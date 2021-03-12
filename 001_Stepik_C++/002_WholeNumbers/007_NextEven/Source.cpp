#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int number;

	cout << "Введите целое положительное число: ";
	cin >> number;

	cout << "Следующее четное число за " << number;
	cout << ": " << number / 2 * 2 + 2 << endl << endl;
	//cout << ": " << (number / 2 + 1) * 2 << endl << endl;

	cout << "Готово!" << endl;
	cout << "Программа завершена." << endl << endl;

	return 0;
}