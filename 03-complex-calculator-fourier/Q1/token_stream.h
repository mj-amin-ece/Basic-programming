#include<iostream>
#include<string>

class Token
{
public:
	Token(char kind, std::string name);
	Token(char kind, double val);
	Token(char kind);
	Token();
	char kind;
	std::string name;
	double val;
};

class Token_stream
{
public:
	Token_stream();
	Token get();
	void putback(Token t);
private:
	bool full;
	Token buffer;
};