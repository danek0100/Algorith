//Рекурсия

//Рекурсия - способ решеения задачи, через сведение её к подзадачам (е), аналогичным исходной, но проще.





#include <iostream>

//Факториал через рекурсию - очень плохо
uint64_t factorial(uint16_t n) {
	if (n == 0)
		return 1;
	return factorial(n - 1) * n;
}
//
//int main() {
//	uint16_t x;
//	std::cin >> x;
//	std::cout << factorial(x);
//	
//	return 0;
//}


int main() {
	uint16_t x;
	std::cin >> x;
	std::cout << factorial(x);

	return 0;
}