#include <iostream>
#include <Windows.h>
#include <vector>
#include <algorithm>

#include <variant>
#include <string>
#include <ctime>


std::variant<int, std::string, std::vector<int>> get_variant() {
        std::srand(std::time(nullptr));
        int random_variable = std::rand() % 3;

        std::variant<int, std::string, std::vector<int>> result;
        switch (random_variable)
        {
        case 0:
            result = 5;
            break;
        case 1:
            result = "string";
            break;
        case 2:
            result = std::vector<int>{ 1, 2, 3, 4, 5 };
            break;
        default:
            break;
        }
        return result;
    }



int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);

    bool is_nom = std::holds_alternative <int>(get_variant);    //считаю значения и определюсь что выдала мне функция.
    bool is_str = std::holds_alternative <std::string>(get_variant);
    bool is_vek = std::holds_alternative <std::vector>(get_variant);

    // выполню соответствующее действие
    if (is_nom == 1) {
        auto nom = std::get_if<int>(&get_variant);
        nom = nom * 2;
        std::cout << nom << "\n";
    }

    else if (is_str == 1) {
        auto str = std::get_if<std::string>(&get_variant);
        
        std::cout << str << "\n";
    }

    else if (is_vek == 1) {
        auto vek = std::get_if<std::vector>(&get_variant);
        for (int i = 0; i < 5; ++i) {
            std::cout << vek[i] << "\n";
        }
    }

    else {
        std::cout << "объект не определён \n";
    }

}