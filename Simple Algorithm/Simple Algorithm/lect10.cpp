//Перебор с возвратом (метод ветвей и границ)
//Часто используется для полного перебора


//Генерация перестановок

#include <iostream>
using namespace std;

const int MAX_BINARY_DIGITS = 100;
//Генерация комбинаторных объектов
void permunations(int16_t* buffer, int16_t current, int16_t number, bool* used) {
	static int digits_combination[MAX_BINARY_DIGITS];
	static int top = 0;

	if (current == number) {
		for (int i = 0; i < number; i++)
			std::cout << buffer[i] << ' ';
		std::cout << '\n';
	}
	else {
		for (int16_t variant = 0; variant < number; variant++) {
			if (!used[variant]) {
				buffer[current] = variant;
				used[variant] = true;
				permunations(buffer, current + 1, number, used);
				used[variant] = false;
			}
		}
	}
}

//глобальные переменные враги паралельного исполнения
//и статические массивы и переменные мешают паралелльному

//
//int main() {
//
//	int n;
//	cin >> n;
//	if (n > 20) {
//		cerr << "To big";
//		return 1;
//	}
//	else if (n <= 0) {
//		cerr << "Negative";
//		return 1;
//	}
//
//	int16_t* buffer = new int16_t[n];
//	bool* used = new bool[n];
//	used = { false };
//	permunations(buffer, 0, n, used);
//
//
//	delete[] buffer;
//	return 0;
//}

// Умножение Караццубы показывает, что умножение можно выполнить быстрее чем за O(n^2)


//Быстрые рекурентные сортировки
//Тони Хорана и Слиянием

