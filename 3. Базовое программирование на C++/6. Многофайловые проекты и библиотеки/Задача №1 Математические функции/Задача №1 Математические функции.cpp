#include <iostream>
#include "Math.h"


int main()
{
    setlocale(LC_ALL, "Russian");

    int a = 0, b = 0, c=0;
    std::cout << "Введите первое число: ";
    std::cin >> a;

    std::cout << "Введите второе число: ";
    std::cin >> b;
    
    for (;;) {
        std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
        std::cin >> c;
        std::cout << "\n";

        switch (c) {
        case 1: std::cout << "к " << a << " прибавить " << b << " = " << sum(a, b) << "\n";
            break;
        case 2: std::cout << "от " << a << " отнять " << b << " = " << sub(a, b) << "\n";
            break;
        case 3: std::cout << a << " умножить на " << b << " = " << mul(a, b) << "\n";
            break;
            case 4: std::cout << a << " разделить на " << b << " = " << divoyd(a, b) << "\n";
            break;
        case 5: std::cout << a << " в степени " << b << " = " << expo(a, b) << "\n";
            break;


        }

    }

}