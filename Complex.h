#ifndef complex_h
#define complex_h

#include <iostream>
#include <cmath>

using namespace std;

struct Complex {
private:
	double rez, imz;
public:
	void in(double r, double i);

	void sum(Complex c1, Complex c2);

	void vi4it(Complex c1, Complex c2);

	void ym(Complex c1, Complex c2);

	void del(Complex c1, Complex c2);

	int ch();

	void out();
};

#endif // complex_h