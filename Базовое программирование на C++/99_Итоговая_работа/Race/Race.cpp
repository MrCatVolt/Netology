#include <iostream>
#include <string>
#include <Windows.h>

// инструкция компилятору привести double к int
// ival = static_cast<int>(3.541) + 3;


class ground {
public:
    int speed;
    int time_to_out;
};


class camel : public ground {   // ВЕРБЛЮД
public:
    camel() {
        this->speed = 10;
        this->time_to_out = 30;
    }

    double funk_camel (int long_distance) {
        int time_out_1 = 5, time_out_all = 8, y = 0, z = 0;
        double x = 0;

        y = long_distance / speed;
        z = y / time_to_out;

        if (z == 0) {
            x = y;
            static_cast <double> (x);
            return x;
        }

        else if (z == 1) {
            x = y + time_out_1;
            static_cast <double> (x);
            return x;
       }

        else if (z > 1) {

            x = y + time_out_1;
            for (int i = 1; i < z; i++) {
                x += time_out_all;
            }
            static_cast <double> (x);
            return x;
        }
        return 0;
    }

};

//class camel_speedboat : public ground {   // верблюд быстроход










class air {
protected:
    int speed;
};



















int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);

    int nom_rice_tipe = 0, long_distance = 0, a = 0, b = 0, d = 0, e = 0;
    double c = 0;





    std::cout << "Добро пожаловать в симулятор гонок ;\")\n";

    while (e == 0) {

        do {
            std::cout << "1. Гонка для наземного транспорта.\n" <<
                "2. Гонка для воздушного транспорта.\n" <<
                "3. Гонка для наземного и воздушного транспорта.\n" <<
                "Выберите тип гонки: ";
            std::cin >> nom_rice_tipe;
            std::cout << "\n";
        } while (nom_rice_tipe == 0 || nom_rice_tipe > 3);

        do {
            std::cout << "Укажите длинну дистанции (должна быть положительна): ";
            std::cin >> long_distance;
            std::cout << "\n";
        } while (long_distance <= 0);

        camel zero;
        c = zero.funk_camel(long_distance);
        
        std::cout << c;

    }
  



    system("pause");
}
