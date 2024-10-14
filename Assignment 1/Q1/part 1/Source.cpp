#include <iostream>
int main()
{
	int a{ 10 }, b, c, d;
	b = a++ - 5;       // b is 5 and a is 11
	a *= b;            // a is 55
	c = ++a + 6;       // c is 62 and a is 56
	d = (a--) + 4;     // d is 60 and a is 55
	std::cout << " a = " << a << " \t " << " b = " << b << " \t " << " c = " << c << " \t " << " d = " << d << " \t ";
	return 0;
	// a is 55 and b is 5 and c is 62 and d is 60


}
