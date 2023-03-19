#include "cone.h"
#include <cmath>
#include <iostream>

cone::cone()
{
    radius = 0;
    height = 0;
    x = 0;
    y = 0;
    z = 0;
}

cone::cone(double radius, double height)
{
    this->radius = radius;
    this->height = height;
    x = 0;
    y = 0;
    z = 0;
}

cone::cone(double x, double y, double z, double radius, double height)
{
    this->radius = radius;
    this->height = height;
    this->x = x;
    this->y = y;
    this->z = z;
}

double cone::getVolume()
{
    return 3.14 * radius * radius * height / 3;
}

double cone::getSurfaceArea()
{
    return 3.14 * radius * (radius + sqrt(height * height + radius * radius));
}

void cone::print()
{
    std::cout << "Координаты центра основания: (" << x << ", " << y << ", " << z << ")" << std::endl;
    std::cout << "Радиус основания: " << radius << std::endl;
    std::cout << "Высота: " << height << std::endl;
    std::cout << "Объем: " << getVolume() << std::endl;
    std::cout << "Площадь поверхности: " << getSurfaceArea() << std::endl;
    std::cout << "" << std::endl;
}

