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
    std::cout << "\n\n\n" << "новая персона" << "\n"; //как указать номер персоны? &nom1
    std::cout << nom1.city << "\n";
    std::cout << nom1.street << "\n";
    std::cout << nom1.nom_home << "\n";
    std::cout << nom1.Apartment_number << "\n";
    std::cout << nom1.index << "\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");
    std::string d = "Сибирь", e = "Пушкин";
    int a = 0, b = 100, c = 1000;
    addresses* z = new addresses[5];
    for (int i = 0; i < 5; i++, a += 5, b += 10, c += 155, d += 1, e += 2) {
        z[i].city = d;
        z[i].street = e;
        z[i].nom_home = a;
        z[i].Apartment_number = b;
        z[i].index = c;
    }

    for (int i = 0; i < 5; i++) {
        visual (z[i]);
    }
            delete[]z;
}
