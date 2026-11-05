#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
int main()
{
	std::string filename{ "mj.txt" };
	std::ofstream outfile{ filename };
	int n;
	std::cout<< "please enter a number\n";
	std::cin >> n;
	
	outfile << "your shape is ...\n";
	for (int i{1}; i <= n; i++)
	{
		for (int j{ 1 }; j <= n; j++)
		{
			if (i == j || i + j == n + 1)
			{
				outfile<< std::setw(2) << "*";
				std::cout<< std::setw(2) << "*";
			}
			
			else if (i == 1 || i == n)
			{
				outfile << std::setw(2) << "*";
				std::cout << std::setw(2) << "*";
			}
			
			else if (j == 1 || j == n)
			{
				outfile << std::setw(2) << "*";
				std::cout << std::setw(2) << "*";
			}
			else
			{
				outfile << std::setw(2) << " ";
				std::cout << std::setw(2) << " ";
			}
		}

		std::cout << std::endl;
		outfile << std::endl;
	}
	return 0;
}