#include <iostream>
#include <iomanip>
int main()
{
	int a, b, c;
	float xa, ya, xb, yb, xc, yc;
	float area;
	std::cout << " please enter 3 points " << std::endl;
	std::cin >> a >> b >> c;
	xa = a / 10;
	ya = a % 10;
	xb = b / 10;
	yb = b % 10;
	xc = c / 10;
	yc = c % 10;
	area = ((xb*yc - xc*yb) - (xa*yc - xc*ya) + (xa*yb - xb*ya)) / 2;
	std::cout << std::fixed;
	std::cout << std::setprecision(2);
	if (area > 0)
		std::cout << "the Area is " << area << " and the rotation is  clockwise counter." << std::endl;
	else if (area < 0)
		std::cout << " the area is " << -area << " and the rotation is clockwise .";
	else
		std::cout << "collinear " << std::endl;
	return 0;
}


