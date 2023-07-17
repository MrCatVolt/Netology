#include <string>
#include <iostream>
#pragma once

class Figure {

protected:
    std::string name;
    int A, B, C, D;
    double a, b, c, d;

public:
    Figure();
    Figure(std::string name, int A, int B, int C, double a, double b, double c);

    virtual void get_sides_count();
};



class Trigl :public Figure
{
public:
    Trigl(std::string name, int A, int B, int C, double a, double b, double c);

        void get_sides_count() override;

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
    Quadr(std::string name, int A, int B, int C, int D, double a, double b, double c, double d) {}

    void get_sides_count() override {}
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









