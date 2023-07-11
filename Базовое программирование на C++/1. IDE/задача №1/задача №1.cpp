#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::fstream z1{"in.txt"};
    std::ofstream z2{"out.txt"};
    int a = 0, b = 0;

    z1 >> a;
    int* mas1 = new int[a];
    for (int i = 0; i < a; i++) {
        z1 >> mas1[i];
    }

    z1 >> b;
    int* mas2 = new int[b];
    for (int i = 0; i < b; i++) {
        z1 >> mas2[i];
    }

    for (int i = 0; i < a; i++) {  // вывод массивов на экран
        std::cout << mas1[i] << " ";
    }
    std::cout << "\n";
    for (int i = 0; i < b; i++) {
        std::cout << mas2[i] << " ";
    }


    z2 << b << "\n";
    z2 << mas2[b - 1] << " ";
    for (int i = 0; i < b - 1; i++) {
        z2 << mas2[i] << " ";
    }

    z2 << "\n\n\n" << a << "\n";
    for (int i = 1; i < a; i++) {
        z2 << mas1[i] << " ";
    }
    z2 << mas1[0];

    z1.close();
    z2.close();

    delete[]mas1;
    delete[]mas2;
    system("pause");
}