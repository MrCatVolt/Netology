#include "hierar.h"
#include <iostream>
#include <string>

Figure::Figure() {};
Figure::Figure(std::string name, int A, int B, int C, double a, double b, double c) {};

void Figure::get_sides_count() {
    std::cout << "\n" << name << "\n";
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

void Trigl::get_sides_count() {
    std::cout << "\n" << name << "\n" <<
        "Стороны: " << "A=" << A << " B=" << B << " C=" << C << "\n" <<
        "Углы: " << "a=" << a << " b=" << b << " c=" << c << "\n";
};


regtag_Trigl::regtag_Trigl(std::string name, int A, int B, int C, double a, double b) : Trigl(name, A, B, C, a, b, 90) {};


isos_Trigl::isos_Trigl(std::string name, int A, int B, double a, double b) : Trigl(name, A, B, A, a, b, a) {};


teral_Trigl::teral_Trigl(std::string name, int A) : Trigl(name, A, A, A, 60, 60, 60) {};



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


rectangle::rectangle(std::string name, int A, int B) : Quadr::Quadr(name, A, B, A, B, 90, 90, 90, 90) {};



parallelogram::parallelogram(std::string name, int A, int B, double a, double b) : Quadr::Quadr(name, A, B, A, B, a, b, a, b) {};


rhombus::rhombus(std::string name, int A, double a, double b) :Quadr::Quadr(name, A, A, A, A, a, b, a, b) {};





