#include <cmath>
#include <iostream>
bool simple(int a)
{
	bool flag = true;
	for (int d = 2; d < sqrt(a); ++d)
	{
		if (a % d == 0) 
		{
			flag = false;
			break;
		}
	}
	return flag;
}

void parth(int x)
{
	int d = 2;
	while (x != 1)
	{
		if (x % d == 0) 
		{
			std::cout << d << '\n';
			x /= d;
		}
		else
		{
			d++;
		}
	}
}