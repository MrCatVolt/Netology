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
       throw std::domain_error("\n���� �� ����� 180");
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
        "�������: " << "A=" << A << " B=" << B << " C=" << C << "\n" <<
        "����: " << "a=" << a << " b=" << b << " c=" << c << "\n";
};


regtag_Trigl::regtag_Trigl(std::string name, int A, int B, int C, double a, double b, double d ) : Trigl(name, A, B, C, a, b, d) {
    if ((a != 90) && (b != 90) && (c != 90)) {
        throw std::domain_error("\n� ������������� ������������ ������ ���� ���� 90 ��������!");
    }
};


isos_Trigl::isos_Trigl(std::string name, int A, int B, int C, double a, double b, double d) : Trigl(name, A, B, C, a, b, d) {
    if ((A != C) || (a != c)) {
        throw std::domain_error("\n� �������������� ������������ �������� � ���� a,c ������ ���� �����!");
    }
};


teral_Trigl::teral_Trigl(std::string name, int A, int B, int C, double a, double b, double d) : Trigl(name, A, B, C, a, b, d) {
    if ((A != C) || (A != B) || (a != 60) || (b != 60) || (c != 60)) {
    throw std::domain_error("\n� �������������� ������������ ��� ������� �����, ��� ���� ����� 60!");
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
        throw std::domain_error("\n� �������� ��� ������� �����, ��� ���� ����� 90!");
    }

}

void Quadr::get_sides_count() {
    std::cout << "\n" << name << "\n" <<
        "�������: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n" <<
        "����: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
}


rectangle::rectangle(std::string name, int A, int B, int C, int D, double a, double b, double c, double d) : Quadr::Quadr(name, A, B, C, D, a, b, c, d) {
    if ((A != C) || (B != D) || (a != 90) || (b != 90) || (c != 90) || (d != 90)) {
        throw std::domain_error("\n� �������������� ������� a,c � b,d ������� �����, ��� ���� ����� 90!");
    }
};



parallelogram::parallelogram(std::string name, int A, int B, int C, int D, double a, double b, double c, double d) : Quadr::Quadr(name, A, B, C, D, a, b, c, d) {
    if ((A != C) || (B != D) || (a != c) || (b != d)) {
        throw std::domain_error("\n� ��������������� ������� a,c � b,d ������� �����, ���� A,C � B,D ������� �����!");
    }
};


rhombus::rhombus(std::string name, int A, int B, int C, int D, double a, double b, double c, double d) :Quadr::Quadr(name, A, B, C, D, a, b, c, d) {
    if ((A != C) || (A != B) || (A != D) || (a != c) || (b != d)) {
        throw std::domain_error("\n� ����� ��� ������� �����, ���� A,C � B,D ������� �����!");
    }
};





