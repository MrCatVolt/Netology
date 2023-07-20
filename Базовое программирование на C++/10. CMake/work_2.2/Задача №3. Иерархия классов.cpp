#include <iostream>
#include <string>

#include "Figure.h"
#include "Trigl.h"
#include "regtag_Trigl.h"
#include "isos_Trigl.h"
#include "teral_Trigl.h"

#include "Quadr.h"
#include "rectangle.h"
#include "rhombus.h"
#include "parallelogram.h"


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

}