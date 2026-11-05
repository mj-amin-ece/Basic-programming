#include <iostream>
int funlog(int a, int b);
int main()
{
	int a{}, b{};
	std::cout << "please enter two numbers\n";
	std::cin >> a >> b;
	std::cout << "yout answer is ...";
	std::cout << funlog(a, b) << std::endl;
	return 0;
}
int funlog(int a, int b)
{
	if (a/b < 1)
		return 0;
	return 1 + funlog(a / b, b);
}