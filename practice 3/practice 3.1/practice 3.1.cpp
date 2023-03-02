#include <iostream>
#include <cmath>
#include "eq2.h"
using namespace std;

int main()
{
    setlocale(0, "");
    double a, b, c;
    double a2, b2, c2;
    cout << "Введите коэффициенты a, b, c: ";
    cin >> a >> b >> c;
    eq2 exmpl(a, b, c);
    exmpl.find_X();
    cout << exmpl.find_Y(6);
    cout << "Введите коэффициенты a, b, c для второго уравнения: ";
    cin >> a2 >> b2 >> c2;
    eq2 exmpl2(a2, b2, c2);
    eq2 exmpl3 = exmpl + exmpl2;
    return 0;
}