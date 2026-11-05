#include<iostream>
int prime(int);
int main()
{
	int num, counter = 0;
	std::cout << "please enter a number" << std::endl;
	std::cin >> num;
	for (int j = 1; j <= num; j++)
	{
		if (prime(j)== 1)
		{
			counter++;
			if (prime(counter) == 1)
				std::cout << j<<std::endl;
		}
			
	}
	return 0;

}
int prime(int n)
{
	int i, t = 0;
	for (i = 1; i <= n; i++)
	{
		if (n%i == 0)
		{
			t++;
		}
	}
	if (t == 2)
		return 1;
	else
		return 0;
}