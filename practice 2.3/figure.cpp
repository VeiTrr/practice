#include "figure.h"
#include <cmath>

void figure::show() {
    float a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    float b = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    float c = sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2));
    float d = sqrt(pow((x1 - x4), 2) + pow((y1 - y4), 2));
    cout << "Координаты точек: " << endl;
    cout << "1 : (" << x1 << ";" << y1 << ")" << endl;
    cout << "2 : (" << x2 << ";" << y2 << ")" << endl;
    cout << "3 : (" << x3 << ";" << y3 << ")" << endl;
    cout << "4 : (" << x4 << ";" << y4 << ")" << endl;
    cout << "1 сторона: " << a << endl;
    cout << "2 сторона: " << b << endl;
    cout << "3 сторона: " << c << endl;
    cout << "4 сторона: " << d << endl;
    cout << "Периметр: " << P << endl;
    cout << "Площадь: " << S << endl;
}

bool figure::is_prug() {
  float angle1 = acos((pow((x2 - x1), 2) + pow((y2 - y1), 2) - pow((x3 - x2), 2) - pow((y3 - y2), 2)) / (2 * sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)) * sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2))));
  float angle2 = acos((pow((x3 - x2), 2) + pow((y3 - y2), 2) - pow((x4 - x3), 2) - pow((y4 - y3), 2)) / (2 * sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2)) * sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2))));
  float angle3 = acos((pow((x4 - x3), 2) + pow((y4 - y3), 2) - pow((x1 - x4), 2) - pow((y1 - y4), 2)) / (2 * sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2)) * sqrt(pow((x1 - x4), 2) + pow((y1 - y4), 2))));
  float angle4 = acos((pow((x1 - x4), 2) + pow((y1 - y4), 2) - pow((x2 - x1), 2) - pow((y2 - y1), 2)) / (2 * sqrt(pow((x1 - x4), 2) + pow((y1 - y4), 2)) * sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2))));
  if (angle1 == angle2 && angle2 == angle3 && angle3 == angle4) {
      return true;
  }
  else {
      return false;
  }
}

bool figure::is_square() {
    float a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	float b = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
	float c = sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2));
	float d = sqrt(pow((x1 - x4), 2) + pow((y1 - y4), 2));
	if (a == b && b == c && c == d) {
		return true;
	}
    else {
        return false;
    }

}

bool figure::is_romb() {
    float a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    float b = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    float c = sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2));
    float d = sqrt(pow((x1 - x4), 2) + pow((y1 - y4), 2));
    if (a == b && b == c && c == d) {
        return true;
    }
    else {
        return false;
    }
}

bool figure::is_in_circle() {
    float angle1 = acos((pow((x2 - x1), 2) + pow((y2 - y1), 2) - pow((x3 - x2), 2) - pow((y3 - y2), 2)) / (2 * sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)) * sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2))));
    float angle2 = acos((pow((x3 - x2), 2) + pow((y3 - y2), 2) - pow((x4 - x3), 2) - pow((y4 - y3), 2)) / (2 * sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2)) * sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2))));
    float angle3 = acos((pow((x4 - x3), 2) + pow((y4 - y3), 2) - pow((x1 - x4), 2) - pow((y1 - y4), 2)) / (2 * sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2)) * sqrt(pow((x1 - x4), 2) + pow((y1 - y4), 2))));
    float angle4 = acos((pow((x1 - x4), 2) + pow((y1 - y4), 2) - pow((x2 - x1), 2) - pow((y2 - y1), 2)) / (2 * sqrt(pow((x1 - x4), 2) + pow((y1 - y4), 2)) * sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2))));
    if ((angle1 == angle3) && (angle2 == angle4)) {
		return true;
	}
	else {
		return false;
	}
}

bool figure::is_out_circle() {
    float a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    float b = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    float c = sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2));
    float d = sqrt(pow((x1 - x4), 2) + pow((y1 - y4), 2));
    if ((a + b == c + d) || (a + d == b + c)) {
		return true;
	}
    else {
		return false;
	}

}
