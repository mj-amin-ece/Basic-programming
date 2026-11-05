#include <iostream>


int main()
{
	int numbre;
	int counter{}, divisor{};
	std::cin >> numbre;
	for (counter = 1; counter <=numbre; counter++)
	{
		if (numbre%counter == 0)
			divisor++;
	}
	if (divisor == 2)
		std::cout << " it is prime number \n";
	else
		std::cout << "it is not prime number \n";
	return 0;
}