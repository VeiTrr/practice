#include "circle.h"


circle::circle() {
	radius = 0;
	x_center = 0;
	y_center = 0;
}
void circle::set_circle(float r, float x, float y) {
    radius = r;
    x_center = x;
    y_center = y;
}
float circle::square() {
    return 3.14 * radius * radius;
}
bool circle::triangle_around(float
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
bool circle::triangle_in(float a,
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
bool circle::check_circle(float r,
    float x_cntr, float y_cntr) {
    float l = sqrt((x_cntr - x_center) * (x_cntr - x_center) + (y_cntr - y_center) * (y_cntr - y_center));
    if ((radius + r >= l && radius + l >= r && r + l >= radius) || (l == 0 && radius == r)) {
        return true;
    }
    else
    {
        return false;
    }
};