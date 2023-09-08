#include <iostream>
#define MODE 1

int add(int a, int b) {
    int c=0;

   c = a + b;
   return c;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    
    std::cout << "режим ожидания. (введите: 0- режим тренировки, 1-боевой режим)\n";
    

#ifndef MODE
#error not_mode;
#endif

#if MODE == 0
    std::cout << "\nРаботаю в режиме тренировки\n";

#elif MODE == 1
    int a = 0, b = 0, c = 0;
    std::cout << "Работаю в боевом режиме\n";
    std::cout << "Введите число 1: ";
    std::cin >> a;

    std::cout << "\nВведите число 2: ";
    std::cin >> b;
    
    std::cout << "\nРезультат сложения: "<< add(a,b);

#else
    std::cout << "\nНеизвестный режим. Завершение работы\n";

#endif

}






