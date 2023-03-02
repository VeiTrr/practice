
#include "rational.h"
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	setlocale(0, "");
	int n;
	int	a, b;

	cout << "������� ���������� ���������: " << endl;
	cin >> n;
	rational* r = new rational[n];

	for (int i = 0; i < n; i++)
	{
		cout << "������� ��������� � �����������: " << endl;
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
		cout << "����� " << i + 1 << ": ";
		r[i].show();
		tr = tr + r[i];
	}
	cout << "����� ���� ������: ";
	tr.show();
	cout << endl;
	cout << "����� 1 - ����� 2: ";
	tr = r[0].operator-(r[1]);
	tr.show();
	cout << endl;
	cout << "���������: " << endl << "����� ��: ";
	r[0].show();
	r[0].operator++();
	cout << "����� �����: ";
	r[0].show();
	cout << endl;
	cout << "���������: " << endl;
	if (r[0].operator==(r[1])) {
		cout << "����� 1 � 2 �����" << endl;
	}
	else {
		cout << "����� 1 � 2 �� �����" << endl;
	}

	if (r[0].operator>(r[1])) {
		cout << "����� 1 ������ ����� 2" << endl;
	}
	else {
		cout << "����� 1 �� ������ ����� 2" << endl;
	}

	delete[] r;
	return 0;
}