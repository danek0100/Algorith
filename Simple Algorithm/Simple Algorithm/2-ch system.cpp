#include <iostream>
#include <cmath>
void dvoich_sys() {
	//2^n > M; ����� ����� ��������� ������� ��������, ��� M �������� ��������
	//��� ���� ���� ������ ������������� ������� ����
	
	//�������� �����, ��� ������ ������� �� ������ Zn. �������������, ������ 0-3. ��� 2*2 = 0;

	
}

//������� �� 10 � ��������
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

//������� �� n � ��������
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

void operationbinary()
{
	// & - and
	// | - or
	// ~ - not
	// >> - trans right
	// << - trans left
	// ^ - xor

	// When x != y and != 0 swap
	int  x = 5;
	int y = 2;
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;

	//Logic && - and || - or ! - not
}
