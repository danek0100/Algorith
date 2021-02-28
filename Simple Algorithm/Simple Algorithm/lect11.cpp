#include <iostream>
#include <cassert>
#include <algorithm>
#include <cmath>
#include <cstdlib>

//Очень быстро растёт дерево Фибоначи, чем больше n тем больше дерево
//O(Fi(n)) - сложность равна числу фибоначи, количество вызвов для предыдущих
uint64_t fib_recursive(int n) {
	assert(n >= 0);
	if (n == 0 || n == 1) {
		return n;
	}
	else {
		return fib_recursive(n - 1) + fib_recursive(n - 2);
	}
}

uint64_t fib_dynamic(int n) {
	uint64_t result = 0;
	uint64_t* fib = new uint64_t[n + 1];
	fib[0] = 0;
	fib[1] = 1;

	for (int i = 2; i <= n; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	result = fib[n];
	delete[] fib;
	return result;
}

//int main() {
//	for (int n = 0; n < 60; n++) {
//		std::cout << n << '\t' << fib_recursive(n) << '\t' << fib_dynamic(n) << '\n';
//	}
//}

//Кузнечик (динамическое программирование)
//Можно удалить массив, но тогда не получится найти обратный путь
uint64_t min_cost(int n, uint64_t* price) {
	uint64_t* cost = new uint64_t[n+1];
	cost[1] = price[1];
	cost[2] = price[1] + price[2];
	uint64_t result = 0;

	for (int i = 3; i <= n; i++) {
		cost[i] = std::min(cost[i - 1], cost[i - 2]) + price[i];
	}


	int current = n;
	std::cout << "Min path (reversed)" << '\n';
	std::cout << current << " ";
	while (current != 1) {
		if (cost[current - 1] == cost[current] - price[current])
			current = current - 1;
		else if (cost[current - 2] == cost[current] - price[current])
		current = current - 2;
		else 
			throw -1;
		std::cout << current << " ";
	}
	result = cost[n];
	return result;
}

//int main() {
//	int n;
//	std::cin >> n;
//	uint64_t* price = new uint64_t[n + 1];
//	for (int i = 1; i <= n; n++) {
//		std::cin >> price[i];
//	}
//	std::cout << "Min cost = " << min_cost(n, price) << '\n';
//	delete[] price;
//}