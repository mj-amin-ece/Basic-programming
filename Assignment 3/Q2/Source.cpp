#include<iostream>
#include<vector>
#include<iomanip>

void fn(double );
double funan(double,int);
double funbn(double, int);
double fun(double);
double integrate();
double cal_a0();


int main()
{
	std::cout << std::setw(15) << "N" << std::setw(15) << "f(x)" << std::setw(15) << "Fn(x)"<<std::endl;
	fn(3);
	std::cout << std::endl<<std::endl;
	std::cout << std::setw(15) << "N" << std::setw(15) << "f(x)" << std::setw(15) << "Fn(x)" << std::endl;
	fn(2);
	return 0;
}

double fun(double x)
{
	double y{};
	y = (-x) + 2 - (4 * floor(((-x) / 4) + 0.5));
	return y;	
}

double integrate()
{
	double sum{};
	double a{ -2 }, b{ 2 }, mid{};
	double d{ (b - a) / 100 };
	for (double i{ a }; i < b; i += d)
	{
		mid = (i + (d / 2));
		sum += (fun(mid))*d;
	}
	return sum;
}

double cal_a0()
{
	double y{};
	y = (1 / 4.)*integrate();
	return y;
}
double funan(double x,int n)
{
	double y, a;
	a = (n*(acos(-1))*x) / 2.;
	y=fun(x)*cos(a);
	return y;
}


double funbn(double x, int n)
{
	double y, a;
	a = (n*(acos(-1))*x) / 2.;
	y=fun(x)*sin(a);
	return y;
}
void fn(double x)
{
	int j{ 15 };
	int t = 0;
	for (int s{ 15 }; s >= 5; s--)
	{
		double y{}, sum1{}, sum2{}, a;
		for (int n{ 1 }; n <= s; n++)
		{
			double sum{};
			double a{ -2 }, b{ 2 }, mid{};
			double d{ (b - a) / 100. };
			for (double i{ a }; i < b; i += d)
			{
				mid = (i + (d / 2));
				sum += (funan(mid, n))*d;
			}
			a = (n*(acos(-1))*x) / 2.;
			sum1 += ((0.5*sum)*cos(a));
			sum = 0;
		}
		for (int n{ 1 }; n <= s; n++)
		{
			double sum{};
			double a{ -2 }, b{ 2 }, mid{};
			double d{ (b - a) / 100. };
			for (double i{ a }; i < b; i += d)
			{

				mid = (i + (d / 2.));
				sum += (funbn(mid, n))*d;
			}
			a = (n*(acos(-1))*x) / 2.;
			sum2 += ((0.5*sum)*sin(a));
			sum = 0;
		}
		y = cal_a0() + sum1 + sum2;
		std::cout <<std::setw(15) << s;
		std::cout <<std::setw(15)<<fun(x)<<std::setw(15)<<std::setw(15)<< y;
		y = 0;	
		std::cout << std::endl;
	}
	
}


