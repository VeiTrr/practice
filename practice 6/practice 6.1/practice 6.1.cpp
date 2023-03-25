#include <iostream>
#include "Cone.h"
#include <windows.h>

using namespace std;

int main() {

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    // Создание статических объектов
    Cone cone1(5, 10); // Конус с центром в начале координат, радиусом 5 и высотой 10
    Cone cone2(2, 3, 4, 6, 8); // Произвольный конус

    // Вычисление и вывод на экран площади поверхности и объёма каждого конуса
    cout << "Конус 1 площадь поверхности: " << cone1.surfaceArea() << endl;
    cout << "Конус 1 объём: " << cone1.volume() << endl;

    cout << "Конус 2 площадь поверхности: " << cone2.surfaceArea() << endl;
    cout << "Конус 2 объём: " << cone2.volume() << endl;

    // Создание динамического объекта по умолчанию
    Cone* cone3 = new Cone();

    // Ввод данных для динамического объекта
    cone3->input();

    // Вывод на экран данных и вычисление площади поверхности и объёма
    cone3->output();
    cout << "Площадь поверхности: " << cone3->surfaceArea() << endl;
    cout << "Объём: " << cone3->volume() << endl;

    // Освобождение памяти, выделенной под динамический объект
    delete cone3;

    // Создание массива из 2 конусов
    Cone cones[2];

    // Присвоение значений массиву
    cones[0] = Cone(1, 2, 3, 4, 5);
    cones[1] = Cone(6, 7, 8, 9, 10);

    // Вывод на экран данных и вычисление площади поверхности и объёма для каждого конуса в массиве
    for (int i = 0; i < 2; i++) {
        cones[i].output();
        cout << "Площадь поверхности: " << cones[i].surfaceArea() << endl;
        cout << "Объём: " << cones[i].volume() << endl;
    }

    return 0;
}
