#include <iostream>


class Figure
{
private:
    std::string name;
    int num;
    
public:
    Figure(std::string name, int num){ 
        this->name = name;
        this->num = num;
    }
    void get_sides_count() {
        std::cout << name << num << "\n";
    }
Figure () {
    this->name = "фигура: ";
    this->num = 0;
    }
};


class Triangle : public Figure
{
public:
    Triangle(std::string name, int num) : Figure{ name, num } {}
};

class Quadrangle : public Figure
{
public:
    Quadrangle(std::string name, int num) : Figure{ name, num } {}
};

int main()
{
    setlocale(LC_ALL, "Russian");

    Figure z;
    z.get_sides_count();

    Triangle z1("треугольник: ",3) ;
    z1.get_sides_count();
    
    Quadrangle z2("квадрат: ", 4);
    z2.get_sides_count();
}