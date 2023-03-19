#include "cone.h"
#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    static cone cone1(4,5);
    static cone cone2(3,2,3,3,3);
    cone c3;

    std::cout << "статические объекты:" << std::endl;
    cone1.print();
    cone2.print();

    std::cout << "динамический объект:" << std::endl;
    c3.print();

    std::cout << "массив объектов:" << std::endl;
    cone mas[3] = { cone(), cone(4, 5), cone(1, 2, 3, 4, 5) };
    for (int i = 0; i < 3; i++) {
        mas[i].print();
    }

    //pause for exit
    std::cout << "Press enter to exit...";
    std::cin.get();
    return 0;
}