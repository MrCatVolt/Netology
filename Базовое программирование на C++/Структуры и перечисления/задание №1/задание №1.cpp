#include <iostream>
#include <string>

enum month {
    досвидание,
    январь,
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


int main()
{
    int a = 0, b = 0;
    std::cout << "Введите номер месяца:\n";
    std::cin >> a;
    month z = static_cast<month>(январь);
    //seasons season = static_cast<seasons>(1);
    std::cout << z << std::endl;


}


