#include <iostream>
#include <Windows.h>
#include <string>
#include "lib_work_1.h"



int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);

    std::string name, z1;
    std::cout << "Введите имя:\n";

    std::cin >> name;

    lib_work_10::Greeter z10;
    z1 = z10.ret_name(name);

    std::cout << z1;



}
