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

#include <iostream>
void input_a(double* A, int16_t n) {
	for (int i = 0; i < n; i++) {
		std::cin >> A[i];
	}
}

void merge_sort(double* A, int16_t n) {
	if (n <= 1) return;
	int16_t middle = n / 2;
	double* left = A;
	double* right = A + middle;

	//
	int16_t left_size = middle;
	int16_t right_size = n - left_size;

	//
	merge_sort(left, left_size);
	merge_sort(right, n - right_size);
	
	//
	double* buf = new double[n];
	int16_t l_i = 0;
	int16_t r_i = 0;
	int16_t buf_i = 0;
	while (l_i < left_size && r_i < right_size) {
		if (left[l_i] <= right[r_i]) {
			buf[buf_i] = left[l_i];
			l_i++;
			buf_i++;
		}
		else {
			buf[buf_i] = right[r_i];
			r_i++;
			buf_i++;
		}
	}

	while (l_i < left_size) {
		buf[buf_i] = left[l_i];
		l_i += 1;
		buf_i += 1;
	}

	while (r_i < right_size) {
		buf[buf_i] = right[r_i];
		r_i += 1;
		buf_i += 1;
	}

	for (int16_t i = 0; i < n; i++) {
		A[i] = buf[i];
	}
	delete[] buf;
}

void print_a(double* A, int16_t n) {
	for (int i = 0; i < n; i++) {
		std::cout << A[i] << ' ';
	}
	std::cout << '\n';
}


const int MAX_ARRAY_SIZE = 10000;
//
//int main() {
//	int16_t n;
//	std::cin >> n;
//	if (n <= 0 || n > MAX_ARRAY_SIZE) {
//		std::cerr << "Array trouble";
//		return 1;
//	}
//	double* A = new double[n];
//
//	input_a(A, n);
//	merge_sort(A, n);
//	print_a(A, n);
//	return 0;
//}