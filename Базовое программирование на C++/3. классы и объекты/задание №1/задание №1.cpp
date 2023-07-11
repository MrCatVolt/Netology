#include <iostream>

class Calculator {
private:
double num1;
double num2;

public:


    double get_add() {
        double x=0;
        x = num1 + num2;
        return x;
    }

    double get_multiply () {
        double x = 0;
        x = num1 * num2;
        return x;
    }

    double get_subtract_1_2() {
        double x = 0;
        x = num1 - num2;
        return x;
    }

    double get_subtract_2_1() {
        double x = 0;
        x = num2 - num1;
        return x;
    }

    double get_divide_1_2() {
        double x = 0;
        x = num1 / num2;
        return x;
    }

    double get_divide_2_1() {
        double x = 0;
        x = num2 / num1;
        return x;
    }

    bool set_num1(double num1) {
        if (num1 == 0) {
            return false;
        }
        else {
            this->num1 = num1;
            return true;
        }
    }

    bool set_num2(double num2) {
        if (num2 == 0) {
            return false;
        }
        else {
            this->num2 = num2;

            return true;
        }
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    double a = 0, b = 0;
    for (;;) {
                
        std::cout << "введите num1: ";
        std::cin >> a;

        std::cout << "введите num2: ";
        std::cin >> b;

        Calculator calc;
       
        if (calc.set_num1(a) == 0 || calc.set_num2(b) == 0) {
            std::cout << "Неверный ввод!\n\n";
        }
        else {
            std::cout << "num1 + num2 = " << calc.get_add() << "\n";
            std::cout << "num1 * num2 = " << calc.get_multiply() << "\n";
            std::cout << "num1 - num2 = " << calc.get_subtract_1_2() << "\n";
            std::cout << "num2 - num1 = " << calc.get_subtract_2_1() << "\n";
            std::cout << "num1 / num2 = " << calc.get_divide_1_2() << "\n";
            std::cout << "num2 / num1 = " << calc.get_divide_2_1() << "\n\n";
        }
    }
}