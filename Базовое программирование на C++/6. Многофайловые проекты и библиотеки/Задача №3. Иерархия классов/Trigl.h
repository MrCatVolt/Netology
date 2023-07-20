#pragma once
#include <iostream>
#include <string>

#include "Figure.h"

class Trigl :public Figure
{
public:
    Trigl(std::string name, int A, int B, int C, double a, double b, double c);

    void get_sides_count() override;

};