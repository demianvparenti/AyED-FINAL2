#include <iostream>
using namespace std;
#include "include/figure.hpp"
#include "include/circle.hpp"
#include "include/square.hpp"

int main(){
    // Create some circle and square objects
    Circle* circle1 = new Circle(1);
    Circle* circle2 = new Circle(2);
    Square* square1 = new Square(3);
    Square* square2 = new Square(4);
    Square* square3 = new Square(5);

    // Try to add another figure to see what happens when it's full
    Circle* circle3 = new Circle(6);

    // Clean up dynamic memory
    delete circle1;
    delete circle2;
    delete square1;
    delete square2;
    delete square3;

    return 0;
}