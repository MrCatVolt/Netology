#include <iostream>
#include <string>
#include <Windows.h>
enum month {
    досвидание,
    январь,
    февраль,
    март,
    апрель,
    май,
    июнь,
    июль,
    август,
    сентябрь,
    октябрь,
    ноябрь,
    декабрь
};


int main()
{
    setlocale(LC_ALL, "Russian");
    int a = 0, b = 0;
    std::string c;
    std::cout << "Введите номер месяца:\n";
    std::cin >> a;
  
    switch (a) {
    case 0:std::cout << "досвидание\n";
        break;
    case 1:std::cout << "январь\n";
        break;
    case 2:std::cout << "февраль\n";
        break;
    case 3:std::cout << "март\n";
        break;
    case 4:std::cout << "апрель\n";
        break;
    case 5:std::cout << "май\n";
        break;
    case 6:std::cout << "июнь\n";
        break;
    case 7:std::cout << "июль\n";
        break;
    case 8:std::cout << "август\n";
        break;
    case 9:std::cout << "сентябрь\n";
        break;
    case 10:std::cout << "октябрь\n";
        break;
    case 11:std::cout << "ноябрь\n";
        break;
    case 12:std::cout << "декабрь\n";
        break;
    default :std::cout << "такого месяца нет\n";
        break;
    }

}


