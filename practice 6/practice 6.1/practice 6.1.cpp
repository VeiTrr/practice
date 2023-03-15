#include "cone.h"
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    cone c1;
    cone c2(4, 5);
    cone c3(1, 2, 3, 4, 5);
    c1.print();
    c2.print();
    c3.print();
    return 0;
}