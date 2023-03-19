#ifndef PRACTICE_CONE_H
#define PRACTICE_CONE_H


class cone {
private:
    double radius;
    double height;
    double x,y,z;

public:
    cone();
    cone(double radius, double height);
    cone(double x, double y, double z, double radius, double height);
    double getVolume();
    double getSurfaceArea();
    void print();
};


#endif //PRACTICE_CONE_H
