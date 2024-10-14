#include<iostream>
double sin(double, int);
double cal(int, double);
int fac(int);
double power(double, int);
int main()
{
	double x;
	int n;
	std::cout << "please enter x\n";
	std::cin >> x;
	std::cout << "please enter n\n";
	std::cin >> n;
	std::cout << "your answer is  ";
	std::cout << sin(x,n) << std::endl;
	return 0;
}
double sin(double x, int n)
{
	if (n > 0)
	{
		return cal(n, x) + sin(x, n - 1);
	}
	else
		return x;
}
double cal(int n, double x)
{
	double y{0.}, a{};
	if (n % 2 == 0)
		a = 1;
	else
		a = -1;
	y = (a / (fac((2 * n) + 1)))*power(x, (2 * n) + 1);
	return y;
}
int fac(int n)
{
	if (n > 1)
	{
		return n*fac(n - 1);
	}
	else
		return 1;
}
double power(double n, int i)
{
	if (i > 1)
	{
		return n*power(n, i - 1);
	}
	else
		return n;
}