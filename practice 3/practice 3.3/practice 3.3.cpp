
#include "rational.h"
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	setlocale(0, "");
	int n;
	int	a, b;

	cout << "введите количество элементов: " << endl;
	cin >> n;
	rational* r = new rational[n];

	for (int i = 0; i < n; i++)
	{
		cout << "введите числитель и знаменатель: " << endl;
		cin >> a >> b;
		try {
			r[i].set(a, b);
		}
		catch (invalid_argument& e) {
			cout << e.what() << endl;
			i--;
		}
	}
	rational tr(0, 1);
	for (int i = 0; i < n; i++)
	{
		cout << "дробь " << i + 1 << ": ";
		r[i].show();
		tr = tr + r[i];
	}
	cout << "сумма всех дробей: ";
	tr.show();
	cout << endl;
	cout << "дробь 1 - дробь 2: ";
	tr = r[0].operator-(r[1]);
	tr.show();
	cout << endl;
	cout << "инкремент: " << endl << "дробь до: ";
	r[0].show();
	r[0].operator++();
	cout << "дробь после: ";
	r[0].show();
	cout << endl;
	cout << "сравнение: " << endl;
	if (r[0].operator==(r[1])) {
		cout << "дроби 1 и 2 равны" << endl;
	}
	else {
		cout << "дроби 1 и 2 не равны" << endl;
	}

	if (r[0].operator>(r[1])) {
		cout << "дробь 1 больше дроби 2" << endl;
	}
	else {
		cout << "дробь 1 не больше дроби 2" << endl;
	}

	delete[] r;
	return 0;
}