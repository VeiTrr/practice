
#include "rational.h"
#include <iostream>
#include <cmath>
using namespace std;

int od(int a1, int b1) {
	int c;
	while (a1 != 0 && b1 != 0) {
		if (a1 > b1) {
			c = a1 % b1;
			a1 = b1;
			b1 = c;
		}
		else {
			c = b1 % a1;
			b1 = a1;
			a1 = c;
		}
	}
	if (a1 == 0) {
		return b1;
	}
	else {
		return a1;
	}
}

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
		if (b == 0)
		{
			cout << "знаменатель не может быть равен нулю" << endl;
		}
		else {
			if (b == 1) {
				r[i].set(a, b);
			}
			else {
				if (a > b && a % b != 0) {
					a = a - b;
					if (od(a, b) == 1) {
						r[i].set(a, b);
					}
					else {
						while (od(a, b) != 1) {
							int c = od(a, b);
							a = a / c;
							b = b / c;
						}
						r[i].set(a, b);
					}
				}
				else {
					if (od(a, b) == 1) {
						r[i].set(a, b);
					}
					else {
						while (od(a, b) != 1) {
							int c = od(a, b);
							a = a / c;
							b = b / c;
						}
						r[i].set(a, b);
					}
				}
			}
		}
	}
	rational r1(0, 1);
	for (int i = 0; i < n; i++)
	{
		r[i].show();
		r1 = r1 + r[i];
	}
	cout << "сумма всех дробей: ";
	r1.show();
	cout << endl;
	cout << "дробь 1 - дробь 2: ";
	r1 = r[0].operator-(r[1]);
	r1.show();
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