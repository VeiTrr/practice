#include <iostream>
#include "cone.h"

using namespace std;

int main() {
    Cone c1; // конус с центром в начале координат (конструктор по умолчанию)
    Cone c2(2, 3, 4, 1.5, 5); // произвольный конус

    // вычисляем и выводим площадь поверхности и объём каждого конуса
    cout << "Surface area of c1: " << c1.surfaceArea() << endl;
    cout << "Volume of c1: " << c1.volume() << endl;
    cout << "Surface area of c2: " << c2.surfaceArea() << endl;
    cout << "Volume of c2: " << c2.volume() << endl;

    // создаём динамический объект конуса и выводим его данные
    Cone* c3 = new Cone();
    c3->input();
    cout << "Data of c3:" << endl;
    c3->output();

    // создаём массив из 2-3 конусов и присваиваем им значения при создании объектов
    Cone cones[] = {
            Cone(1, 2, 3, 2.5, 4),
            Cone(1.5, 5),
            Cone(2, 4, 6, 3, 6)
    };

    // выводим данные каждого конуса из массива
    for (int i = 0; i < 3; i++) {
        cout << "Data of cone " << i+1 << ":" << endl;
        cones[i].output();
        cout << "Surface area: " << cones[i].surfaceArea() << endl;
        cout << "Volume: " << cones[i].volume() << endl;
    }

    delete c3; // освобождаем память, выделенную под динамический объект

    //pause for exit
    cout << "Press enter for exit" << endl;
    cin.get();

    return 0;
}
