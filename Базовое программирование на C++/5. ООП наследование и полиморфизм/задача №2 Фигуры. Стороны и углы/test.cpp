#include <iostream>
#include <string>


//void print_info(Figure* f) {};



class Figure {

protected:
    std::string name;
    int A, B, C, D;
    double a, b, c, d;

public:
    Figure() {};

    virtual void get_sides_count() {
        std::cout << "\n" << name << "\n";
    }


};



class Trigl :Figure
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



class Quadr :Figure
{
public:
    Quadr(std::string name, int A, int B, int C, int D, double a, double b, double c, double d){
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





int main()
{
    setlocale(LC_ALL, "Russian");

    //Parent* par_child = &child; 50 cлайд
    // void print_info(Figure * f) и из нее вызывайте виртуальный метод для вывода информации о фигуре.

    Trigl z1("треугольник: ", 3, 4, 5, 40, 60, 80);

    Figure* z3 = &Trigl;
    z3->get_sides_count();

    Quadr z2("квадрат: ", 4, 5, 6, 7, 90, 90, 90, 90);
    Figure* z4 = &Quadr;
    z4->get_sides_count();




}