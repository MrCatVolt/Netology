#include <iostream>
#include <string>

class Figure
{
private:
    std::string name;
    int A, B, C, D;
    double a, b, c, d;

public:
    Figure(std::string name, int A, int B, int C, int D, double a, double b, double c, double d) {
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

    Figure(std::string name, int A, int B, int C, double a, double b, double c) {
        this->name = name;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = 0;

        this->a = a;
        this->b = b;
        this->c = c;
        this->d = 0;
    }


    void get_sides_count() {

        if (D == 0) {


            std::cout << "\n" << name << "\n" <<
                "Стороны: " << "A=" << A << " B=" << B << " C=" << C << "\n" <<
                "Углы: " << "a=" << a << " b=" << b << " c=" << c << "\n";
        }

        else {
            std::cout << "\n" << name << "\n" <<
                "Стороны: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n" <<
                "Углы: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
        }

    }
};






class Triangle : public Figure
{
public:
   Triangle(std::string name, int A, int B, int C, double a, double b, double c) : Figure(name, A, B, C, a, b, c) { }

};





class Quadrangle : public Figure
{
public:
    Quadrangle(std::string name, int A, int B, int C, int D, double a, double b, double c, double d) : Figure(name, A, B, C, D, a, b, c, d) { }
};


class Right_triangle : public Figure
{
public:
    Right_triangle(std::string name, int A, int B, int C, double a, double b, double c) : Figure(name, A, B, C, a, b, c) { }
};


class Isosceles_triangle : public Figure
{
public:
    Isosceles_triangle (std::string name, int A, int B, int C, double a, double b, double c) : Figure(name, A, B, C, a, b, c) { }
};




int main()
{
    setlocale(LC_ALL, "Russian");

    //Parent* par_child = &child; 50 cлайд

    Triangle z1("треугольник: ", 3, 4, 5, 40, 60, 80);
    z1.get_sides_count();

    Quadrangle z2("квадрат: ", 4, 5, 6, 7, 90, 90, 90, 90);
    z2.get_sides_count();

    Right_triangle z3("Прямоугольный треугольник: " , 10, 20, 30, 50, 60, 90);
    z3.get_sides_count();

    Isosceles_triangle z4("Равнобедренный треугольник:", 10, 20, 30, 50, 60, 50);
    z3.get_sides_count();



}