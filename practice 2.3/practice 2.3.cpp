#include <iostream>
#include "figure.h"
using namespace std;

int main()
{
    setlocale(0, "");
    figure mas[3];
    float x1, x2, x3, x4;
    float y1, y2, y3, y4;
    for (int i = 0; i < 3; i++) {
		cout << "������� x1, x2, x3, x4, y1, y2, y3, y4 ��� ������ � " << i + 1 << " ����� ������: " << endl;
		cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
		mas[i].set(x1, x2, x3, x4, y1, y2, y3, y4);
	}
    for (int i = 0; i < 3; i++) {
        mas[i].show();
        if (mas[i].is_prug()) {
            cout << "������ � " << i + 1 << "�������� ��������������" << endl;
        }
        else {
			cout << "������ � " << i + 1 << "�� �������� ��������������" << endl;
		}
        if (mas[i].is_square()) {
            cout << "������ � " << i + 1 << "�������� ���������" << endl;
        }
        else {
			cout << "������ � " << i + 1 << "�� �������� ���������" << endl;
        }
        if (mas[i].is_romb()) {
            cout << "������ � " << i + 1 << "�������� ������" << endl;
        }
        else {
			cout << "������ � " << i + 1 << "�� �������� ������" << endl;
		}
        if (mas[i].is_in_circle()) {
            cout << "������ � " << i + 1 << "����� ���� ������� � ���������" << endl;
        }
        else {
			cout << "������ � " << i + 1 << "�� ����� ���� ������� � ����������" << endl;
		}
        if (mas[i].is_out_circle()) {
            cout << "���������� ����� ���� ������� � ������ � " << i + 1 << endl;
        }
		else {
			cout << "���������� �� ����� ���� ������� � ������ � " << i + 1 << endl;
		}
        }
    return 0;
}
