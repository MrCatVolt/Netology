#include <iostream>
#include <Windows.h>




void print_dynamic_array(int* arr, int logical_size, int actual_size) {
    std::cout << "Динамический массив :";
    for (int i = 0; i < actual_size; ++i) {
        std::cout << " " << arr[i];

    }

    for (int i = actual_size; i < logical_size; ++i) {
        std::cout << " _";


    }


}


int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);

    int a = 0, b = 0, c = 0, d=0, exit = 1, chet=2;
    
        std::cout << "Введите фактичеcкий размер массива: ";
        std::cin >> a;
        std::cout << "Введите логический размер массива: ";
        std::cin >> b;

        int* mas = new int[a];
        
        while (c < b) {
            std::cout << "Введите mas" << "[" << c << "]: ";
            std::cin >> mas[c];
            ++c;
        }


        print_dynamic_array(mas, a, b); 




        while (exit == 1) {
            
        std::cout << "\nВведите элемент для добавления или 0 для выхода: ";
            std::cin >> d;
        if (d == 0) { 
            exit = 0; 
            break;
        }




        if (b >= a) {

            int* mas2 = new int[a * 2];
            

            for (int i = 0; i < b; ++i) {
                mas2[i] = mas[i];

            }

            delete mas;

            int* mas = new int[a * 2];
            a = a * 2;

            for (int i = 0; i < b; ++i) {
                mas[i] = mas2[i];

            }

            mas[c] = d;
            ++c;
            ++b;






             print_dynamic_array(mas, a, b);
        }


        else {
            mas[c] = d;
            ++c;
            ++b;
            print_dynamic_array(mas, a, b);
        }
            
        
        
            
    }
}