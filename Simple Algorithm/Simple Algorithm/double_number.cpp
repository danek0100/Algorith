//“очность до 10^(-16)
//We have: fix point number and float point
//fix point save точность при +,-,(*,/) - but нужно избегать overflow
//„ем меньше число до точки, тем большую точность мы можем дать части после точки, так как при понижении
//степени мантисы уменьшаетс€ шаг точности, значит между нашими числами возникает возможность сохранить более
//точное число https://www.youtube.com/watch?v=2KTrsLcLODI&t=1226s
//≈сть зарегистрированые состо€ни€ байт NaN (Not a Number) - sNun и qNun, +inf, -inf, +0, -0
// —тандарт IEEE-754 (2008)

//Double или float - double

#include <iostream>
#include <cmath>
const double PI = 3.141592653589793238463;
using namespace std;

double f(double x) 
{
	return 2 * sin(x);
}

//–€д “ейлора

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

//»нтегрирование
//int main()
//{
//    int i;
//    double Integral;
//    double a = 0.0, b = 1.0; // отрезок интегрировани€
//    double h = 0.1;// шаг интегрировани€
//
//    double n; // число разбиений n
//
//    n = (b - a) / h;
//    // вычисл€ем интеграл по формуле центральных пр€мугольников
//    Integral = 0.0;
//    for (i = 1; i <= n; i++)
//        Integral = Integral + h * f(a + h * (i - 0.5));
//    cout << "I1 = " << Integral << "\n";
//
//    // вычисл€ем интеграл по формуле трапеций
//    Integral = h * (f(a) + f(b)) / 2.0;
//    for (i = 1; i <= n - 1; i++)
//        Integral = Integral + h * f(a + h * i);
//    cout << "I2 = " << Integral << "\n";
//
//    // вычисл€ем интеграл по формуле —импсона
//    Integral = h * (f(a) + f(b)) / 6.0;
//    for (i = 1; i <= n; i++)
//        Integral = Integral + 4.0 / 6.0 * h * f(a + h * (i - 0.5));
//    for (i = 1; i <= n - 1; i++)
//        Integral = Integral + 2.0 / 6.0 * h * f(a + h * i);
//    cout << "I3 = " << Integral << "\n";
//}

//ƒвоичный поиск корн€ уравнени€  
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
