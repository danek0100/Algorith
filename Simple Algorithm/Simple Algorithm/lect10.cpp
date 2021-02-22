//������� � ��������� (����� ������ � ������)
//����� ������������ ��� ������� ��������


//��������� ������������

#include <iostream>
using namespace std;

const int MAX_BINARY_DIGITS = 100;
//��������� ������������� ��������
void permunations(int16_t* buffer, int16_t current, int16_t number, bool* used) {
	static int digits_combination[MAX_BINARY_DIGITS];
	static int top = 0;

	if (current == number) {
		for (int i = 0; i < number; i++)
			std::cout << buffer[i] << ' ';
		std::cout << '\n';
	}
	else {
		for (int16_t variant = 0; variant < number; variant++) {
			if (!used[variant]) {
				buffer[current] = variant;
				used[variant] = true;
				permunations(buffer, current + 1, number, used);
				used[variant] = false;
			}
		}
	}
}

//���������� ���������� ����� ������������ ����������
//� ����������� ������� � ���������� ������ �������������

//
//int main() {
//
//	int n;
//	cin >> n;
//	if (n > 20) {
//		cerr << "To big";
//		return 1;
//	}
//	else if (n <= 0) {
//		cerr << "Negative";
//		return 1;
//	}
//
//	int16_t* buffer = new int16_t[n];
//	bool* used = new bool[n];
//	used = { false };
//	permunations(buffer, 0, n, used);
//
//
//	delete[] buffer;
//	return 0;
//}

// ��������� ��������� ����������, ��� ��������� ����� ��������� ������� ��� �� O(n^2)


//������� ����������� ����������
//���� ������ � ��������

