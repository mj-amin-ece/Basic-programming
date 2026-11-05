#include <iostream>
int main()
{
	int number{};
    int a1, a2, a3, a4, a5{};
    int counter, s;
    std::cout << "please enter a number " << std::endl;
    std::cin >> number;
    a1 = ((number / 10000) % 10)* ((number / 10) % 10);
    std::cout << a1;
    a2 = number % 13;
    std::cout << a2;
    if (number % 2 == 1)
		a3 = 2;
    else
		a3 = 5;
    std::cout << a3;
    if (number % 11 == 3)
	    a4 = 0;
    else
    	a4 = 9;
	std::cout << a4;
    for (counter = 1; counter <= 5; counter++)
	{
		s = number % 10;
	    number = number / 10;
	    a5 = s + a5;
    }
	std::cout << a5 << std::endl;
    return 0;
}