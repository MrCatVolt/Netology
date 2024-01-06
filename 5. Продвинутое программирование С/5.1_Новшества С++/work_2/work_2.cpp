#include <iostream>
#include <Windows.h>
#include <vector>
#include <algorithm>

#include <variant>
#include <string>
#include <ctime>


std::variant<int, std::string, std::vector<int>> get_variant() {
    std::srand(std::time(nullptr));
    int random_variable =2 ; //std::rand() % 3;

    std::variant<int, std::string, std::vector<int>> result;
    switch (random_variable)
    {
    case 0:
        result = 8;
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

int main()
{
    std::variant<int, std::string, std::vector<int>> take_result = get_variant();

    bool is_nom = std::holds_alternative <int>(take_result);
    bool is_str = std::holds_alternative <std::string>(take_result);
     //bool is_vek = std::holds_alternative <std::vector>(take_result); // std::holds_alternative - не умеет сравнивать вектора?



    // выполню соответствующее действие
    if (is_nom) {
        auto nom = std::get_if<int>(&take_result);
        int z = (*nom) * 2;
        std::cout << z << "\n";
    }

    else if (is_str) {
        auto str = std::get_if<std::string>(&take_result);
        std::string z = *str;
        std::cout << z << "\n";
    }

   else  {
       // auto vek = std::get_if<std::vector>(&take_result);

        //std::vector<int> vek  = std::get_if<std::vector>(&take_result);

        std::vector<int> vek = std::get_if<std::vector>(vector <int>& take_result);

        for (int i = 0; i < 5; ++i) {
            std::cout << vek[i] << "\n";
        }
    }


}


