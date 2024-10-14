#pragma once

class complex
{
public:
	double real{};
	double imag{};
	complex(double, double);
	complex();
	complex operator+(complex a);
	complex operator*(complex a);
	complex operator-(complex a);

};

