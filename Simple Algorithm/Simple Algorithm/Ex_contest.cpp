#include <iostream>
//#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;



////Факторизация числа
//int main()
//{
//	int x;
//	std::cin >> x;
//    vector <pair<int, long long>> ans;
//    for (long long i = 2; i * i <= x; i++) {
//        if (x % i == 0) {
//            ans.push_back(make_pair(0, i));
//            while (x % i == 0) {
//                x /= i;
//                ans[ans.size() - 1].first--;
//            }
//        }
//    }
//    if (x > 1) {
//        ans.push_back(make_pair(-1, x));
//    }
//    sort(ans.begin(), ans.end());
//    //cout << ans.size() << '\n';
//    for (int i = 0; i < ans.size(); i++) {
//        cout << ans[i].second << '\n';
//        if (-ans[i].first != 1) {
//            for (int j = 1; j < -ans[i].first; j++)
//                cout << ans[i].second << '\n';
//        }
//    }
//
//    //for (int i = 0; i < ans.size(); i++) {
//      //  printf("%I64d %d\n", ans[i].second, -ans[i].first);
//    //}
//
//    return 0;
//}

//переведение N в бинарный вид
//class Solution {
//public:
//    int findComplement(int num) {
//		int answer;
//		int ptr = 0;
//		int raz = 1;
//		while (pow(2, raz) <= num)
//		{
//			raz++;
//		}
//		int d = raz;
//		int* mas = new int[raz];
//		while (raz)
//		{
//			mas[raz - 1] = num % 2;
//			num /= 2;
//			raz--;
//		}
//	
//		for (int i = 0; i < d; i++) {
//			if (mas[i] == 0) {
//				mas[i] = 1;
//			}
//			else
//				mas[i] = 0;
//		}
//		int pow_two = 0;
//		int j = 0;
//		answer = 0;
//		for (int i = d - 1; i >= 0; i--) {
//			if (j == 0) {
//				pow_two = 1;
//			}
//			else
//				pow_two *= 2;
//			answer += mas[i] * pow_two;
//			j++;
//		}
//		delete[] mas;
//        return answer;
//    }
//};
//
////Проверка на простоту 
//int main()
//{
//	int x;
//	std::cin >> x;
//    if (x <= 1)
//    {
//        std::cout << 0;
//        return 0;  
//    }
//
//    for (int i = 2; i <= sqrt(x); i++)
//        if (x % i == 0) {
//            std::cout << 0;
//            return 0;
//        }
//    std::cout << 1;
//    return 0;
//}
//	
////Количество максимумов в последовательности
//int main()
//{
//	int x;
//	std::cin >> x;
//	int max = 0;
//	int count = 0;
//	while (x != 0)
//	{
//		if (x > max) {
//			max = x; count = 1;
//		}
//		else if (x == max) count++;
//		std::cin >> x;
//	}
//	std::cout << count;
//	return 0;
//}

////Наиьбольшее чётное число в последовательности
//int main()
//{
//	int x;
//	std::cin >> x;
//	int max = 0;
//	while (x != 0)
//	{
//		if (x % 2 == 0 && x > max) max = x;
//		std::cin >> x;
//	}
//	std::cout << max;
//	return 0;
//}


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