#include <iostream>
//#include <cmath>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

//¬авилоска€ система счислени€
// √де-то ошибка... ћб в понимании задачи?
/*¬ вавилонской системе счислени€ дл€ записи чисел внутри 60-ричного разр€да использовались всего два знака:
сто€чий клин "v" (латинска€ строчна€ v) дл€ обозначени€ единиц и лежачий клин "<" (знак строго меньше) дл€ обозначени€ 
дес€тков. ƒл€ формировани€ разр€да сначала выписывалось количество дес€тков, а затем количество единиц. 
–азр€ды вавилон€не раздел€ли пустым пространством, однако мы будем использовать дл€ этого точку ".". 
≈сли какой-то разр€д отсутствовал, на его месте ничего не писалось. ¬ам требуетс€ записать поданное на вход число
в вавилонской системе.*/
//Ќепроходит некоторые закрытые тесты, хот€ все открытые и некоторые закрытые варианты работают :-(
//int main()
//{
//	int N;
//	std::cin >> N;
//	char mass[10000];
//	int pointer = 0;
//
//	int raz = 1;
//	int check = 60;
//	while (check <= N){
//		check = pow(60, raz);
//		raz++;
//	}
//	if (check != 60)
//		raz--;
//	while (raz > 0){
//		if (raz == 1) {
//			int ten = N / 10;
//			int ed = N % 10;
//			for (int i = 0; i < ten; i++) {
//				mass[pointer++] = '<';
//			}
//			for (int i = 0; i < ed; i++) {
//				mass[pointer++] = 'v';
//			}
//			raz = 0;
//			break;
//		}
//		int des = N / (pow(60, raz - 1));
//		for (int i = 0; i < des; i++) {
//			mass[pointer++] = 'v';
//		}
//		mass[pointer++] = '.';
//		N = N - des * (pow(60, raz - 1));
//		raz--;
//	}
//	mass[pointer] = '\0';
//	std::cout << mass;
//    return 0;
//}
//«адача про гаишника
//int main()
//{
//	typedef struct car {
//		int speed;
//		char number[7];
//	}CAR;
//
//	CAR now_car;
//	std::cin >> now_car.speed;
//	std::cin >> now_car.number;
//	now_car.number[6] = '\0';
//	int pain = 0;
//	while (strcmp(now_car.number, "A999AA")) {
//		if (now_car.speed > 60) {
//			int sov = 1;
//			for (int i = 1; i < 3; i++) {
//				for (int j = i + 1; j < 4; j++) {
//					if (now_car.number[i] == now_car.number[j])
//						sov++;
//				}
//			}
//			/*if (now_car.number[1] == now_car.number[2] && now_car.number[2] && now_car.number[3]) pain += 1000;
//			else if (now_car.number[1] == now_car.number[2] || now_car.number[1] == now_car.number[3] || now_car.number[2] == now_car.number[3]) pain += 500;
//			else pain += 100;*/
//			if (sov > 2) pain += 1000;
//			else if (sov == 2) pain += 500;
//			else pain += 100;
//		}
//		std::cin >> now_car.speed;
//		std::cin >> now_car.number;
//		now_car.number[6] = '\0';
//	}
//	std::cout << pain;
//    return 0;
//}

////‘акторизаци€ числа
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
////ѕроверка на простоту 
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
//// оличество максимумов в последовательности
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

////Ќаиьбольшее чЄтное число в последовательности
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


//“очна€ степень двойки
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

// оличество чЄтных чисел
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

//¬исокосный год
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