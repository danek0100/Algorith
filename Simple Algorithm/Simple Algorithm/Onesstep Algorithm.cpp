#include <iostream>
void onesstep() {
	int count = 0;
	int sum = 0;
	int product = 1;
	int max = 0;
	for (int i = 1; i < 111; i+=2)
	{
		count += 1;
		sum += i;
		product *= i;
		if (i > max) max = i;
	}
	std::cout << count << '\n';
	std::cout << sum << '\n';
	std::cout << product << '\n';
	std::cout << max << '\n';
}