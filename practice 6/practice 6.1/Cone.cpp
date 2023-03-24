#include "Cone.h"
#include <iostream>
#include <cmath>

using namespace std;

// Конструктор по умолчанию
Cone::Cone() : x(0), y(0), z(0), r(0), h(0) {}

// Конструктор конуса с центром в начале координат
Cone::Cone(double r, double h) : x(0), y(0), z(0), r(r), h(h) {}

// Конструктор произвольного конуса
Cone::Cone(double x, double y, double z, double r, double h) : x(x), y(y), z(z), r(r), h(h) {}

// Метод ввода данных
void Cone::input() {
    cout << "Введите координаты центра основания (x y z): ";
    cin >> x >> y >> z;
    cout << "Введите радиус основания: ";
    cin >> r;
    cout << "Введите высоту: ";
    cin >> h;
}

// Метод вывода данных
void Cone::output() const {
    cout << "Координаты центра основания: (" << x << ", " << y << ", " << z << ")" << endl;
    cout << "Радиус основания: " << r << endl;
    cout << "Высота: " << h << endl;
}

// Метод вычисления площади поверхности
double Cone::surfaceArea() const {
    double L = sqrt(pow(r, 2) + pow(h, 2)); // Длина образующей
    return M_PI * r * L + M_PI * pow(r, 2); // Площадь поверхности
}

// Метод вычисления объёма
double Cone::volume() const {
    return M_PI * pow(r, 2) * h / 3; // Объём
}

