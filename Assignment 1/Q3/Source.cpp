#include <iostream>
#include <iomanip>
int main()
{
	float number1{}, number2{}, number3{}, number4{};
	float sum{}, average{}, product{};
	std::cout << "please enter 4 integer \n";
	std::cin >> number1 >> number2 >> number3 >> number4;
	sum = number1 + number2 + number3 + number4;
	product = number1 * number2 * number3 * number4;
	average = sum / 4;
	std::cout << std::fixed;
	std::cout << std::setprecision(3);
	std::cout << "sum is " << sum << std::endl;
	std::cout << "product is " << product << std::endl;
	std::cout << "average is " << average << std::endl;
	return 0;


}