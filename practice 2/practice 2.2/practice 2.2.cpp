#include <iostream>
#include "circle.h"
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    circle mas[3];
    float r, x, y;
    float a, b, c;
    for (int i = 0; i < 3; i++) {
        cout << "Введите r, x и y для окружности № " << i + 1 << " через пробел: " << endl;
        cin >> r >> x >> y;
        mas[i].set_circle(r, x, y);
        for (int i = 0; i < 3; i++) {

            cout << "Площадь окружности № " << i + 1 << ": " << mas[i].square() << endl;
            cout << "Введите a, b и c для проверки можно ли описать окружность № " << i + 1 << " вокруг треугольника с этими сторонами через пробел: " << endl;
            cin >> a >> b >> c;
            if (mas[i].triangle_around(a, b, c)) {
                cout << "Окружность № " << i + 1 << " можно описать вокруг треугольника с такими сторонами" << endl;
            }
            else {
                cout << "Окружность № " << i + 1 << " нельзя описать вокруг треугольника с такими сторонами" << endl;
            }
            cout << "Введите a, b и c для проверки можно ли вписать окружность № " << i + 1 << " в треугольник с этими сторонами через пробел: " << endl;
            cin >> a >> b >> c;
            if (mas[i].triangle_in(a, b, c)) {
                cout << "Окружность № " << i + 1 << " можно вписать в треугольник с такими сторонами" << endl;
            }
            else
            {
                cout << "Окружность № " << i + 1 << " нельзя вписать в треугольник с такими сторонами" << endl;
            }
            cout << "Введите r, x и y для проверки пересечения окружности № " << i + 1 << "с окружностью с такими параметрами через пробел: " << endl;
            cin >> r >> x >> y;
            if (mas[i].check_circle(r, x, y)) {
                cout << "Окружности пересекаются" << endl;
            }
            else {
                cout << "Окружности не пересекаются" << endl;
            }
            return 0;
        }
    }
}