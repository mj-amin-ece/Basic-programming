#pragma once
#include<string>
#include"complex.h"

class Variable
{
public:
	Variable(std::string name, complex val);
public:
	std::string name;
	//double real;
	//double imag;
	complex val;
};

