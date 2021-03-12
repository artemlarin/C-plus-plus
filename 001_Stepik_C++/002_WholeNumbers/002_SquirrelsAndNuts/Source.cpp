#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int squirrel, nut, remainder;

	cout << "Введите количество белок: ";
	cin >> squirrel;

	cout << "Введите количество орешек найдеными белками: ";
	cin >> nut;

	remainder = nut % squirrel;

	cout << endl << remainder;
	cout << " Орешков останется после того, как все белочки возьмут себе равное количество орешков." << endl << endl;

	cout << "Готово!" << endl;
	cout << "Программа завершена." << endl;

	return 0;
}