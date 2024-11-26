#pragma once
#include <string>
using namespace std;

class Figure{
    protected:
    float x;

    public:
    Figure(float x);
    virtual ~Figure();
    virtual float Perimeter() = 0;
    virtual float Area() = 0;};