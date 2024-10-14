#include<iostream>
int bmm(int, int);

int main()
{
	int a, b;
	std::cout << "please enter numberد1\n";
	std::cin >> a;
	std::cout << "please enter number2\n";
	std::cin >> b;
	std::cout << "your answer is  ";
	std::cout << bmm(a, b) << std::endl;
	return 0;
}
int bmm(int num1, int num2)
{
	if ( num2== 0)
		return num1;
	else
		return bmm(num2, num1%num2);
}
