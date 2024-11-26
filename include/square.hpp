#pragma once
#include <string>
using namespace std;
#include "figure.hpp"

class Square : public Figure{
    protected:
    float side;
    
    public:
    Square(float);
    ~Square();
    float Perimeter() override;
    float Area() override;};