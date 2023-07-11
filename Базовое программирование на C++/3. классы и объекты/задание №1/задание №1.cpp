#include <iostream>

class Calculator {
public:
    double num1;
    double num2;

    double add(double num1, double num2) {
        double x=0;
        x = num1 + num2;
        std::cout << "num1 + num2 = " << x << "\n";
        return x;
    }

    double multiply (double num1, double num2) {
        double x = 0;
        x = num1 * num2;
        std::cout << "num1 * num2 = " << x << "\n";
        return x;
    }

    double subtract_1_2(double num1, double num2) {
        double x = 0;
        x = num1 - num2;
        std::cout << "num1 - num2 = " << x << "\n";
        return x;
    }

    double subtract_2_1(double num1, double num2) {
        double x = 0;
        x = num2 - num1;
        std::cout << "num2 - num1 = " << x << "\n";
        return x;
    }

    double divide_1_2(double num1, double num2) {
        double x = 0;
        x = num1 / num2;
        std::cout << "num1 / num2 = " << x << "\n";
        return x;
    }

    double divide_2_1(double num1, double num2) {
        double x = 0;
        x = num2 / num1;
        std::cout << "num2 / num1 = " << x << "\n";
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
    int i = 5;
    while (i == 5) {
                
        std::cout << "\n\nвведите num1:\n";
        std::cin >> a;

        std::cout << "введите num2:\n";
        std::cin >> b;

        Calculator Calculator;
        Calculator.set_num1(a);
        Calculator.set_num2(b);
        


        if (Calculator.set_num1(a) == 0 || Calculator.set_num2(b) == 0) {
            std::cout << "Неверный ввод!\n";
        }
        else {
            Calculator.add(a, b);
            Calculator.multiply(a, b);
            Calculator.subtract_1_2(a, b);
            Calculator.subtract_2_1(a, b);
            Calculator.divide_1_2(a, b);
            Calculator.divide_2_1(a, b);
        }
    }
}


