#include <iostream>
#include <string>
#include <cstring>
#include <Windows.h>


class smart_array {
private:
	int size;
	int step_size;
	int* arr;
	int* temp;

public:
	
	smart_array(int s) {
		this -> size = s;
		this-> step_size = 0;
		this -> arr = new int [s];
	}

	void add_element (int new_nomber){
	
		if (step_size <= size) {
			arr[step_size] = new_nomber;
			step_size++;
			}

		else {
			
			int* temp = new int[size*2];
			for (int i = 0; i < size; i++) {
				temp[i] = arr[i];
			}
			size = size * 2;

			delete[] arr;
			int* arr = new int[size];

			for (int i = 0; i < size; i++) {
				arr[i] = temp[i];
			}
			delete[] temp;

			arr[step_size] = new_nomber;
			step_size++;

		}

	}

	int get_element(int a) {

		return arr[a];

	}

	~smart_array() {
		delete[] arr;
	}


};









int main()
{
   
	try {
		smart_array arr(5);
		arr.add_element(1);
		arr.add_element(4);
		arr.add_element(155);
		arr.add_element(14);
		arr.add_element(15);
		std::cout << arr.get_element(1) << std::endl;
	}
	catch (const std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}







}


