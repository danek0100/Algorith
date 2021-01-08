#include <iostream>

using namespace std;

//int main()
//{
//	int const N = 5;
//	int A[N] = { 1, 2, 3, 4, 5 };
//	int B[N];
//
//	//copy A -> B
//	for (int i = 0; i < N; i++)
//		B[i] = A[i];
//	//reverse 
//	for (int i = 0; i < N; i++)
//		B[N- i - 1] = A[i];
//	//reverse A
//	for (int i = 0; i < N / 2; i++) {
//		int temp = A[i];
//		A[i] = A[N - i - 1];
//		A[N - i - 1] = temp;
//	}
//
//	//half_dinamyck_mass
//	const int MAX_A_SIZE = 100;
//	int C[MAX_A_SIZE];
//	int top = 0;
//
//	int x;
//	cin >> x;
//	while (x != 0)
//	{
//		A[top++] = x;
//		cin >> x;
//	}
//	while (top > 0)
//		std::cout << A[--top] << '\t';
//	cout << '\n';
//	return 0;
//}

//chek of sort
//int main()
//{
//	int const N = 5;
//	int A[N] = { 1, 2, 3, 4, 5 };
//	
//	bool is_sorted = true;
//
//	int i = 0;
//	while (i < N - 1) {
//		if (A[i] > A[i + 1])
//		{
//			is_sorted = false;
//			break;
//		}
//		i++;
//	}
//
//	cout << is_sorted;
//	return 0;
//}

//stupid_sort
//int main()
//{
//	int const N = 5;
//	int A[N] = { 1, 3, 2, 4, 5 };
//	int i = 0;
//
//	while (i < N - 1) {
//		if (A[i] > A[i + 1])
//		{
//			int temp = A[i];
//			A[i] = A[i + 1];
//			A[i + 1] = temp;
//			i = 0;
//		}
//		else i++;
//	}
//
//	int n = N;
//	while (n > 0)
//		std::cout << A[--n] << '\t';
//	cout << '\n';
//	return 0;
//}

// Существует ассимтотическая оценка сложности алгоритма N = k * f(x) или O(N)
//Существует объезьяния сортировка, когда мы трясём ящик (выбираем случайные перестановк
//и проверяем на отсортированнность такой алгорити имеет сложность O(n!)

//bouble sort O(n^2)
//int main()
//{
//	int const N = 5;
//	int A[N] = { 1, 3, 2, 4, 5 };
//	bool is_sorted = false;
//	while (!is_sorted) {
//		int i = 0;
//		is_sorted = true;
//		while (i < N - 1) {
//			if (A[i] > A[i + 1])
//			{
//				int temp = A[i];
//				A[i] = A[i + 1];
//				A[i + 1] = temp;
//				is_sorted = false;
//			}
//			i++;
//		}
//	}
//
//	int n = N;
//	while (n > 0)
//		std::cout << A[--n] << '\t';
//	cout << '\n';
//	return 0;
//}