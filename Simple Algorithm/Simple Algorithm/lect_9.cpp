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


//Рекурентный main (факториал от числа параметров))))
//int main(int argc, char* argv[]) {
//	if (argc > 1)
//		return main(argc - 1, argv) * argc;
//	else
//		return 1;
//}

//Поиск наибольшего делителя
int gcd(int a, int b) {
	return (b == 0) ? a : gcd(b, a % b);
}

int main() {
	int a, b;
	std::cin >> a >> b;
	std::cout << gcd(a,b);
	
	return 0;
}