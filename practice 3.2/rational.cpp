#include "rational.h"
#include <iostream>
using namespace std;
rational::rational() {
	a = 1;
	b = 1;
};
rational::rational(int a1, int b1)
{
	if (b1 == 0) {
		throw invalid_argument("знаменатель не может быть равен нулю");
	}
	a = a1;
	b = b1;
	int c;
	int ta = abs(a1);
	int tb = abs(b1);

	while (ta != 0 && tb != 0) {
		if (ta > tb) {
			c = ta % tb;
			ta = tb;
			tb = c;
		}
		else {
			c = tb % ta;
			tb = ta;
			ta = c;
		}
	}
	if (ta == 0) {
		c = tb;
	}
	else {
		c = ta;
	}
	a = a / c;
	b = b / c;
};
void rational::set(int a1, int b1)
{
	if (b1 == 0) {
		throw invalid_argument("знаменатель не может быть равен нулю");
	}
	a = a1;
	b = b1;
	int c;
	int ta = abs(a1);
	int tb = abs(b1);

	while (ta != 0 && tb != 0) {
		if (ta > tb) {
			c = ta % tb;
			ta = tb;
			tb = c;
		}
		else {
			c = tb % ta;
			tb = ta;
			ta = c;
		}
	}
	if (ta == 0) {
		c = tb;
	}
	else {
		c = ta;
	}
	a = a / c;
	b = b / c;
};
void rational::show()
{
	if (b == 1) {
		cout << a << endl;
	}
	else {
		if (a == 0) {
			cout << 0 << endl;
		}
		else
			cout << a << "/" << b << endl;
	}
};
