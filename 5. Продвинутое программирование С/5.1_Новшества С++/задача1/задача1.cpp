﻿#include <iostream>
#include <Windows.h>
#include <vector>
#include <algorithm>



int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);


    std::cout << "Hello World!\n";
    std::vector<int> v = { 8, 4, 5, 9 };

     auto f{ [](int& a) -> int {
         a = a * 3;
         return a;
     }
     };

    for (int& n : v) {
      f(n);
    };



    // Выводим вектор на экран
    for (int n : v) {
        std::cout << n << ' ';
    }
}