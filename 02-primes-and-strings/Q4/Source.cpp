#include<iostream>
#include<vector>
#include<iomanip>
void bublesort(std::vector<int> &v);
void show(std::vector<int>);
void show2(int n, int t);
int main()
{
	std::vector<int>v ;
	std::vector<int>v1;
	int counter{};
	int current{}, pre{};
	int num1, num2, num3;
	int b{}, i = 1;
	int temp{};
	std::cout << "please enter 3 numbers\n";
	std::cin >> num1 >> num2 >> num3;
	if (num2 > num3)
	{
	    temp = num2;
		num2 = num3;
		num3 = temp;
	}
	while(i<=num1)
	{
		b = rand();
		if (b > num2 && b < num3)
		{
			v.push_back(b);
			i++;
		}
	}
	std::cout << "not sort" << std::endl;
	show(v);
	bublesort(v);
	std::cout << "sort " << std::endl;
	show(v);
	for (size_t i{}; i < v.size(); i++)
	{
		counter=0;
		current = v[i];
		if(current!=pre)
		{
			for (size_t j{}; j < v.size(); j++)
			{
				if (v[i] == v[j])
					counter++;
			}
			show2(v[i], counter);
		}
		pre = current;
	}
	return 0;
}
void bublesort(std::vector<int> &v)
{
	int temp{};
	bool f;
	for (int i = 0; i < v.size() - 1; i++)
	{
		f = false;
		for (int j = 0; j < v.size() - 1; j++)
		{
			if (v[j] > v[j + 1])
			{
				temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
				f = true;
			}
		}
		if (f == false)
			break;
	}
}
void show(std::vector<int> q)
{
	for (size_t i{}; i < q.size()-1; i++)
		std::cout << q[i] << " , ";
	std::cout << q[q.size() - 1] << std::endl;
}
void show2(int n, int t)
{
	std::cout <<std::endl<<std::setw(2)<< n << " | ";
	for (int i = 1; i <= t; i++)
		std::cout <<std::setw(2)<< "* ";
	std::cout << std::endl;
}