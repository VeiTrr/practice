
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
	for (int i = 0; i < n; i++)
	{
		r[i].show();
	}
	delete[] r;
	return 0;
}