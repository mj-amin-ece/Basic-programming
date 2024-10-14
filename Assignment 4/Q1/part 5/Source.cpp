#include<iostream>
int show(int);
int a;
int b;
int main()
{
	int n;
	std::cout << "please enter a number\n";
	std::cin >> n;
	a = 1;
	b = n;
	std::cout << "your ansewr is ..." << std::endl;
	show(n);
}
int show(int n)
{
	if (n % 2 == 0)
	{
		if ((n / 2) + 1 == a)
		{
			return 0;
		}
		std::cout << a++ << " , " << b-- << " , ";
		show(n);
	}
	if (n % 2 == 1)
	{
		if (a == (n / 2) + 1)
		{
			std::cout << (n + 1) / 2;
			return 0;
		}
		std::cout << a++ << " , " << b-- << " , ";
		show(n);
	}
}