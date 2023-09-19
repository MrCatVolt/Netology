
#include <iostream>
#include <Windows.h>


int* append_to_dynamic_array(int * arr, int &nom_all, int &b, int nom_last ) {
    int* temp = new int[nom_all*2];
    for (int i = 0; i < b; ++i) {
        temp[i] = arr[i];
    }
    nom_all *= 2;
    temp[b] = nom_last;
    b = b+ 1;

    delete arr;
    return temp;
}

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

    int a = 0, b = 1, c = 0, d = 0, exit = 1, chek=0;


    while (b > a) {
        std::cout << "Введите фактичеcкий размер массива: ";
        std::cin >> a;
        std::cout << "Введите логический размер массива: ";
        std::cin >> b;
    }
    int* mas = new int[a];

    while (c < b) {
        std::cout << "Введите mas" << "[" << c << "]: ";
        std::cin >> mas[c];
        ++c;
    }


    print_dynamic_array(mas, a, b);


 int* arrr = NULL;

    while (exit == 1) {

       
        std::cout << "\nВведите элемент для добавления или 0 для выхода: ";
        std::cin >> d;
        if (d == 0) {
            exit = 0;
            break;
        }




        if (b >= a) {
            if (chek == 5) {
                //delete mas ;
                int* mas = new int[a];
                for (int i = 0; i < (a); ++i) {
                    mas[i] = arrr[i];
                }
            }
            arrr = append_to_dynamic_array(mas, a, b, d);
            if (chek == 5) { delete mas; }
            chek = 5;
            
        }


        else {
            

            if (chek == 0) {
                mas[c] = d;
                ++c;
                ++b;
                arrr = new int[a];
                for (int i = 0; i < a; ++i) {
                    arrr[i] = mas[i];
                }
            }
            else {
                arrr[c+1] = d;
                ++c;
                ++b;



            }

           
        }

        print_dynamic_array(arrr, a, b);


    }
}