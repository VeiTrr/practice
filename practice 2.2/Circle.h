#include <math.h>
#include <iostream>
using namespace std;
class Circle
{
private:
    float radius, x_center, y_center;

public:
    void circle(float r, float x, float y) {
        radius = r;
        x_center = x;
        y_center = y;
    }
    void set_circle(float r, float x, float y) {
        radius = r;
        x_center = x;
        y_center = y;
    }
    float square() {
        return 3.14 * radius * radius;
    }
    bool triangle_around(float
        a, float b, float c) {
        float p = (a + b + c) / 2;
        float s = sqrt(p * (p - a) * (p - b) * (p - c));
        if (s < square()) {
            return true;
        }
        else {
            return false;
        }
    }
    bool triangle_in(float a,
        float b, float c) {
        float p = (a + b + c) / 2;
        float s = sqrt(p * (p - a) * (p - b) * (p - c));
        if (s > square()) {
            return true;
        }
        else
        {
            return false;
        }

    }
    bool check_circle(float r,
        float x_cntr, float y_cntr) {
        float l = sqrt((x_cntr - x_center) * (x_cntr - x_center) + (y_cntr - y_center) * (y_cntr - y_center));
        if ((radius + r >= l && radius + l >= r && r + l >= radius)||(l == 0 && radius == r)) {
            return true;
        }
        else
        {
            return false;
        }

    };
};


