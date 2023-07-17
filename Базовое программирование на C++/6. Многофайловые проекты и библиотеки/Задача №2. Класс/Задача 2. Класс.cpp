#include <iostream>
#include <string>
#include <cstring>
#include <Windows.h>
#include "my_Counter.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    int a = 0;
    std::string c, b;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет:\n";
    std::cin >> b;

    if (b == "да") {
        std::cout << "Введите начальное значение счётчика:\n";
        std::cin >> a;
    }

    Counter* z;

    (b == "да") ? (z = new Counter(a)) : (z = new Counter());

    for (;;) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> c;

        if (c == "+") {
            z->set_x_on1();
        }
        if (c == "-") {
            z->set_x_off1();
        }
        if (c == "=") {
           std::cout << z->get_x_cout() <<"\n";
        }
        if (c == "x") {
            std::cout << "До свидания!";
            break;
        }
    }
    delete z;
}


