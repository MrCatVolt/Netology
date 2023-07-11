#include <iostream>
#include <Windows.h>

enum class ear {
    выход=0,
    январь=1,
    февраль,
    март,
    апрель,
    май,
    июнь,
    июль,
    август,
    сентябрь,
    октябрь,
    ноябрь,
    декабрь
};




int main() {
    setlocale(LC_ALL, "Russian");
    int x = 0, i=1;
    
    while (i == 1) {
std::cout << "\nВведите число:\n";
    std::cin >> x;
       if (x >= 0 && x < 13)
        {
            ear z = static_cast <ear>(x);

            switch (z) {
            case ear::выход:
                std::cout << "всего доброго, хорошего Вам дня ;\") \n";
                i = 0;
                break;

            case ear::январь:
                std::cout << "январь\n";
                break;


            case ear::февраль:
                std::cout << "февраль\n";
                break;


            case ear::март:
                std::cout << "март\n";
                break;

            case ear::апрель:
                std::cout << "апрель\n";
                break;

            case ear::май:
                std::cout << "май\n";
                break;

            case ear::июнь:
                std::cout << "июнь\n";
                break;

            case ear::июль:
                std::cout << "июль\n";
                break;

            case ear::август:
                std::cout << "август\n";
                break;

            case ear::сентябрь:
                std::cout << "сентябрь\n";
                break;

            case ear::октябрь:
                std::cout << "октябрь\n";
                break;
                
            case ear::ноябрь:
                std::cout << "ноябрь\n";
                break;

            case ear::декабрь:
                std::cout << "декабрь\n";
                break;
                }
        }

        else {
            std::cout << "такого месяца нет, для выхода введите \"0\"\n";
        }
    }

}