#include "cone.h"
#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    cone c1;
    cone c2(4, 5);
    cone c3(1, 2, 3, 4, 5);
    c1.print();
    c2.print();
    c3.print();
    //pause for exit
    std::cout << "Press any key to exit...";
    std::cin.get();
    return 0;
}