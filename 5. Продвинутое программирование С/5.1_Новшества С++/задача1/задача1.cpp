#include <iostream>
#include <Windows.h>
#include <vector>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);


    std::cout << "Hello World!\n";
    std::vector<int> v = { 8, 4, 5, 9 };

    // Добавляем к вектору ещё два целых числа
    //v.push_back(6);
    //v.push_back(9);

    std::forward()




    // Перезаписываем элемент в позиции 2
    v[2] = -1;


    // Выводим вектор на экран
    for (int n : v) {
        std::cout << n << ' ';
    }
}

