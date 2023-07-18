#include <iostream>
#include <string>
#include <Windows.h>

int function(std::string str, int forbidden_length) {


	int d = str.length(); // тут добавить подсчёт символов в строке.
	//int z = strlen(str);

	if (d == forbidden_length) {
		throw std::runtime_error("Вы ввели слово запретной длины! До свидания");
	}

	return d;
}




int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a = 0, b = 0;
	std::string c;

	std::cout << "Введите запретную длину: ";
	std::cin >> a;

	for (;;) {

		std::cout << "Введите слово: ";
		std::cin >> c;

		try {
			b = function(c, a);
			std::cout << "Длина слова " << c << " равна " << b << std::endl;
		}




		catch (const std::runtime_error& z1) {
			std::cout << z1.what() << "\n";
			break;
		}
	}


}