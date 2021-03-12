#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int squirrel, nut, quantity;

	cout << "Введите количество белок: ";
	cin >> squirrel;

	cout << "Введите количество орешек найдеными белками: ";
	cin >> nut;

	quantity = nut / squirrel;

	cout << "\nКаждой белочке достанется по " << quantity << " орешков." << endl << endl;

	cout << "Готово!" << endl;
	cout << "Программа завершена." << endl;

	return 0;
}