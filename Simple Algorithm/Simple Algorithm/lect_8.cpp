
//O(1) - доступ к индексу масива 

//Однопроходный поиск (Линейный) O(N)
//true / false
// or index

//поиск последнего нужного элемента
int len_find(int* A, int n, int x) {
	int index = -1;
	for (int i = 0; i < n; i++) {
		if (A[i] == x)
			index = i;
	}
	return index;
}
//Поиск первого нужного элемета 
int find(int A[], int n, int x) {
	int index = -1;
	for (int i = 0; i < n; i++) {
		if (A[i] == x)
			return i;
	}
	return index;
}
//Поиск левой границы для числа в упорядоченом массиве
int left_bound(int A[], int N, int x)  { 
	int left = -1;
	int right = N;
	while (right - left > 1) {
		int middle = (left + right) / 2; //округление вниз
		if (A[middle] < x)
			left = middle;
		else
			right = middle;
	}
	return left;
}

//Бинарный поиск O(log2(N));
int find_bin(int A[], int N, int x) {
	int left = left_bound(A, N, x);
	int potential_f_ind_of_x_in_a = left + 1;
	if (potential_f_ind_of_x_in_a < N &&
		A[potential_f_ind_of_x_in_a] == x)
		return potential_f_ind_of_x_in_a;
	else
		return -1; //x not found
}

//bouble sort

//choice sort
//for (int pos = 0; i < all_pos; pos++) {
/*
	for (int i = pos + 1; pos < all_pos; i++){
		if (a[i] < a[pos])
		{
		int t = a[i];
		a[i] = a[pos];
		a[pos] = a[i]
		}
	}
}

*/

//insert sort
//for (int pos = 1; pos < N; pos++) {
/*while ( i > 0 && a[i - 1] > a[i]) {
	int t = a[i]
	a[i] = a[i - 1];
	a[i - 1] = t;
	i--;
	}
}
*/

//Сортировка подсчётом O(N) O(N+M) 
/*
void count_sort(int A*, int N) { 
	//Обязательно знать диапазон частот в частности (0-9)
	int F[10] = {0};
	int* B = new int [10];
	for (int i = 0; i < N; i++)
		F[A[i]]++;
	int i = 0;
	for (int x = 0; x < 10; x++)
		for (int k = 0; k < F[x]; k++)
			A[i++] = x;
}

void gen_ran_array(int* A, int N, int M){
	for( int i = 0; i < N; i++)
		A[i] = rand() %	M;
}

void print_array(int A*, int N) {
	for (int i = 0; i < N; i++)
		std::cout << A[i] << '\t';
	std::cout << '\n';
}

//поразрядная сортировка Radix sort O(M * N) + дополнительная память O(N) - минимум
M = log2(A[i]-max) 

void radix_sort(int A*, int N) {
	//Обязательно знать диапазон частот в частности (0-9)
	int *a0 = new int[N];
	int *a1 = new int[N];
	
	//К примеру 32
	for(int radix = 0; radix < 32; radix++) {
		int a0_size = 0;
		int a1_size = 0;
		for (int i = 0; i < N; i++) {
			if ((A[i] & (1 << radix)) == 0) {
				a0[a0_size++] = A[i];
			else
				a1[a1_size++] = A[i];
			}
			for(int i = 0; i < a[0]_size; i++)
				A[i] = a0[i];
			for (int i = 0; i < a1_size; i++)
				A[a0_size + i] = a1[i];	
		}
	}
	delete[] a0;
	delete[] a1;
	
}
*/
#include <iostream>
using namespace std;
//int main() {
//	int A[10] = { 1, 3, 3, 7, 7, 7, 7, 9, 10, 10 };
//	int x;
//	cin >> x;
//	cout << "index  of x is: " << find(A, 10, x) << '\n';
//    return 0;
//}
//int A[N];
//int x;
//std::cin >> x;

