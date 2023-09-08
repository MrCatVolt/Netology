#include <iostream>
#include <string>
#include <Windows.h>
#include <cstring>
#include <fstream>

class Addresses {
private:
    std::string sity;
    std::string street;
    int num_home;
    int num_apartments;

public:

    /*Addresses(std::string sity, std::string street, int num_home, int num_apartments) {
    this->sity = sity;
    this->street = street;
    this->num_home = num_home;
    this->num_apartments = num_apartments;
    }
    */

    void set_init(std::string sity, std::string street, int num_home, int num_apartments) {
        this->sity = sity;
        this->street = street;
        this->num_home = num_home;
        this->num_apartments = num_apartments;
    }

    int converting(std::string x) {
        int x2 = 0;
        x2 = std::stoi(x);
        //x2 = static_cast<int>(x);
        return x2;
    }

    void set_convert(Addresses & A, Addresses & B) { // сравнение городов и замена функций.
        std::string c1, c2;
        int c3, c4;

        c1 = B.sity;
        c2 = B.street;
        c3 = B.num_home;
        c4 = B.num_apartments;

        B.sity = A.sity;
        B.street = A.street;
        B.num_home = A.num_home;
        B.num_apartments = A.num_apartments;

        A.sity = c1;
        A.street = c2;
        A.num_home = c3;
        A.num_apartments = c4;
    }

    std::string get_sity() {
        return sity;
    }

    std::string get_street() {
        return street;
    }

    int get_num_home() {
        return num_home;
    }

    int get_num_apartments() {
        return num_apartments;
    }
};


int main()
{
    setlocale(LC_ALL, "Russian");//65001 для UTF-8, 1251 для виндовс Идентификаторы кодовой страницы
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::ifstream book("in.txt"); // открываем файл на запись
    int a = 0;
    book >> a;

    Addresses* A = new Addresses[a];

    for (int i = 0; i < a; i++) { // считываем файл в экземпляр класса
        std::string b1, b2, b3, b4;
        int b5 = 0, b6 = 0;
        book >> b1 >> b2 >> b3 >> b4;

        b5 = A[i].converting(b3);
        b6 = A[i].converting(b4);

        A[i].set_init(b1, b2, b5, b6);
    }


   for(int j=0; j<a-1;++j ){
       for (int i = 0; i < a - 1; i++) { //сортировка пузырьком



           std::string z1 = A[i].get_sity();
           std::string z2 = A[i + 1].get_sity();
           //char z3, z4;
           //z3 = static_cast<char>(z1);
           //strcmp(z1, z2) == 0
           if (z1 > z2) {
               A[i].set_convert(A[i], A[i + 1]);
           }
       }
    }

    





    std::ofstream book_off("out.txt"); //работаем на передачу в файл
    book_off << a << "\n";
    for (int i = 0; i <a; i++) {
        book_off << A[i].get_sity() << ", " << A[i].get_street() << ", " << A[i].get_num_home() << ", "
            << A[i].get_num_apartments() << "\n";
        std::cout << A[i].get_sity() << ", " << A[i].get_street() << ", " << A[i].get_num_home() << ", " << A[i].get_num_apartments() << "\n";
    }

    delete[]A;
    book.close();
    book_off.close();
}