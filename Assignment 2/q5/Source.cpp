# include<iostream>
#include<vector>
#include<iomanip>
float fun1(float);
float fun2(float);
void display(std::vector<float> , int);
int main()
{
	std::vector<float> v;
	std::vector<float> v1;
	int n;
	float b{ 6 }, a{ -2 };
	float d{}, be, mid, end, sum1{}, sum2{}, sum3{};
	float be1, mid1, end1, sum4{}, sum5{}, sum6{};
	std::cout << "please enter parts\n";
	std::cin >> n;
	for (int j = n; j > n - 11; j--)
	{
		sum1 = 0;
		sum2 = 0;
		sum3 = 0;
		d = (b - a ) / j;
		for (float i = a; i < b; i += d)
		{
			be = d*fun1(i);
			mid = d*fun1(i + (d / 2));
			end = d*fun1(i + d);
			sum1 += be;
			sum2 += mid;
			sum3 += end;
			be1 = d*fun2(i);
			mid1 = d*fun2(i + (d / 2));
			end1 = d*fun2(i + d);
			sum4 += be1;
			sum5 += mid1;
			sum6 += end1;
		}
		v.push_back(sum1);
		v.push_back(sum2);
		v.push_back(sum3);
		v1.push_back(sum4);
		v1.push_back(sum5);
		v1.push_back(sum6);
	}
	 display(v, n);
	 std::cout << std::endl;
	 display(v1, n);
	return 0;
}	
float fun1(float n)
{
	float x;
	x = (n*n*n*n*n)+(2*n*n*n)+sin(0.1*acos(-1)*n)-8;
	return x;
}
float fun2(float x)
{
	float a;
	a = x*exp(x*x);
	return a;
}
void display(std::vector<float> v,int n)
{
	int i{};
	std::cout << std::setw(15) << " N " << std::setw(15) << "begin" << std::setw(15) << "midle";
	std::cout << std::setw(15) << "end\n";
	for (int j{n}; j > n-11; j--)
	{
		std::cout << std::setw(15) << j<<"|"<<std::setw(15)<<v[i];
		std::cout << std::setw(15) << v[i + 1] << std::setw(15) << v[i + 2]<<std::endl;
		i += 2;
	}

	

}