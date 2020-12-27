//�������� �� 10^(-16)
//We have: fix point number and float point
//fix point save �������� ��� +,-,(*,/) - but ����� �������� overflow
//��� ������ ����� �� �����, ��� ������� �������� �� ����� ���� ����� ����� �����, ��� ��� ��� ���������
//������� ������� ����������� ��� ��������, ������ ����� ������ ������� ��������� ����������� ��������� �����
//������ ����� https://www.youtube.com/watch?v=2KTrsLcLODI&t=1226s
//���� ����������������� ��������� ���� NaN (Not a Number) - sNun � qNun, +inf, -inf, +0, -0
// �������� IEEE-754 (2008)

//Double ��� float - double

#include <iostream>
#include <cmath>
const double PI = 3.141592653589793238463;
using namespace std;

double f(double x) 
{
	return 2 * sin(x);
}

//��� �������

//int main()
//{
//	double x;
//	cin >> x;
//	cout << f(x) << endl;
//	
//	double s = 0.0;
//	double factor;
//	if (x == 0.0)
//	{
//		for (int n = 0, factor = 1; n < 7; n++)
//		{
//			s += pow(-1, n) * (x, (2 * n) + 1) / factor;
//			factor *= 2 * n * (2 * n + 1);
//			if (factor == 0) factor = 1;
//		}
//		cout << s << endl;
//	}
//
//	if (x != 0.0)
//	{
//		for (int n = 0, factor = 1; n < 7; n++)
//		{
//			s += pow(-1 + x, n) * sin(1 + (PI * n)/2) / factor;
//			factor *= n;
//			if (factor == 0) factor = 1;
//		}
//		cout << s << endl;
//	}
//}

//��������������
//int main()
//{
//    int i;
//    double Integral;
//    double a = 0.0, b = 1.0; // ������� ��������������
//    double h = 0.1;// ��� ��������������
//
//    double n; // ����� ��������� n
//
//    n = (b - a) / h;
//    // ��������� �������� �� ������� ����������� ��������������
//    Integral = 0.0;
//    for (i = 1; i <= n; i++)
//        Integral = Integral + h * f(a + h * (i - 0.5));
//    cout << "I1 = " << Integral << "\n";
//
//    // ��������� �������� �� ������� ��������
//    Integral = h * (f(a) + f(b)) / 2.0;
//    for (i = 1; i <= n - 1; i++)
//        Integral = Integral + h * f(a + h * i);
//    cout << "I2 = " << Integral << "\n";
//
//    // ��������� �������� �� ������� ��������
//    Integral = h * (f(a) + f(b)) / 6.0;
//    for (i = 1; i <= n; i++)
//        Integral = Integral + 4.0 / 6.0 * h * f(a + h * (i - 0.5));
//    for (i = 1; i <= n - 1; i++)
//        Integral = Integral + 2.0 / 6.0 * h * f(a + h * i);
//    cout << "I3 = " << Integral << "\n";
//}

//�������� ����� ����� ���������  
//const long double eps = 1e-10;
//long double f(long double x) 
//{
//	return x * x + sqrt(x);
//}
//
//int main() {
//	long double c, left = 0, right = 1e15, middle;
//	cin >> c;
//	while (fabs(right - left) > eps) {
//		middle = (left + right) / 2.0;
//		if (f(middle) - c < 0)
//			left = middle;
//		else
//			right = middle;
//	}
//	cout << fixed;
//	cout.precision(7);
//	cout << right;
//	return 0;
//}
