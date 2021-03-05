#include <iostream>
#include <cassert>
//Здача о муравье

//Треугольник Паскаля
int ant_recursive(int i, int j) {
	assert(i >= 0 and j >= 0);

	if (i == 1 or j == 1) {
		return 1;
	}
	else {
		return ant_recursive(i, j - 1) + ant_recursive(i - 1, j);
	}
}

//"Вектор в С++.
//Имеет ассимптотику массива a[i] за O(1)

#include <vector>


int ant_dynamic(int n, int m) {
	int result;
	int** k = new int* [n + 1];
	for (int h = 0; h < n + 1; h++)
		k[h] = new int[m + 1];

	for (int i = 2; i <= n; i++)
		k[i][1] = 1;
	for (int j = 2; j <= m; j++)
		k[1][j] = 1;

	for (int i = 2; i <= n; i++) {
		for (int j = 2; j <= m; j++) {
			k[i][j] = k[i - 1][j] + k[i][j - 1];
		}
	}

	result = k[n][m];
	for (int h = 0; h < n + 1; h++)
		delete[] k[h];
	delete[] k;

	return result;
	
}

#include <array>


int ant_dynamic_vector(int n, int m) {

	std::vector<std::vector<int>> k;
	k.resize(n + 1);

	for (int i = 1; i <= n; i++) {
		k[i].resize(m + 1);
	}

	for (int i = 2; i <= n; i++)
		k[i][1] = 1;
	for (int j = 2; j <= m; j++)
		k[1][j] = 1;

	for (int i = 2; i <= n; i++) {
		for (int j = 2; j <= m; j++) {
			k[i][j] = k[i - 1][j] + k[i][j - 1];
		}
	}
	
	return k[n][m];
}

//int main() {
//	int i;
//	int j;
//	std::cin >> i;
//	std::cin >> j;
//
//	for (int n = 1; n <= i; n++) {
//		for (int m = 1; m <= j; m++) {
//			std::cout << ant_dynamic(i, j) << '\t';
//		}
//		std::cout << '\n';
//	}
//	return 0;
//}


//Задача об укладке рюкзака
//Множество потенц. решение 2^N
//Ассимптотика O(2^N)
//Нет быстрого точно решения NP задачи

//Жадный алгоритм обычно дают приближённые решения, но не всегда оптимальные

//Дискретная задача
