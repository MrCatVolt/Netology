#include <iostream>
#include <string>
#include "hierar.h"

/*class Figure {

protected:
    std::string name;
    int A, B, C, D;
    double a, b, c, d;

public:
    Figure() {};
    Figure(std::string name, int A, int B, int C, double a, double b, double c) {};

    virtual void get_sides_count() {
        std::cout << "\n" << name << "\n";
    }
};


class Trigl :public Figure
{
public:
    Trigl(std::string name, int A, int B, int C, double a, double b, double c) {
        this->name = name;
        this->A = A;
        this->B = B;
        this->C = C;

        this->a = a;
        this->b = b;
        this->c = c;
    }

    void get_sides_count() override {
        std::cout << "\n" << name << "\n" <<
            "Стороны: " << "A=" << A << " B=" << B << " C=" << C << "\n" <<
            "Углы: " << "a=" << a << " b=" << b << " c=" << c << "\n";
    }

};


class regtag_Trigl : public Trigl {
public:
    regtag_Trigl(std::string name, int A, int B, int C, double a, double b) : Trigl(name, A, B, C, a, b, 90) {}
};

class isos_Trigl : public Trigl {
public:
    isos_Trigl(std::string name, int A, int B, double a, double b) : Trigl(name, A, B, A, a, b, a) {}
};

class teral_Trigl : public Trigl {
public:
    teral_Trigl(std::string name, int A) : Trigl(name, A, A, A, 60, 60, 60) {}
};


class Quadr :public Figure
{
public:
    Quadr(std::string name, int A, int B, int C, int D, double a, double b, double c, double d) {
        this->name = name;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;

        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
    }

    void get_sides_count() override {
        std::cout << "\n" << name << "\n" <<
            "Стороны: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n" <<
            "Углы: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    }
};

class rectangle : public Quadr {
public:
    rectangle(std::string name, int A, int B) : Quadr(name, A, B, A, B, 90, 90, 90, 90) {}
};

class parallelogram : public Quadr {
public:
    parallelogram(std::string name, int A, int B, double a, double b) : Quadr(name, A, B, A, B, a, b, a, b) {}
};

class rhombus : public Quadr {
public:
    rhombus(std::string name, int A, double a, double b) : Quadr(name, A, A, A, A, a, b, a, b) {}
};

*/


int main()
{
    setlocale(LC_ALL, "Russian");

    Trigl z1("треугольник: ", 3, 4, 5, 40, 60, 80);
    Figure* z3 = &z1;
    z3->get_sides_count();

    Quadr z2("квадрат: ", 4, 5, 6, 7, 90, 90, 90, 90);
    Figure* z4 = &z2;
    z4->get_sides_count();


    regtag_Trigl z5("прямоугольный треугольник: ", 4, 5, 6, 60, 50);
    Figure* z6 = &z5;
    z6->get_sides_count();

    isos_Trigl z7("равнобедренный треугольник: ", 4, 5, 60, 50);
    Figure* z8 = &z7;
    z8->get_sides_count();

    teral_Trigl z9("равносторонний треугольник: ", 4);
    Figure* z10 = &z9;
    z10->get_sides_count();

    rectangle z11("прямоугольник: ", 4, 60);
    Figure* z12 = &z11;
    z12->get_sides_count();

    parallelogram z13("параллелограмм: ", 4, 7, 70, 50);
    Figure* z14 = &z13;
    z14->get_sides_count();

    rhombus z15("ромб: ", 4, 70, 50);
    Figure* z16 = &z15;
    z16->get_sides_count();

    system("pause");

}