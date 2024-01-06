#include <iostream>
#include <string>
#include <cstring>
#include <Windows.h>
#include <utility>
#include <memory>

class smart_array {
private:
	int size;
	int step_size;
	std::shared_ptr <int> arr; // объявляю переменные в массиве.

public:

	smart_array(int s) {
		this->size = s;			// размер массива
		this->step_size = 0;	// шаг в массиве
		//this->arr = new int[s]; 

		arr = std::make_shared<int>(s); // создаю массив с помощью умного указателя
	}




	void add_element(int new_nomber) {// ложу новый элемент в массив
		//arr(step_size )= new_nomber;
		//*arr[step_size] = new_nomber;
		//std::make_shared<int>arr (step_size) = new_nomber;
		//arr = std::move(arr[step_size] = new_nomber);


		arr = std::make_unique<int>(std::move(new_nomber));


			step_size++;
	}

};

int main()
{




	smart_array arr(5);
	arr.add_element(1);
	arr.add_element(4);
	arr.add_element(155);

	smart_array new_array(2);
	new_array.add_element(44);
	new_array.add_element(34);

	arr = new_array;



	//std::shared_ptr<int> ptr1 = std::make_shared<int>(17);




}



