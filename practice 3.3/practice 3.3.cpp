
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
	for (int i = 0; i < n; i++)
	{
		r[i].show();
	}
	delete[] r;
	return 0;
}