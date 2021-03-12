#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int enteringRubles;
	int inputOfKopecks;
	int pies;

	cout << "Введите цену одного пирожка в столовой." << endl;
	cout << "Введите количество рублей: ";
	cin >> enteringRubles;
	cout << "Введите количество копеек: ";
	cin >> inputOfKopecks;
	cout << "Сколько пирожков вы хотите купить: ";
	cin >> pies;

	/* расчет рублей и копеек */
	int rubles = pies * enteringRubles;
	int penny = pies * inputOfKopecks;

	/* общая сумма по рублям и копейкам */
	int amountInRubles = penny / 100 + rubles;
	int amountByKopecks = penny % 100;

	cout << endl << "За " << pies << " пирожка Вам нужно заплатить: ";
	cout << amountInRubles << " руб. " << amountByKopecks << " коп." << endl << endl;

	/* Короткая форма записи */
	/*enteringRubles = enteringRubles * pies;
	inputOfKopecks = inputOfKopecks * pies;
	cout << enteringRubles + inputOfKopecks / 100 << " " << inputOfKopecks % 100 << endl << endl;*/

	cout << "Готово!" << endl;
	cout << "Программа завершена." << endl << endl;

	return 0;
}