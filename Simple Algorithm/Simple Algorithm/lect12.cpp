#include <iostream>
#include <cassert>
//Здача о муравье

int ant_recursive(int i, int j) {
	assert(i >= 0 and j >= 0);

	if (i == 1 or j == 1) {
		return 1;
	}
	else {
		return ant_recursive(i, j - 1) + ant_recursive(i - 1, j);
	}

}

int ant_dynamic(int i, int j) {

}

int main() {
	int i;
	int j;
	std::cin >> i;
	std::cin >> j;
	std::cout << ant_dynamic(i, j) << std::endl;
	return 0;
}