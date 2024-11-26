#include "../include/circle.hpp"
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

Circle::Circle(float radius)
    : Figure(1), radius(radius) {}

Circle::~Circle() {}

float Circle::Perimeter(){
    return 2 * M_PI * radius;
}

float Circle::Area(){
    return M_PI * pow(2, radius);
}