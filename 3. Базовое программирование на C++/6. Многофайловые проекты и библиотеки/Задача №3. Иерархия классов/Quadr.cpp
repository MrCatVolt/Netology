#include <iostream>
#include <string>


#include "Quadr.h"




Quadr::Quadr(std::string name, int A, int B, int C, int D, double a, double b, double c, double d) {
    this->name = name;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;

    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
};


void Quadr::get_sides_count() {
    std::cout << "\n" << name << "\n" <<
        "Стороны: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n" <<
        "Углы: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
}