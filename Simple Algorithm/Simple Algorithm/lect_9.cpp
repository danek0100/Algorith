//��������

//�������� - ������ �������� ������, ����� �������� � � ���������� (�), ����������� ��������, �� �����.





#include <iostream>

//��������� ����� �������� - ����� �����
uint64_t factorial(uint16_t n) {
	if (n == 0)
		return 1;
	return factorial(n - 1) * n;
}
//
//int main() {
//	uint16_t x;
//	std::cin >> x;
//	std::cout << factorial(x);
//	
//	return 0;
//}


//����������� main (��������� �� ����� ����������))))
//int main(int argc, char* argv[]) {
//	if (argc > 1)
//		return main(argc - 1, argv) * argc;
//	else
//		return 1;
//}

//����� ����������� ��������
int gcd(int a, int b) {
	return (b == 0) ? a : gcd(b, a % b);
}

int main() {
	int a, b;
	std::cin >> a >> b;
	std::cout << gcd(a,b);
	
	return 0;
}