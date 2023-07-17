#include <iostream>
#include <string>


class Figure {   

protected:
    std::string name;
    int A, B, C, D;
    double a, b, c, d;

public:
    Figure() {
        this->name = "фигура";
        this->A = 0;
        this->B = 0;
        this->C = 0;
        this->D = 0;

        this->a = 0;
        this->b = 0;
        this->c = 0;
        this->d = 0;
    };

    Figure(std::string name, int A, int B, int C, double a, double b, double c) {
        this->name = "фигура";
        this->A = 0;
        this->B = 0;
        this->C = 0;
        this->D = 0;

        this->a = 0;
        this->b = 0;
        this->c = 0;
        this->d = 0;
    };

 //   virtual void get_sides_count() {
  //      std::cout << "\n" << name << "\n"; }

    virtual void get_sides_count() {     //фигура (количество сторон равно 0)
        std::string g1 = "Неправильная";
        if (it_is_fact() == 1) {
            g1 = "Правильная";
        }
        std::cout << "\n" << name << "\n" << g1 << "\nколличество сторон: 0\n";



    }
    int it_is_fact() {
        if ((A+B+C+D)==0) {
            return 1;
        }
        else {
            return 0;
        }
    }


};


class Trigl :public Figure          //треугольник
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
        std::string g1="Неправильная";
        if (it_is_fact() == 1) {
            g1 = "Правильная";
        }

        std::cout << "\n" << name << "\n"<<
            g1 << "\nколличество сторон: 3\n"<<
            "Стороны: " << "A=" << A << " B=" << B << " C=" << C << "\n" <<
            "Углы: " << "a=" << a << " b=" << b << " c=" << c << "\n";
    }

    virtual int it_is_fact() {
        if ((a + b + c) == 180) {
            return 1;
        }
        else {
            return 0;
        }
    }

};


class regtag_Trigl : public Trigl {   //прямоугольный треугольник (угол C всегда равен 90)
public:
    regtag_Trigl(std::string name, int A, int B, int C, double a, double b) : Trigl(name, A, B, C, a, b, 90) {}
    int it_is_fact() override {
        if ((a==90 || b==90 || c==90)&& (a+b+c)==180 ){
            return 1;
        }
        else {
            return 0;
        }
    }
};

class isos_Trigl : public Trigl {          //равнобедренный треугольник (стороны a и c равны, углы A и C равны)
public:
    isos_Trigl(std::string name, int A, int B, int C, double a, double b, double c) : Trigl(name, A, B, C, a, b, c) {}

    int it_is_fact() override {
        if ((a == c) && (A==C)) {
            return 1;
        }
        else {
            return 0;
        }
    }
};

class teral_Trigl : public Trigl {         //равносторонний треугольник (все стороны равны, все углы равны 60)
public:
    teral_Trigl(std::string name, int A, int B, int C, double a, double b, double c) : Trigl(name, A, B, C, a, b, c) {}

    int it_is_fact() override {
        if ((a == c && a==b) && (A == C && A==B)) {
            return 1;
        }
        else {
            return 0;
        }
    }

};


class Quadr :public Figure              //квадрат
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
        std::string g1 = "Неправильная";
        if (it_is_fact() == 1) {
            g1 = "Правильная";
        }

        std::cout << "\n" << name << "\n" <<
            g1 << "\nколличество сторон: 4\n" <<
            "Стороны: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n" <<
            "Углы: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
    }

    virtual int it_is_fact() {
        if ((A==B)&&(A==C)&&(A==D)&&(a==90)&&(b==90)&&(c==90)&&(d==90)) {
            return 1;
        }
        else {
            return 0;
        }
    }
};

class rectangle : public Quadr {          //прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90);
public:
    rectangle(std::string name, int A, int B, int C, int D) : Quadr(name, A, B, C, D, 90, 90, 90, 90) {}
    virtual int it_is_fact() {
        if ((A==C)&&(B==D)) {
            return 1;
        }
        else {
            return 0;
        }
    }
};

class parallelogram : public Quadr {     //параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны)
public:
    parallelogram(std::string name, int A, int B, int C, int D, double a, double b, double c, double d) : Quadr(name, A, B, C, D, a, b, c, d) {}
   
    virtual int it_is_fact() {
        if ((A == C) && (B == D)&&(a==c)&&(b==d)) {
            return 1;
        }
        else {
            return 0;
        }
    }
};

class rhombus : public Quadr {          //ромб (все стороны равны, углы A,C и B,D попарно равны)
public:
    rhombus(std::string name, int A, double a, double b, double c, double d) : Quadr(name, A, A, A, A, a, b, c, d) {}

    virtual int it_is_fact() {
        if ((a == c) && (b == d)) {
            return 1;
        }
        else {
            return 0;
        }
    }

};

class quadrilateral : public Quadr {          //четырёхугольник (стороны и углы произвольные, количество сторон равно 4, сумма углов равна 360)
public:
    quadrilateral(std::string name, int A, int B, int C, int D, double a, double b, double c, double d) : Quadr(name, A, B, C, D, a, b, c, d) {}

    virtual int it_is_fact() {

        if ((a +b+c+d)==360) {
            return 1;
        }
        else {
            return 0;
        }
    }
};


int main()
{
    setlocale(LC_ALL, "Russian");

    Trigl z1("треугольник: ", 3, 4, 5, 40, 60, 80);
    Figure* z3 = &z1;
    z3->get_sides_count();

    Quadr z2("квадрат: ", 4, 4, 4, 4, 90, 90, 90, 90);
    Figure* z4 = &z2;
    z4->get_sides_count();


    regtag_Trigl z5("прямоугольный треугольник: ", 4, 5, 6, 60, 50);
    Figure* z6 = &z5;
    z6->get_sides_count();

    isos_Trigl z7("равнобедренный треугольник: ", 4, 5, 4, 60, 70, 60);
    Figure* z8 = &z7;
    z8->get_sides_count();

    teral_Trigl z9("равносторонний треугольник: ", 4, 4, 4, 60,60, 60);
    Figure* z10 = &z9;
    z10->get_sides_count();

    rectangle z11("прямоугольник: ", 4, 60, 4, 60);
    Figure* z12 = &z11;
    z12->get_sides_count();

    parallelogram z13("параллелограмм: ", 4, 7, 4, 7, 70, 50, 70, 50);
    Figure* z14 = &z13;
    z14->get_sides_count();

    rhombus z15("ромб: ", 4, 70, 50, 70, 50);
    Figure* z16 = &z15;
    z16->get_sides_count();

    quadrilateral z17("четырёхугольник: ", 4, 5, 6, 7, 150, 80, 70, 60);
    Figure* z18 = &z17;
    z18->get_sides_count();

    Figure z20;
    z20.get_sides_count();

}
