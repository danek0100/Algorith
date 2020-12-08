#include <iostream>

int main()
{
	//Arifmetic
	int x = 1;
	int stop = 10;
	int step = 1;
	while (x < stop)
	{
		std::cout << x << '\n';
		x += step;
	}
	std::cout << '\n';

	// or
	for (int i = 1, stop = 100; i < stop; i++, stop--)
	{
		std::cout << x << '\n';
		x += step;
	}
	std::cout << '\n';

	// Geometric
	int x = 1;
	int stop = 10;
	int step = 2;
	while (x < stop)
	{
		std::cout << x << '\n';
		x *= step;
	}
	std::cout << '\n';

	// or
	for (int i = 1, stop = 100; i < stop; i++)
	{
		std::cout << x << '\n';
		x *= step;
	}
	std::cout << '\n';

}