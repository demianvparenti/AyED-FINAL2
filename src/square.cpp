#include "../include/square.hpp"
#include <iostream>
#include <cmath>
using namespace std;

Square::Square(float side)
    : Figure(1), side(side) {}

Square::~Square() {}

float Square::Perimeter(){
    return 4 * side;
}

float Square::Area(){
    return pow(2, side);
}