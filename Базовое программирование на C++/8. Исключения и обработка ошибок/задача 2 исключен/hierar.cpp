#include "hierar.h"
#include <iostream>
#include <string>

Figure::Figure() {};
Figure::Figure(std::string name, int A, int B, int C, double a, double b, double c) {};

void Figure::get_sides_correct() {};

void Figure::get_sides_count() {
    std::cout << "\n" << name << "\n";
};


Trigl::Trigl(std::string name, int A, int B, int C, double a, double b, double c) {
   if ((a + b + c) != 180) {
       throw std::domain_error("\nуглы не равны 180");
   }
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


regtag_Trigl::regtag_Trigl(std::string name, int A, int B, int C, double a, double b, double d ) : Trigl(name, A, B, C, a, b, d) {
    if ((a != 90) && (b != 90) && (c != 90)) {
        throw std::domain_error("\nв прямоугольном треугольнике должен быть угол 90 градусов!");
    }
};


isos_Trigl::isos_Trigl(std::string name, int A, int B, int C, double a, double b, double d) : Trigl(name, A, B, C, a, b, d) {
    if ((A != C) || (a != c)) {
        throw std::domain_error("\nв равнобедренном треугольнике сторовны и углы a,c должны быть равны!");
    }
};


teral_Trigl::teral_Trigl(std::string name, int A, int B, int C, double a, double b, double d) : Trigl(name, A, B, C, a, b, d) {
    if ((A != C) || (A != B) || (a != 60) || (b != 60) || (c != 60)) {
    throw std::domain_error("\nв равностороннем треугольнике все стороны равны, все углы равны 60!");
}
};



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

void Quadr::get_sides_correct() {
    if ((A != C) || (A != B) ||(A !=D)|| (a != 90) || (b != 90) || (c != 90)|| (d !=90)) {
        throw std::domain_error("\nв квадрате все стороны равны, все углы равны 90!");
    }

}

void Quadr::get_sides_count() {
    std::cout << "\n" << name << "\n" <<
        "Стороны: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n" <<
        "Углы: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
}


rectangle::rectangle(std::string name, int A, int B, int C, int D, double a, double b, double c, double d) : Quadr::Quadr(name, A, B, C, D, a, b, c, d) {
    if ((A != C) || (B != D) || (a != 90) || (b != 90) || (c != 90) || (d != 90)) {
        throw std::domain_error("\nв прямоугольнике стороны a,c и b,d попарно равны, все углы равны 90!");
    }
};



parallelogram::parallelogram(std::string name, int A, int B, int C, int D, double a, double b, double c, double d) : Quadr::Quadr(name, A, B, C, D, a, b, c, d) {
    if ((A != C) || (B != D) || (a != c) || (b != d)) {
        throw std::domain_error("\nв параллелограмме стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны!");
    }
};


rhombus::rhombus(std::string name, int A, int B, int C, int D, double a, double b, double c, double d) :Quadr::Quadr(name, A, B, C, D, a, b, c, d) {
    if ((A != C) || (A != B) || (A != D) || (a != c) || (b != d)) {
        throw std::domain_error("\nв ромбе все стороны равны, углы A,C и B,D попарно равны!");
    }
};





