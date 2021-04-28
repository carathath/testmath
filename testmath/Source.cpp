#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main() {
	double a = (1 + sqrt(5)) / 2;
	double b = (1 - sqrt(5)) / 2;
	double C1 = (1 + (-(b/(1+b)))) / (a + ((-b/(1+b)*(1+a))));
	double C2 = C1 * (-1);
	int n = 15;

	cout << fixed << setprecision(7) << a << endl << b << endl;
	cout << "C1 = " << C1 << endl << "C2 = " << C2 << endl;
	cout << "F(10) = " << (C1 * pow(a, n)) + (C2 * pow(b, n));

	return 0;
}