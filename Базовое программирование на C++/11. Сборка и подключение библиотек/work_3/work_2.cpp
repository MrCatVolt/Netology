#include <iostream>
#include <Windows.h>
#include <string>
#include "lib_dinamic_work_2.h"



int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);

    std::string name, z1;
    std::cout << "Введите имя:\n";

    std::cin >> name;

    lib_dinamic_work_2::Leaver z10;
    z1 = z10.leave(name);

    std::cout << z1;

    system("pause");
    system("pause");
}