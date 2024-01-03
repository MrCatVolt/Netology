#include <iostream>
#include <Windows.h>
#include <vector>
#include <algorithm>



int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);


    std::cout << "Hello World!\n";
    std::vector<int> v = { 8, 4, 5, 9 };

 
    std::for_each(v.begin(), v.end(), [](int& n) { 
        
        int t = n % 2;
        if (t == 1) {
            n = n * 3;
            return n;
        }

        else {
            return n;
        }
        
        });



    std::for_each(v.begin(), v.end(), [](int& n) {// Выводим вектор на экран
        std::cout << n << ' ';
        });
    
    //for (int n : v) {
     //   std::cout << n << ' ';}
}