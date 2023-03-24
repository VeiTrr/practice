#ifndef CONE_H
#define CONE_H

class Cone {
public:
    Cone(); // конструктор по умолчанию
    Cone(double x, double y, double z, double r, double h); // конструктор произвольного конуса
    Cone(double r, double h); // конструктор конуса с центром в начале координат

    void input(); // метод ввода данных
    void output() const; // метод вывода данных
    double surfaceArea() const; // метод вычисления площади поверхности
    double volume() const; // метод вычисления объёма

private:
    double x, y, z; // координаты центра основания
    double r; // радиус основания
    double h; // высота
};

#endif // CONE_H
