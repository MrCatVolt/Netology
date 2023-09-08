#pragma once
#include <iostream>
#include <string>


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
































