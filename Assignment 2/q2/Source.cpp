#include<iostream>
#include<vector>
#include<string>

int main()
{
	bool f;
	int t = 0;
	std::string b;
	std::string c;
	std::string g{};
	std::cout << "please entre your email adress\n";
	std::cin >> b;
	if (size(b) > 10)
	{
		for (int i = 0; i < size(b); i++)
		{
			if (b[i] == '@')
				t++;
		}
		for (int j = size(b) - 10; j < size(b); j++)
		{
			c = b[j];
			g += c;
		}
		if (t == 1)
		{
			if (g == "@gmail.com" || g == "@yahoo.com" || g == "@aut.ac.ir")
				f = true;

		}
		else
			f = false;
	}
	else
		f = false;
	if (f == false)
		std::cout << "false\n";
	else
		std::cout << "true\n";
	
	

	return 0;
}