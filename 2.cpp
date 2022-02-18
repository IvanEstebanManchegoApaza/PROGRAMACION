//ecuacion 2
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a;
	int b;
	int c;
	float im;
	float re;
	float x1;
	float x2;
	cout << "para la ecuacion : a*x^2 + b*x + c" << endl;
	cout << "introdusca a" << endl;
	cin >> a;
	cout << "introdusca b" << endl;
	cin >> b;
	cout << "introdusca c" << endl;
	cin >> c;
	cout << "ecuacion cuadratica es : " << a << "*x^2 + " << b << "*x + " << c << endl;
	if (pow(b,2)-4*a*c>=0) {
		if (a!=0) {
			cout << "soluciones de X son : " << endl;
			x1 = (-b+sqrtf(pow(b,2)-4*a*c))/(2*a);
			x2 = (-b-sqrtf(pow(b,2)-4*a*c))/(2*a);
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
		} else {
			cout << "soluciones de X = infinito : " << endl;
		}
	} else {
		cout << "soluciones de X complejas : " << endl;
		re = -b/(2*a);
		im = sqrtf((-1)*(pow(b,2)-4*a*c))/(2*a);
		cout << "xC1 = " << re << " + i" << im << endl;
		cout << "xC2 = " << re << " - i" << im << endl;
	}
	return 0;
}