#include "complex.h"

void Complex::in(double r, double i) {
	rez = r;
	imz = i;
}

void Complex::ym(Complex c1, Complex c2) {
	rez = c1.rez * c2.rez - c1.imz * c2.imz;
	imz = c2.rez * c1.imz + c1.rez * c2.imz;
}

void Complex::sum(Complex c1, Complex c2) {
	rez = c1.rez + c2.rez;
	imz = c1.imz + c2.imz;
}

void Complex::vi4it(Complex c1, Complex c2) {
	rez = c1.rez - c2.rez;
	imz = c1.imz - c2.imz;
}

void Complex::del(Complex c1, Complex c2) {
	rez = (c1.rez * c2.rez + c1.imz * c2.imz) / (pow(c2.rez, 2) + pow(c2.imz, 2));
	imz = (c1.imz * c2.rez - c1.rez * c2.imz) / (pow(c2.rez, 2) + pow(c2.imz, 2));
}

int Complex::ch() {
	if ((pow(rez, 2) + pow(imz, 2)) == 0)
	{
		cout << endl << "Неверное второе комплексное число!" << endl;
		return 0;
	}
	return 1;
}

void Complex::out() {
	cout << endl << "Результирующее комплексное число " << "(" << rez << ", " << imz << ")" << endl;
}