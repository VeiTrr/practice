#ifndef PRACTICE_CONE_H
#define PRACTICE_CONE_H


class cone {
protected:
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

class TruncatedCone : public cone {
private:
    double radius2;
public:
    TruncatedCone();
    TruncatedCone(double radius, double radius2, double height);
    TruncatedCone(double x, double y, double z, double radius, double radius2, double height);
    double getVolume();
    double getSurfaceArea();
    void print();
};


#endif //PRACTICE_CONE_H
