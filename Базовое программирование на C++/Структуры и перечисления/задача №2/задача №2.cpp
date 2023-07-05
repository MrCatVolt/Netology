#include <iostream>
#include <string>
#include <Windows.h>


struct check {
    int nomber_check;
        std::string name;
        double balance = 0;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    std::string b;
    double c;
    std::cout << "Введите номер счёта:\n";
    std::cin >> a;
    std::cout << "Введите имя владельца:\n";
    std::cin >> b;
    std::cout << "Введите баланс:\n";
    std::cin >> c;


    check num1 = { a,b,c };
    std::cout << num1.nomber_check << " " << num1.name << " " << num1.balance << "\n";

    std::cout << "Введите новый баланс:\n";
    std::cin >> c;
    num1.balance = c;

    std::cout << "Ваш новый счет:" << num1.nomber_check << " " << num1.name << " " << num1.balance;
}