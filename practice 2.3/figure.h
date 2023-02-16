#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class figure
{
private:
	float x1, x2, x3, x4;
	float y1, y2, y3, y4;
	float S;
	float P;
public:
	figure() {
        x1 = 0;
		x2 = 0;
		x3 = 0;
		x4 = 0;
		y1 = 0;
		y2 = 0;
		y3 = 0;
		y4 = 0;
		S = 0;
		P = 0;
	}
	void set(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4) {
		this->x1 = x1;
		this->x2 = x2;
		this->x3 = x3;
		this->x4 = x4;
		this->y1 = y1;
		this->y2 = y2;
		this->y3 = y3;
		this->y4 = y4;
		S = ((x1 - x3) * (y1 + y3) +
			(x2 - x4) * (y2 + y4) +
			(x3 - x4) * (y3 + y4) +
			(x4 - x1) * (y4 + y1)) / 2;
		P = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)) +
			sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2)) +
			sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2)) +
			sqrt(pow((x1 - x4), 2) + pow((y1 - y4), 2));
		}
	void show() {}
	bool is_prug() {}
	bool is_square() {}
	bool is_romb() {}
	bool is_in_circle() {}
	bool is_out_circle() {}
};

