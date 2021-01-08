#include <iostream>



//Наиьбольшее чётное число в последовательности
int main()
{
	int x;
	std::cin >> x;
	int max = 0;
	while (x != 0)
	{
		if (x % 2 == 0 && x > max) max = x;
		std::cin >> x;
	}
	std::cout << max;
	return 0;
}


//Точная степень двойки
//int main()
//{
//	int N;
//	std::cin >> N;
//	int two_pow = 1;
//	while (two_pow < N)
//	{
//		two_pow *= 2;
//	}
//	if (two_pow == N)
//		std::cout << "YES";
//	else
//		std::cout << "NO";
//	return 0;
//}

//Количество чётных чисел
//int main()
//{
//	int x;
//	std::cin >> x;
//	int count = 0;
//	while (x != 0)
//	{
//		if (x % 2 == 0) count++;
//		std::cin >> x;
//	}
//	std::cout << count;
//	return 0;
//}

//Високосный год
//int main()
//{
//	int N;
//	std::cin >> N;
//	if (N % 4 == 0)
//	{
//		if (N % 400 == 0)
//			std::cout << "YES";
//		else if (N % 100 == 0)
//			std::cout << "NO";
//		else 
//			std::cout << "YES";
//	}
//	else
//		std::cout << "NO";
//	return 0;
//}