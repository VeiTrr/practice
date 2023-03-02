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

rational rational::operator + (rational r1)
{
	if (b != r1.b) {
	return rational(a * r1.b + b * r1.a, b * r1.b);
	}
	else {
		return rational(a + r1.a, b);
	}
};

rational rational::operator - (rational r1)
{
	if (b != r1.b) {
		return rational(a * r1.b - b * r1.a, b * r1.b);
	}
	else {
		return rational(a - r1.a, b);
	}
};

rational rational::operator ++ ()
{
	a = a + 1;
	return rational(a, b);
};

bool rational::operator == (rational r1)
{
	if (a * r1.b == a * r1.b) {
		return true;
	}
	else {
		return false;
	}
};

bool rational::operator > (rational r1)
{
	if (a * r1.b > a * r1.b ) {
		return true;
	}
	else {
		return false;
	}
};

rational rational::operator = (rational r1)
{
	a = r1.a;
	b = r1.b;
	return rational(a, b);
};