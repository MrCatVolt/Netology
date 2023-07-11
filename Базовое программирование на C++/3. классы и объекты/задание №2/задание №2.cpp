#include <iostream>
#include <string>
#include <cstring>
#include <Windows.h>

class Counter {
private:
    int x;

public:
    Counter (){
        x = 1;
    }

    Counter (int x) {
        this->x = x;
    }

    void set_x_on1() {
        x++;
    }

    void set_x_off1() {
        --x;
    }

    int get_x_cout() {
        std::cout << "\n" << x << "\n";
        return x;
    }

};








int main()
{
    setlocale(LC_ALL, "Russian");
    int a = 0;
    std::string b;
    char c;
    
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет:\n";
    std::cin >> b;

    if (b == "да") {
        std::cout << "Введите начальное значение счётчика:\n";
        std::cin >> a;
        Counter z(a);
    }
    else {
        Counter z();
    }


    int i = 0;
    while (i==0) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> c;
        char d = '+', d2 = '-', d3 = '=', d4 = 'x';


        if (c == d) {
            z.set_x_on1();
        }
        if (c == d2) {
            z.set_x_off1();
        }
        if (c == d3) {
            z.get_x_cout();
            std::cout << "\n" << z.get_x_cout() << "\n";
        }
        if (c == d4) {
            std::cout << "До свидания!";
            break;
        }
    }
}

