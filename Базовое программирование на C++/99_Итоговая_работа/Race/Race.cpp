#include <iostream>
#include <string>
#include <Windows.h>
#include "dinam_lib_Race.h"


// инструкция компилятору привести double к int
// ival = static_cast<int>(3.541) + 3;

/*
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

    double funk_camel(int long_distance) {
        int time_out_1 = 5, time_out_all = 8, z = 0;
        double x = 0, y = 0;

        y = static_cast <double> (long_distance) / speed;
        z = (long_distance / speed) / time_to_out;
        if (((long_distance / speed) % time_to_out) == 0) {
            z -= 1;
        }

        if (z == 0) {
            x = y;
           // static_cast <double> (x);
            return x;
        }

        else if (z == 1) {
            x = y + time_out_1;
           // static_cast <double> (x);
            return x;
       }

        else if (z > 1) {

            x = y + time_out_1;
            for (int i = 1; i < z; ++i) {
                x += time_out_all;
            }
           // static_cast <double> (x);
            return x;
        }
        return 0;
    }

};


class camel_speedboat : public ground {   // верблюд быстроход
public:
    camel_speedboat() {
        this->speed = 40;
        this->time_to_out = 10;
    }

    double funk_camel_speedboat(int long_distance) {
        int time_out_1 = 5, time_out_all = 8, z = 0;
        double x = 0, time_out_2 = 6.5, y = 0 ;

        y = static_cast <double> (long_distance) / speed;
        z = (long_distance / speed) / time_to_out;
        if (((long_distance / speed) % time_to_out) == 0) {
            z -= 1;
        }

        if (z == 0) {
            x = y;
            return x;
        }

        else if (z == 1) {
            x = y + time_out_1;
            return x;
        }

        else if (z == 2) {
            x = y + time_out_1 + time_out_2;
            return x;
        }

        else if (z > 2) {

            x = y + time_out_1 + time_out_2;
            for (int i = 2; i < z; ++i) {
                x += time_out_all;
            }
            return x;
        }
        return 0;
    }

};


class centaur : public ground {   // КЕНТАВР
public:
    centaur() {
        this->speed = 15;
        this->time_to_out = 8;
    }

    double funk_centaur(int long_distance) {
        int time_out_all = 2, z = 0;
        double x = 0, y = 0;

        y = static_cast <double> (long_distance) / speed;
        z = (long_distance / speed) / time_to_out;
        if (((long_distance / speed) % time_to_out) == 0) {
            z -= 1;
        }

        if (z == 0) {
            x = y;
            return x;
        }

        else if (z > 0) {
            for (int i = 0; i < z; ++i) {
                x += time_out_all;
            }
            x += y;
            return x;
        }
        return 0;
    }

};


class all_terrain_boots : public ground {   // БОТИНКИ-ВЕЗДЕХОДЫ
public:
    all_terrain_boots() {
        this->speed = 6;
        this->time_to_out = 60;
    }

    double funk_all_terrain_boots(int long_distance) {
        int time_out_1 = 10, time_out_all = 5, z = 0;
        double x = 0, y = 0;

        y = static_cast <double> (long_distance) / speed;
        z = (long_distance / speed) / time_to_out;
        if (((long_distance / speed) % time_to_out) == 0) {
            z -= 1;
        }

        if (z == 0) {
            x = y;
            // static_cast <double> (x);
            return x;
        }

        else if (z == 1) {
            x = y + time_out_1;
            // static_cast <double> (x);
            return x;
        }

        else if (z > 1) {

            x = y + time_out_1;
            for (int i = 1; i < z; ++i) {
                x += time_out_all;
            }
            // static_cast <double> (x);
            return x;
        }
        return 0;
    }

};






class air {
protected:
    int speed;
};


class eagle : public air {   // ОРЁЛ
public:
    eagle() {
        this->speed = 8;
    }

    double funk_eagle(int long_distance) {
        int percent_all = 6;
        double x = 0, y = 0, z = 0;

        y = static_cast<double>(long_distance - (long_distance * percent_all / 100));

        x = y / speed;

        return x;
    }

};


class broom : public air {   // МЕТЛА
public:
    broom() {
        this->speed = 20;
    }

    double funk_broom(int long_distance) {
        int percent_all = long_distance/1000;
        double x = 0, y = 0, z = 0;



        if (percent_all > 0) {
            y = static_cast<double>(long_distance - (long_distance * percent_all / 100));

            x = y / speed;

            return x;
        }

        else {

            x = static_cast<double>(long_distance / speed);

            return x;
        }

    }

};



class Magic_carpet : public air {   // КОВЁР-САМОЛЁТ
public:
    Magic_carpet() {
        this->speed = 10;
    }

    double funk_Magic_carpet(int long_distance) {
        int percent_all = 6;
        double x = 0, y = 0, z = 0;

        if (long_distance <1000) {
            int percent_all = 6;
        }

        else if (long_distance > 1000 && long_distance < 5000) {
            percent_all = 3;
        }

        else if (long_distance > 5000 && long_distance < 10000) {
            percent_all = 10;
        }

        else if (long_distance > 10000) {
            percent_all = 5;
        }


        y = static_cast<double>(long_distance - (long_distance * percent_all / 100));

        x = y / speed;

        return x;
    }

};

*/


int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    
    int e = 0;
    std::cout << "Добро пожаловать в симулятор гонок ;\")\n";

    while (e != 2) {

    int nom_rice_tipe = 0, long_distance = 0, a = 0, b=0, ii=1, sum=0;
    double c = 0;
    std::string mas_nom_rice_tipe[4] = { "элемент 0","Гонка для наземного транспорта.","Гонка для воздушного транспорта.","Гонка для наземного и воздушного транспорта." };
    int mass[10] = {};
    double mas_time[10] = {};
    std::string mas[10] = { "элем","элем","элем","элем","элем","элем","элем","элем","элем","элем" };
    std::string device[10] = { "элемент 0","верблюд","верблюд-быстроход","кентавр","ботинки - вездеходы","орёл","метла","ковёр самолёт","элемент 8","элемент 9" };


    

        do {
            std::cout << "1. " << mas_nom_rice_tipe[1] << "\n"
                "2. " << mas_nom_rice_tipe[2] << "\n" <<
                "3. " << mas_nom_rice_tipe[3] << "\n" <<
                "Выберите тип гонки: ";
            std::cin >> nom_rice_tipe;
            std::cout << "\n";
        } while (nom_rice_tipe == 0 || nom_rice_tipe > 3);

        do {
            std::cout << "Укажите длинну дистанции (должна быть положительна): ";
            std::cin >> long_distance;
            std::cout << "\n";
        } while (long_distance <= 0);

        do {
            do {
                std::cout << "\n\t 1. Зарегистрировать транспорт." << "\n\t 2. Начать гонку.\n\t Выберите действие ";
                std::cin >> a;
                if (ii < 2 && a == 2) {
                    std::cout << "\n\tДолжно быть зарегистрировано хотябы 2 транспортных средства.";
                    a = 5;
                }


            } while (a < 1 || a > 2);


            if (a == 1) {
                do {
                    std::cout << "\n" << mas_nom_rice_tipe[nom_rice_tipe] << " Расстояние: " << long_distance << " ";
                    if (ii == 1) { std::cout << "\n зарегистрированных транспортов нет"; }

                    else {
                        std::cout << "\n зарегистрированны: ";
                        for (int i = 1; i < ii; ++i) {
                            std::cout << mas[i] << ", ";
                        }
                    }



                    std::cout << "\n 1. " << device[1] <<
                        "\n 2. " << device[2] <<
                        "\n 3. " << device[3] <<
                        "\n 4. " << device[4] <<
                        "\n 5. " << device[5] <<
                        "\n 6. " << device[6] <<
                        "\n 7. " << device[7] <<
                        "\n 0. закончить регистрацию" <<
                        "\n Выберите транспорт или 0 для окончания регистрации ";

                    std::cin >> b;
                    if (b == 0) {
                        break;
                    }
                    else if (b > 7 || b < 0) {
                        continue;
                    }

                    else if (nom_rice_tipe == 1) {
                        if (b > 0 && b < 5) {

                            for (int i = 0; i < 10; ++i) {

                                if (mas[i] == device[b]) {
                                    std::cout << "\nДанный транспорт уже зарегистрирован";
                                    i = 15;
                                    b = 15;
                                    break;
                                }
                            }

                            if (b != 15) {
                                mass[ii] = b;
                                mas[ii] = device[b];
                                ++ii;
                            }
                        }

                        else {
                            std::cout << "\nДанный тип транспорта не подходит для данной трассы!";
                            continue;
                        }
                    }


                    else if (nom_rice_tipe == 2) {
                        if (b > 4 && b < 8) {

                            for (int i = 0; i < 10; ++i) {

                                if (mas[i] == device[b]) {
                                    std::cout << "\nДанный транспорт уже зарегистрирован";
                                    i = 15;
                                    b = 15;
                                    break;
                                }
                            }

                            if (b != 15) {
                                mass[ii] = b;
                                mas[ii] = device[b];
                                ++ii;
                            }
                        }

                        else {
                            std::cout << "\nДанный тип транспорта не подходит для данной трассы!";
                            continue;
                        }
                    }

                    else {
                        
                        for (int i = 1; i < 10; ++i) {
                            if (mas[i] == device[b]) {

                                std::cout << "\nДанный транспорт уже зарегистрирован";
                                i = 15;
                                b = 15;
                                continue;
                            }

                        }

                        if (b != 15) {

                            mass[ii] = b;
                            mas[ii] = device[b];
                            ++ii;
                        }
                    }

                } while (b != 0);
            }



            



        }while (a == 1);


        for (int i = 1; i < 10; ++i) {
                    if (mass[i] == 1) {
                        dinam_lib_Race::camel z1;
                        mas_time[i] = z1.funk_camel(long_distance);
                        ++sum;
                    }

                    else if (mass[i] == 2) {
                        dinam_lib_Race::camel_speedboat z2;
                        mas_time[i] = z2.funk_camel_speedboat(long_distance);
                        ++sum;
                    }

                    else if (mass[i] == 3) {
                        dinam_lib_Race::centaur z3;
                        mas_time[i] = z3.funk_centaur(long_distance);
                        ++sum;
                    }

                    else if (mass[i] == 4) {
                        dinam_lib_Race::all_terrain_boots z4;
                        mas_time[i] = z4.funk_all_terrain_boots(long_distance);
                        ++sum;
                    }

                    else if (mass[i] == 5) {
                        dinam_lib_Race::eagle z5;
                        mas_time[i] = z5.funk_eagle(long_distance);
                        ++sum;
                    }

                    else if (mass[i] == 6) {
                        dinam_lib_Race::broom z6;
                        mas_time[i] = z6.funk_broom(long_distance);
                        ++sum;
                    }

                    else if (mass[i] == 7) {
                        dinam_lib_Race::Magic_carpet z7;
                        mas_time[i] = z7.funk_Magic_carpet(long_distance);
                        ++sum;
                    }
                }
                
            
            
        for (int i = 1; i < sum; ++i) { //Сортировка пузырьком
                    for (int j = 1; j < sum; ++j) {
                        if (mas_time[j] > mas_time[j + 1]) {
                            double tmp = mas_time[j];
                            mas_time[j] = mas_time[j + 1];
                            mas_time[j+1] = tmp;

                            std::string tmp2 = mas[j];
                            mas[j] = mas[j + 1];
                            mas[j+1] = tmp2;
                        }



                    }





                }
            
        std::cout << "\n\tРезультат гонки: ";
        for (int i = 1; i < sum+1; ++i) {
                    std::cout << "\n\t" << i << ". " << mas[i] << ". Время: " << mas_time[i];

                }


        std::cout << "\n\n1. Провести ещё одну гонку\n2. Выйти\nВыберите действие:";
        std::cin >> e;
      
    }
  


    system("pause");
}    //end
