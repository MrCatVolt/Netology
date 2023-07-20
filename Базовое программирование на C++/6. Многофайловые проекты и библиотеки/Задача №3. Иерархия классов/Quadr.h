#pragma once
#include <iostream>
#include <string>

#include "Figure.h"


class Quadr :public Figure
{
public:
    Quadr(std::string name, int A, int B, int C, int D, double a, double b, double c, double d);

    void get_sides_count() override;
};