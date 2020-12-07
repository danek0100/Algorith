#include <iostream>

int euclid_gcd(int a, int b)
{ //Алгоритм Евклида поиска НОД наибольшего общего делителя
	while (a != b)
	{
		if (a > b) a -= b;
		else b -= a;
		return a;
	}
}