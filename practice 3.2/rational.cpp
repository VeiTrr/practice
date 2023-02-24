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
