#include <iostream>
#include <Windows.h>
#include <string>
#include "lib_dinamic_work_4.h"



int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);

    std::string name, z1;
    std::cout << "Введите имя:\n";

    std::cin >> name;

    lib_work_4::Leaver z5;
    z1 = z5.leave(name);

    std::cout << z1;

    system("pause");
    system("pause");
}