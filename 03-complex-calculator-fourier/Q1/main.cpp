#include<iostream>
#include<string>
#include<vector>
#include"token_stream.h"
#include"variable.h"
#include"complex.h"

void calculate(Token_stream& ts);
complex statement(Token_stream& ts);
complex declaration(Token_stream& ts);
complex expression(Token_stream& ts);
complex term(Token_stream& ts);
complex primary(Token_stream& ts);

complex set_value(std::string name, complex val);
complex get_value(std::string name);
bool is_declared(std::string name);
complex define_name(std::string name, complex val);

std::vector<Variable> var_table;

/*this project is for calculating the functions in the complex numbers*/

int main()
{
	std::cout << "Please enter some complex numebr with these";
	std::cout<<	"operator: + - *\n";
	Token_stream ts{};
	try
	{
		calculate(ts);
		std::cout << "END" << std::endl;
		return 0;
	}
	//for signing out the errors
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::cerr << "ABORT" << std::endl;
		return 1;
	}
}

void calculate(Token_stream& ts)
{
	complex val{};
	std::string prompt{ "> " };
	std::cout << prompt;
	Token t{};
	while (true)
	{
		try
		{
			t = ts.get();
			if (t.kind == ';')
			{
				std::string back(prompt.size(), '\b');
				std::cout << back + "= " << val.real << " + " << val.imag << "i " << std::endl;
				std::cout << prompt;
				/*at the end of the progress this order shows the complex*/
			}
			else if (t.kind == 'q')
			{
				std::string back(prompt.size(), '\b');
				std::cout << back;
				break;
			}
			else
			{
				ts.putback(t);
				val = statement(ts);
			}
		}
		catch (std::invalid_argument& e)
		{
			std::cerr << e.what() << std::endl;
			std::cin.ignore(INT_MAX, '\n');
			std::cerr << "Press ~ to coninue or q to abort: ";
			char ch{};
			while (std::cin >> ch)
			{
				if (ch == 'q')
					return;
				else if (ch == '~')
					break;  // will exit the catch and coninue the while loop
				else
					std::cout << "Wrong input: ~ or q -> ";
			}
			if (ch != '~')  // somehow the above while failed
				return;
			std::cout << prompt;
		}
	}
}

complex statement(Token_stream& ts)
{
	Token t{ ts.get() };
	switch (t.kind)
	{
	case 'L':
		return declaration(ts);
	default:
		ts.putback(t);
		return expression(ts);
	}
}

complex declaration(Token_stream& ts)
{
	Token t{ ts.get() };
	if (t.kind != 'a')
		throw std::invalid_argument("a name expected in declaration");
	std::string var_name{ t.name };
	t = ts.get();
	if (t.kind != '=')
		throw std::invalid_argument("= expected in declaraion");
	return define_name(var_name, expression(ts));
}

complex get_value(std::string name)
{
	for (const Variable& v : var_table)
		if (v.name == name)
			return v.val;
	throw std::invalid_argument(name + ": not defined.");
}

bool is_declared(std::string name)
{
	for (const Variable& v : var_table)
		if (v.name == name)
			return true;
	return false;
}

complex define_name(std::string name, complex val)
{
	if (is_declared(name))
		throw std::invalid_argument(name + ": already exists");
	var_table.push_back(Variable{ name, val });
	return val;
}

complex set_value(std::string name, complex val)
{
	for (Variable& v : var_table)
		if (v.name == name)
		{
			complex v{};
			v.real = val.real;
			v.imag = val.imag;
			return v;
		}
}


complex expression(Token_stream& ts)
{
	complex left{ term(ts) };
	Token t{ ts.get() };
	while (true)
	{
		//for diagnosing the functions between numbers
		switch (t.kind)
		{
		case '+':
			left = left + term(ts);
			t = ts.get();
			break;
		case '-':
			left = left - term(ts);
			t = ts.get();
			break;
		default:
			ts.putback(t);
			return left;
		}
	}
}

complex term(Token_stream& ts)
{
	complex left{ primary(ts) };
	Token t{ ts.get() };
	while (true)
	{
		switch (t.kind)
		{
		case '*':
			left = left * primary(ts);
			t = ts.get();
			break;
		default:
			ts.putback(t);
			return left;
		}
	}
}

complex primary(Token_stream& ts)
{
	Token t{ ts.get() };
	switch (t.kind)
	{
	case '(':
	{
		complex val{ expression(ts) };
		t = ts.get();
		if (t.kind != ')')
			throw std::invalid_argument(") expected");
		return val;
	}
	case '0':
	{
		complex a{ t.val , 0 };
		return a;
		break;
	}
	case '1':
	{
		complex a{ 0 , t.val };
		return a;
		break;
	}
	case 'a':
		return get_value(t.name);
	default:
		std::string s{ t.kind };
		s += ": invalid primary";
		throw std::invalid_argument(s);
		complex a{ 0 , 0 };
		return a;
	}
}