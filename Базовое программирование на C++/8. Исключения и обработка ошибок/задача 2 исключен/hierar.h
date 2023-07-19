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
    regtag_Trigl(std::string name, int A, int B, int C, double a, double b);
};



class isos_Trigl : public Trigl {
public:
    isos_Trigl(std::string name, int A, int B, double a, double b);
};

class teral_Trigl : public Trigl {
public:
    teral_Trigl(std::string name, int A);
};


class Quadr :public Figure
{
public:
    Quadr(std::string name, int A, int B, int C, int D, double a, double b, double c, double d);

    void get_sides_count() override;
};



class rectangle : public Quadr {
public:
    rectangle(std::string name, int A, int B);
};


class parallelogram : public Quadr {
public:
    parallelogram(std::string name, int A, int B, double a, double b);
};

class rhombus : public Quadr {
public:
    rhombus(std::string name, int A, double a, double b);
};

