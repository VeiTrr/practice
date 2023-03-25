#ifndef CONE_H
#define CONE_H

class Cone {
private:
    double x, y, z; // координаты центра основания
    double r; // радиус основания
    double h; // высота

public:
    Cone(); // конструктор по умолчанию
    Cone(double r, double h); // конструктор конуса с центром в начале координат
    Cone(double x, double y, double z, double r, double h); // конструктор произвольного конуса

    void input(); // метод ввода данных
    void output() const; // метод вывода данных
    double surfaceArea() const; // метод вычисления площади поверхности
    double volume() const; // метод вычисления объёма
};

#endif // CONE_H
