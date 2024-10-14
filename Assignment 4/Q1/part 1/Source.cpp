#include<iostream>
int fac(int);
int cal(int, int);
int fun(int n, int r);
int main()
{
	int n, r;
	std::cout << "please enter  n\n";
	std::cin >> n;
	std::cout << "please enter r\n";
	std::cin >> r;
	std::cout << "your ansewr is  ";
	std::cout<<fun(n, r)<<std::endl;
	return 0;
}

int fac(int a)
{
	int y{ 1 };
	for (int i{ 1 }; i <= a; i++)
	{
		y *= i;
	}
	return y;
}
int cal(int r, int n)
{
	int y{};
	y = (fac(n)) / (fac(r)*fac(n - r));
	return y;
}
int fun(int n, int r)
{
	if (r > 0)
	{
		int y{};
		y = cal(r , n-1) + cal(r - 1, n - 1);
		return y;
	}
	else
		return 1;
}