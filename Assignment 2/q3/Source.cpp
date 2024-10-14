#include<iostream>
#include<vector>
#include<string>
void show(std::vector<char>);
int main()
{
	std::vector<char> c;
	char b;
	bool f;
	std::string g;
	std::cout << "please enter your word\n";
	std::cin >> g;
	for (int i = 0; i < size(g); i++)
	{
		 b = g[i];
		c.push_back(b);
	}
	int h = 0;
	for (int q = c.size() - 1; q >= 0; q--)
	{
		if (c[q] ==c[h])
		{
			f = true;
			
		}
		else
			f = false;
		h++;
	}
	if (f == false)
		std::cout << " yes\n";
	else
		std::cout << "no\n";
	
	return 0;

}
void show(std::vector<char> c)
{
	for (int i = 0; i < c.size(); i++)
	{
		std::cout << c[i] << std::endl;
	}
}