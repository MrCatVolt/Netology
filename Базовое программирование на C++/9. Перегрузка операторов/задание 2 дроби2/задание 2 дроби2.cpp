#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;
	double ant_x;
public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	double get_answer() {
		return ant_x;
	}


	Fraction operator+(Fraction other) {
		numerator_ = (numerator_ * other.denominator_) + (denominator_ * other.numerator_);
		denominator_ = (denominator_ * other.denominator_);
		
		return Fraction(numerator_, denominator_);
	}


	void get_print() {

		std::cout << numerator_ << "/" << denominator_ << "\n";
	}





};








int main()
{
	int x1 = 0, x2 = 0, x3 = 0, x4 = 0;

	std::cout << "Введите числитель дроби 1: ";
	std::cin >> x1;

	std::cout << "\nВведите числитель дроби 2: ";
	std::cin >> x2;

	std::cout << "\nВведите числитель дроби 3: ";
	std::cin >> x3;

	std::cout << "\nВведите числитель дроби 4: ";
	std::cin >> x4;



	Fraction f1(x1, x2);
	Fraction f2(x3, x4);

	Fraction sum_f1_f2 = f1 + f2;

	std::cout << x1 << "/" << x2 << " + " << x3 << "/" << x4 << " = " << sum_f1_f2.numerator_ << '\n';


	//42 слайд




	return 0;
}