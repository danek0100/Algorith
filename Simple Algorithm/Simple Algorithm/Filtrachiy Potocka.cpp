#include <iostream>

void Filtryachiya()
{
	for (int i = 0; i < 5; i++)
	{
		int x = 0;
		std::cin >> x;
		if (x % 13 != 0 || x != 666) continue;
		std::cout << x << '\n';
	}
}