#include "Number.h"
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>
using namespace std;

Number::Number(const char* val, int base) {
	this->val = new char[strlen(val)];
	memcpy(this->val, val, strlen(val) + 1);
	this->base = base;
	isNeg = val[0] == '-';
}

Number::~Number() {

}

void Number::SwitchBase(int newBase) {

	long long n = toBaseTen(val, base);
	char* newValue = toBase(n, newBase);
	val = newValue;
	base = newBase;
}

void Number::Print() 
{
	for (int i = 0; val[i] != '\0'; i++) 
	{
		cout << val[i];
	}
	cout <<endl;
}

int Number::GetDigitsCount() 
{
	return strlen(val) - (isNeg ? 1 : 0);
}

int Number::GetBase() 
{
	return base;
}

long long Number::getBaseTen() 
{
	long long n = toBaseTen(val, base);
	if (isNeg)
		return -n;
	else
		return n;
}


long long Number::toBaseTen(char* s, int base) 
{

	long long n = 0, p = 1;

	for (int i = strlen(val) - 1; i >= (int)isNeg; i--) 
	{
		n += normalizeDigit(s[i])*p;
		p = p*base;
	}

	return n;
}

char* Number::toBase(long long n, int base) 
{

	char* c = new char[50];
	int i = 0;

	while (n != 0) 
	{
		int d = n % base;
		c[i++] = formalizeDigit(d);
		n /= base;
	}
	if (isNeg) 
	{
		c[i++] = '-';
	}
	c[i] = '\0';

	for (int l = 0; l < i/2; l++) 
	{
		char aux = c[l];
		c[l] = c[i-l-1];
		c[i-l-1] = aux;
	}
	return c;
}

int Number::normalizeDigit(char c) 
{
	if (c >= 'A')
		return c - 'A' + 10;
	else
		return c - '0';
}

char Number::formalizeDigit(int n) 
{
	if (n >= 10)
		return (n - 10) + 'A';
	else
		return n + '0';
}


Number::Number(const Number& n) 
{
	this->base = n.base;
	this->val = n.val;
	this->isNeg = n.isNeg;
}

Number::Number(const Number&& n) 
{
	this->base = n.base;
	this->val = n.val;
	this->isNeg = n.isNeg;
}

void copyStr(char* a, char* b) 
{
	b = new char[strlen(a)];
	for (int i = 0; a[i] != '\0'; i++) 
	{
		b[i] = a[i];
	}
}

char* toStr(long long n) 
{
	char* s = new char[50];
	int i = 0;
	bool negativ = false;

	if (n < 0) 
	{
		n = -n;
		negativ = true;
	}

	while (n != 0) 
	{
		int d = n % 10;
		s[i++] = d + '0';
		n /= 10;
	}

	if (negativ) 
	{
		s[i++] = '-';
	}

	s[i] = '\0';

	for (int l = 0; l < i / 2; l++) 
	{
		char aux = s[l];
		s[l] = s[i-l-1];
		s[i-l-1] = aux;
	}

	return s;
}



Number::Number(const int n) 
{
	base = 10;
	val = toStr(n);
	bool negativ = n < 0;
	isNeg = negativ;
}
void Number::operator=(int n) 
{
	Number nr(toStr(n), 10);
	nr.SwitchBase(base);
	*this = nr;
}


char Number::operator[](int i) 
{
	return val[i];
}

Number operator+(const Number& x, const Number& y) 
{
	Number a = x;
	Number b = y;
	int greaterBase = a.GetBase() > b.GetBase() ? a.GetBase() : b.GetBase();

	long long nr = a.getBaseTen()+b.getBaseTen();

	char* c = toStr(nr);

	Number newNumber(c, 10);
	newNumber.SwitchBase(greaterBase);

	return newNumber;
}


Number operator-(const Number& x, const Number& y) 
{
	Number a = x;
	Number b = y;
	int greaterBase = a.GetBase() > b.GetBase() ? a.GetBase() : b.GetBase();

	long long nr = a.getBaseTen()-b.getBaseTen();

	char* c = toStr(nr);

	Number newNumber(c, 10);

	newNumber.SwitchBase(greaterBase);

	return newNumber;
}

bool Number::operator>(Number& n) 
{
	long long n1 = getBaseTen();
	long long n2 = n.getBaseTen();

	return n1 > n2;
}

void Number::operator=(const char* s) 
{
	Number nr(s, 10);
	*this = nr;
}

void Number::operator=(const Number& n) 
{
	this->base = n.base;
	this->val = n.val;
	this->isNeg = n.isNeg;
}

void Number::operator+=(Number& n) {
	long long n1 = getBaseTen();
	n1 += n.getBaseTen();
	bool negativ = n1 < 0;

	toStr(n1);

	val = toStr(n1);

	isNeg = negativ;

	SwitchBase(base);
}

void Number::operator--() 
{
	val++;
}

void Number::operator--(int) 
{
	val[strlen(val) - 1] = '\0';
}



