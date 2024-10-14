#include <iostream>
int main()
{
	char ch{ 'a' };     // ch is 97 or a
	ch += 4;            //ch is 101 or e
    int b = static_cast<int> (ch); // b is 101
    std::cout << ch << " " << b << " " << static_cast<int>('a') << " "; // ch is e or 101 and b is 101 and a is 97
	std::cout << static_cast<int>('A') << " ";   // 65
	int d = static_cast<int>('A') - static_cast<int> ('a') + ch; // d is 65-97+101=69 or E
	std::cout << static_cast<char>(d) <<std::endl; // E
	return 0;
}