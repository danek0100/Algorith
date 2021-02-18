#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cstring>
#include <cstdlib>

using namespace std;

//Найти суммы двух минимальных и двух максимальных элементов в данном списке натуральных чисел.
//
//В данной задаче не следует запоминать все числа в память, в том числе использовать массив или список в явной форме.
//
//Поиск двух максимальных и двух минимальных чисел должен производиться однопроходным алгоритмом.
//
//Формат входных данных
//N - число элементов в массиве(4 < N < 1000000).На следующей строке — N натуральных чисел x : 1 <= x <= 1000000.
//
//	NB!Для решений на Python предполагается перебор слов строки при помощи for word in input().split() .
//
//	Формат выходных данных
//	Через пробел сумма двух минимальных и двух максимальных элементов.


int main() {
	int N;
	int min1 = 1000001;
	int min2 = 1000001;
	int max1 = 0;
	int max2 = 0;

	cin >> N;
	int n = 0;
	while (n < N) {
		int x;
		cin >> x;
		if (x < min1 && x < min2) {
			min2 = min1;
			min1 = x;
		}
		else if (x >= min1 && x <= min2)
			min2 = x;

		if (x > max1 && x > max2) {
			max2 = max1;
			max1 = x;
		}
		else if (x <= max1 && x >= max2)
			max2 = x;

		n++;
	}
	cout << min1 + min2 << ' ' << max1 + max2;
	return 0;
}

//int main() {
//	int N;
//	int x;
//	int y;
//
//	int n1 = 0;
//	int n2 = 0;
//	int n3 = 0;
//	int n4 = 0;
//
//	cin >> N;
//	int n = 0;
//	while (n < N) {
//		cin >> x;
//		cin >> y;
//		if (x == 0 || y == 0) {
//			n++;
//			continue;
//		}
//		if (x > 0) {
//			if (y > 0)
//				n1++;
//			else
//				n4++;
//		}
//		else {
//			if (y > 0)
//				n2++;
//			else
//				n3++;
//		}
//		n++;
//	}
//	int max = n1;
//	int index = 1;
//
//	std::vector<int> name = { n1 , n2, n3, n4 };
//	for (int i = 1; i < 4; i++) {
//
//		if (name[i] > max) {
//			max = name[i];
//			index = i + 1;
//		}
//	}
//	cout << index << ' ' << max;
//
//	return 0;
//}



//Дан список точек плоскости с целочисленными координатами.
//Необходимо определить номер координатной четверти K, в которой находится больше всего точек.
//Точки, хотя бы одна из координат которых равна нулю, считаются не принадлежащими ни одной четверти и не рассматриваются.
//Если одновременно в нескольких четвертях одинаковое и при этом максимальное количество точек, то вывести только первую по номеру.
//Замечание: в данной задаче можно обойтись без использования массива — использовать отдельные четыре счётчика.
//
//
//
//int main() {
//	int N;
//	int x;
//	int y;
//
//	int n1 = 0;
//	int n2 = 0;
//	int n3 = 0;
//	int n4 = 0;
//
//	cin >> N;
//	int n = 0;
//	while (n < N) {
//		cin >> x;
//		cin >> y;
//		if (x == 0 || y == 0) {
//			n++;
//			continue;
//		}
//		if (x > 0) {
//			if (y > 0)
//				n1++;
//			else
//				n4++;
//		}
//		else {
//			if (y > 0)
//				n2++;
//			else
//				n3++;
//		}
//		n++;
//	}
//	int max = n1;
//	int index = 1;
//
//	std::vector<int> name = { n1 , n2, n3, n4 };
//	for (int i = 1; i < 4; i++) {
//
//		if (name[i] > max) {
//			max = name[i];
//			index = i + 1;
//		}
//	}
//	cout << index << ' ' << max;
//
//	return 0;
//}



// Перед экзаменом Петя решил хорошенько выспаться.После криков "Халява, приди!" наш студент лег в кровать и начал заводить будильник.Посчитайте сколько секунд осталось спать до звонка.
//class DateTime
//{
//	friend int getDifference(DateTime& tim, DateTime& tim_2);
//private:
//	struct tm str_time;
//	int second;
//public:
//	DateTime(int, int, int);   // конструктор с параметром числового типа
//	DateTime();
//	DateTime(const DateTime&);
//};
//
//DateTime::DateTime(int hour, int minute, int second)
//{
//	time_t rawtime = 0;
//
//	rawtime += second + (minute * 60) + (hour * 3600);
//	this->second = second + (minute * 60) + (hour * 3600);
//	str_time = *gmtime(&rawtime);
//}
//
//DateTime::DateTime()
//{
//	time_t rawtime;
//	time(&rawtime);
//	struct tm* kopy;
//	kopy = &str_time;
//	kopy = localtime(&rawtime);
//	str_time = *kopy;
//}
//
//DateTime::DateTime(const DateTime& s)
//{
//	str_time = s.str_time;
//}
//
//int getDifference(DateTime& tim, DateTime& tim_2)
//{
//	time_t time_y = mktime(&tim_2.str_time);
//	time_t time_y2 = mktime(&tim.str_time);
//	time_t diff = 0;
//	int dif = 0;
//	if (tim.second >= tim_2.second)
//	{
//		dif = tim.second - tim_2.second;
//		return dif;
//	}
//	else
//	{
//		dif = tim_2.second - tim.second;
//		return dif;
//	}
//
//
//
//	if (time_y >= time_y2)
//	{
//		diff = time_y - time_y2;
//		return diff;
//	}
//	else
//	{
//		diff = time_y2 - time_y;
//		return diff;
//	}
//
//}
//
//int main() {
//	int hour_s = 0;
//	int minute_s = 0;
//	int second_s = 0;
//
//	int hour_e = 0;
//	int minute_e = 0;
//	int second_e = 0;
//
//	scanf("%d:%d:%d", &hour_s, &minute_s, &second_s);
//	scanf("%d:%d:%d", &hour_e, &minute_e, &second_e);
//
//	int second_1 = second_s + (minute_s * 60) + (hour_s * 3600);
//	int second_2 = second_e + (minute_e * 60) + (hour_e * 3600);
//	int dif = 0;
//	if (second_1 >= second_2)
//	{
//		dif = (24 * 3600) - second_1;
//		dif += second_2;
//	}
//	else
//	{
//		dif = second_2 - second_1;
//	}
//	cout << dif;
//	return 0;
//
//}

//Вавилоская система счисления
// Где-то ошибка... Мб в понимании задачи?
/*В вавилонской системе счисления для записи чисел внутри 60-ричного разряда использовались всего два знака:
стоячий клин "v" (латинская строчная v) для обозначения единиц и лежачий клин "<" (знак строго меньше) для обозначения 
десятков. Для формирования разряда сначала выписывалось количество десятков, а затем количество единиц. 
Разряды вавилоняне разделяли пустым пространством, однако мы будем использовать для этого точку ".". 
Если какой-то разряд отсутствовал, на его месте ничего не писалось. Вам требуется записать поданное на вход число
в вавилонской системе.*/
//Непроходит некоторые закрытые тесты, хотя все открытые и некоторые закрытые варианты работают :-(
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
//Задача про гаишника
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