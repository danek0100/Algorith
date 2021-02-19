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

////Поиск наибольшего делителя
//int gcd(int a, int b) {
//	return (b == 0) ? a : gcd(b, a % b);
//}
//
//int main() {
//	int a, b;
//	std::cin >> a >> b;
//	std::cout << gcd(a,b);
//	
//	return 0;
//}

//Хайнойские башни (3)
void hanoi(int i, int k, int n) {
	if (n == 1) {
		std::cout << "Move disk 1 from pin "
			<< i << " to pin " << k << ".\n";
	} else {
		int tmp = 6 - i - k;
		hanoi(i, tmp, n - 1);
		std::cout << "Move disk " << n <<
			" from pin " << i << " to pin "
			<< k << ".\n";
		hanoi(tmp, k, n - 1);
	}
}

//int main() {
//	hanoi(1,2,4);
//	
//	return 0;
//}

const int MAX_BINARY_DIGITS = 100;
//Генерация комбинаторных объектов
void generate_binary_num(int digits_lefr_to_generate) {
	static int digits_combination[MAX_BINARY_DIGITS];
	static int top = 0;

	if (digits_lefr_to_generate == 0) {
		for (int i = 0; i < top; i++)
			std::cout << digits_combination[i];
		std::cout << '\n';
	}
	else {
		digits_combination[top++] = 0;
		generate_binary_num(digits_lefr_to_generate - 1);
		top--;

		digits_combination[top++] = 1;
		generate_binary_num(digits_lefr_to_generate - 1);
		top--;

	}

}


//int main() {
//
//	generate_binary_num(10);
//
//	return 0;
//}