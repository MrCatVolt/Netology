#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);

    std::string name;
    std::cout << "Введите имя:\n";
    std::cin >> name;
    std::cout << "\nЗдравствуйте, " << name << "!\n";

    system("pause");
}

