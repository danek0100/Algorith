#include <iostream>


int main()
{
	int x;
	std::cin >> x;
	int count = 0;
	while (x != 0)
	{
		if (x % 2 == 0) count++;
		std::cin >> x;
	}
	std::cout << count;
	return 0;
}

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