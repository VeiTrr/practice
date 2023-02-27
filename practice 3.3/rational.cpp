#include "rational.h"
#include <iostream>
using namespace std;


rational::rational() {
	a = 1;
	b = 1;
};
rational::rational(int a1, int b1)
{
	a = a1;
	b = b1;
};
void rational::set(int a1, int b1)
{
	a = a1;
	b = b1;
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