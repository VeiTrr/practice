#include <iostream>
#include <cmath>
#include "cone.h"

using namespace std;

const double PI = 3.14159265358979323846;

// конструктор по умолчанию
Cone::Cone() : x(0), y(0), z(0), r(0), h(0) {}

// конструктор произвольного конуса
Cone::Cone(double x, double y, double z, double r, double h)
        : x(x), y(y), z(z), r(r), h(h) {}

// конструктор конуса с центром в начале координат
Cone::Cone(double r, double h) : x(0), y(0), z(0), r(r), h(h) {}

// метод ввода данных
void Cone::input() {
    cout << "Enter the coordinates of the base center (x, y, z): ";
    cin >> x >> y >> z;
    cout << "Enter the radius of the base: ";
    cin >> r;
    cout << "Enter the height of the cone: ";
    cin >> h;
}

// метод вывода данных
void Cone::output() const {
    cout << "Base center: (" << x << ", " << y << ", " << z << ")" << endl;
    cout << "Radius of the base: " << r << endl;
    cout << "Height of the cone: " << h << endl;
}

// метод вычисления площади поверхности
double Cone::surfaceArea() const {
    double l = sqrt(r*r + h*h); // образующая
    return PI*r*l + PI*r*r;
}

// метод вычисления объёма
double Cone::volume() const {
    return PI*r*r*h/3;
}
