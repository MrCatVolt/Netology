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
        x2 = static_cast<int>(x);
        return x2;
    }



};


int main()
{
    setlocale (LC_ALL, "Russian");//65001 для UTF-8, 1251 для виндовс Идентификаторы кодовой страницы
    SetConsoleCP (1251);
    SetConsoleOutputCP (1251);
    std::fstream book("in.txt");
    int a = 0;

    //Counter* z;
    //(b == "да") ? (z = new Counter(a)) : (z = new Counter()
    
    book >> a;

    Addresses* A = new Addresses [a];




    for (int i = 0; i < a; i++) {
        std::string b1, b2, b3, b4;
        book >> b1 >> b2 >> b3 >> b4;





        A[i].set_init(b1, b2, b3, b4);
    }



     

    }






}

