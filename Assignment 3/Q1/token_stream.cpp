#include"token_stream.h"
#include<iostream>

using std::cin;

Token::Token(char k, std::string n)
{
	kind = k;
	name = n;
}

Token::Token(char k, double v)
{
	kind = k;
	val = v;
}

Token::Token(char k)
{
	kind = k;
	val = 0.0;
}

Token::Token()
{
	kind = 0;
	val = 0.0;
}

Token_stream::Token_stream()
{
	full = false;
}

Token Token_stream::get()
{
	if (full)
	{
		full = false;
		return buffer;
	}

	char ch{};
	char z{};
	cin >> ch;
	switch (ch)
	{
	case '.':
	case '0':case '1':case '2': case '3': case '4':
	case '5':case '6':case '7': case '8': case '9':
	{
		Token t;
		cin.putback(ch);
		double value{};
		cin >> value;
		cin >> z;
		/*in this case if z was i it means that
		char ch is imag if not it means it is real*/
		if (z == 'i')
		{
			t.kind = '1';
			t.val = value;
		}
		else
		{
			cin.putback(z);
			t.kind = '0';
			t.val = value;
		}
		return t;
	}
	case ';':
	case 'q': case '%':
	case '(':case ')':
	case '*': case '/':
	case '+': case '-':
	case '=': case 'i':
	{
		Token t{ ch };
		return t;
	}
	default: // might be let
	{
		if (isalpha(ch)) // ch is letter
		{
			std::string s{};
			s += ch;
			while (cin.get(ch) && isalnum(ch))
				s += ch;
			cin.putback(ch);
			if (s == "let")
				return Token{ 'L' };
			return Token{ 'a', s };
		}
		std::string s{ ch };
		s += ": bad token";
		throw std::invalid_argument(s);
	}
	}
}

void Token_stream::putback(Token t)
{
	if (full)
		throw std::invalid_argument("Token buffer is full");
	buffer = t;
	full = true;
}



