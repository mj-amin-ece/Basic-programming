#include "complex.h"

complex::complex(double a, double b)
{
	real = a;
	imag = b;
}

complex complex::operator+(complex b)
{
	complex x;
	x.real = real + b.real;
	x.imag = imag + b.imag;
	return x;
}

complex complex::operator-(complex b)
{
	complex x;
	x.real = real - b.real;
	x.imag = imag - b.imag;
	return x;
}


complex complex::operator*(complex b)
{
	complex x{};
	x.real = (real * b.real) - (imag * b.imag);
	x.imag = (real * b.imag) + (imag * b.real);
	return x;
}

complex::complex()
{
	real = 0;
	imag = 0;
}

