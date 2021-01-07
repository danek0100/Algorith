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
//	return 0;
//}
