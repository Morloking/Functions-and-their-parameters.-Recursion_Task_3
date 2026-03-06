//Version_1 Simple 
#include <iostream>

int calcFib(int num) {
	if (num == 1) return 0;
	if (num == 2) return 1;
	return calcFib(num-1)+calcFib(num-2);
}
void printFib(int num) {
	for (int i = 1; i <= num; ++i) {
		if (i > 1) std::cout << " ";
		std::cout << calcFib(i);
	}
	std::cout << "\n";
}

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	int num{ 0 };
	std::cout << "Введите число: ";
	std::cin >> num;
	std::cout << "Числа Фибоначчи: ";
	printFib(num);
}

//Version_2* 
