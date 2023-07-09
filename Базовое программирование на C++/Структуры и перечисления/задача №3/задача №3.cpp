#include <iostream>
#include <string>
#include <Windows.h>

struct addresses {
    std::string city = "zero";
    std::string street = "zero";
    int nom_home = 0;
    int Apartment_number = 0;
    int index = 0;
};

void visual(const addresses& nom1) {
    std::cout << "\n"<< "город: " << nom1.city << "\n";
    std::cout << "улица: " << nom1.street << "\n";
    std::cout << "номер дома: " << nom1.nom_home << "\n";
    std::cout << "номер квартиры: " << nom1.Apartment_number << "\n";
    std::cout << "индекс: " << nom1.index << "\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");
    std::string d = "Омск", e = "вишнёвая";
    int a = 0, b = 100, c = 1000;
    addresses* z = new addresses[5];
    for (int i = 0; i < 5; i++, a += 5, b += 10, c += 155) {
        z[i]={d,e,a,b,c};
       // z[i].city = d;
       // z[i].street = e;
       // z[i].nom_home = a;
       // z[i].Apartment_number = b;
       // z[i].index = c;
    }

    for (int i = 0; i < 5; i++) {
        visual (z[i]);
    }
            delete[]z;
}
