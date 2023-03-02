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
		cout << "Введите x1, x2, x3, x4, y1, y2, y3, y4 для фигуры № " << i + 1 << " через пробел: " << endl;
		cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
		mas[i].set(x1, x2, x3, x4, y1, y2, y3, y4);
	}
    for (int i = 0; i < 3; i++) {
        mas[i].show();
        if (mas[i].is_prug()) {
            cout << "фигура № " << i + 1 << "является прямоуголником" << endl;
        }
        else {
			cout << "фигура № " << i + 1 << "не является прямоуголником" << endl;
		}
        if (mas[i].is_square()) {
            cout << "фигура № " << i + 1 << "является квадратом" << endl;
        }
        else {
			cout << "фигура № " << i + 1 << "не является квадратом" << endl;
        }
        if (mas[i].is_romb()) {
            cout << "фигура № " << i + 1 << "является ромбом" << endl;
        }
        else {
			cout << "фигура № " << i + 1 << "не является ромбом" << endl;
		}
        if (mas[i].is_in_circle()) {
            cout << "фигура № " << i + 1 << "может быть вписана в окружноть" << endl;
        }
        else {
			cout << "фигура № " << i + 1 << "не может быть вписана в окружность" << endl;
		}
        if (mas[i].is_out_circle()) {
            cout << "окружность может быть вписана в фигуру № " << i + 1 << endl;
        }
		else {
			cout << "окружность не может быть вписана в фигуру № " << i + 1 << endl;
		}
        }
    return 0;
}
