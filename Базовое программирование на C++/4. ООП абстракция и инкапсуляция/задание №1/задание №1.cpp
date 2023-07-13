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

    Addresses(std::string sity, std::string street, int num_home, int num_apartments) {
    this->sity = sity;
    this->street = street;
    this->num_home = num_home;
    this->num_apartments = num_apartments;
    }

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

    std::string get_sity() {
        std::string z = sity;
        return z;
    }

    std::string get_street() {
        std::string z = street;
        return z;
    }

    int get_num_home() {
        int z = num_home;
        return z;
    }

    int get_num_apartments() {
        int z = num_apartments;
        return z;
    }
};


int main()
{
    setlocale (LC_ALL, "Russian");//65001 для UTF-8, 1251 для виндовс Идентификаторы кодовой страницы
    SetConsoleCP (1251);
    SetConsoleOutputCP (1251);
    std::ifstream book("in.txt"); // открываем файл на запись
    int a = 0;
    book >> a;
    
    Addresses** A = new Addresses* [a];

    for (int i = 0; i < a-1; i++) { // считываем файл в экземпляр класса
        std::string b1, b2, b3, b4;
        int b5=0, b6=0;
        book >> b1 >> b2 >> b3 >> b4;

        b5= A[i][i].converting(b3);
        b6= A[i][i].converting(b4);

        A[i] = new Addresses (b1, b2, b5, b6);
       //A[i].set_init(b1, b2, b5, b6);
    }


    std::ofstream book_off("out.txt"); //работаем на передачу в файл
    book_off << a << "\n";
    for (int i = a; i > 1; i--) {
        book_off << A[i][i].get_sity() << ", " << A[i][i].get_street() << ", " << A[i][i].get_num_home() << ", "
            << A[i][i].get_num_apartments() << "\n";
        std::cout << A[i][i].get_sity() << ", " << A[i][i].get_street() << ", " << A[i][i].get_num_home() << ", " << A[i][i].get_num_apartments() << "\n";
    }

    delete []A;
    book.close();
    book_off.close();
    }