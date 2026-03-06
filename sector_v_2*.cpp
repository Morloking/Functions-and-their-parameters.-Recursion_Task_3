//Version_2* 
#include <iostream>

void printFib(unsigned long long num) {
	unsigned long long fir = 0, sec = 1;
	if (num == 1) { std::cout << fir; return; }
	if (num >= 2) { std::cout << fir << " " << sec;}
	for (unsigned long long i = 3; i <= num; ++i) {
		unsigned long long next = fir + sec;
		std::cout << " " << next;
		fir = sec;
		sec = next;
	}
	std::cout << "\n";
}

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	unsigned long long num{ 0 };
	std::cout << "Введите число: ";
	std::cin >> num;
	std::cout << "Числа Фибоначчи: ";
	printFib(num);
}
