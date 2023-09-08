#include <iostream>
#include <string>

#include "Trigl.h"





void Trigl::get_sides_count() {
    std::cout << "\n" << name << "\n" <<
        "Стороны: " << "A=" << A << " B=" << B << " C=" << C << "\n" <<
        "Углы: " << "a=" << a << " b=" << b << " c=" << c << "\n";
};



Trigl::Trigl(std::string name, int A, int B, int C, double a, double b, double c) {
    this->name = name;
    this->A = A;
    this->B = B;
    this->C = C;

    this->a = a;
    this->b = b;
    this->c = c;
};