#pragma once
#include <string>
using namespace std;
#include "figure.hpp"

class Circle : public Figure{
    protected:
    float radius;
    
    public:
    Circle(float);
    ~Circle();
    float Perimeter() override;
    float Area() override;};