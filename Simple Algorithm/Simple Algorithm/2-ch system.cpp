#include <iostream>
#include <cmath>
void dvoich_sys() {
	//2^n > M; Нужно чтобы кодировть сколько символов, где M мощность алфавита
	//При этом коды должны удволетворять условию Фано
	
	//Хранение чисел, как кольцо вычетов по модулю Zn. Ограниченость, пример 0-3. Где 2*2 = 0;

	
}

//Перевод из 10 в двоичную
void translation(int number) {
	int ptr = 0;
	int raz = 1;
	while (pow(2, raz) <= number)
	{
		raz++;
	}
	int d = raz;
	int* mas = new int[raz];
	while (raz)
	{
		mas[raz - 1] = number % 2;
		number /= 2;
		raz--;
	}

	for (int i = 0; i < d; i++) {
		std::cout << mas[i];
	}
}

//Перевод из n в двоичную
void translation_n(int number, int sys) {
	if (sys)
	{
		int num = 0;
		int raz = 0;
		while (number) 
		{
			num += ((number % 10) * (int)pow(sys, raz));
			number /= 10;
			raz++;
		}
		translation(num);
	}
}

int main()
{
	translation_n(111, 2);
}