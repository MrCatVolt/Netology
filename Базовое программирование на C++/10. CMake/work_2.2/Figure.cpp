#include <iostream>
#include <string>

#include "Figure.h"


Figure::Figure() {};
Figure::Figure(std::string name, int A, int B, int C, double a, double b, double c) {};

void Figure::get_sides_count() {
    std::cout << "\n" << name << "\n";
};