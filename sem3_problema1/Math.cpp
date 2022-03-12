#include "Math.h"
#include <stdarg.h>
#include <cstring>
int Math::Add(int x, int y)
{
	return x + y;
}

int Math::Add(int x, int y, int z)
{
	return x+y+z;
}

int Math::Add(double x, double y)  
{
	return (int)(x+y);
}

int Math::Add(double x, double y, double z)
{
	return (int)(x+y+z);
}

int Math::Mul(int x, int y)
{
	return x*y;
}

int Math::Mul(int x, int y, int z)
{
	return x*y*z;
}

int Math::Mul(double x, double y)
{
	return (int)(x*y);
}

int Math::Mul(double x, double y, double z)
{
	return (int)(x*y*z);
}

int Math::Adds(int count, ...)
{
	int sum=0;
	va_list args;
	va_start(args, count);
	for (int i = 0; i < count; i++) {
		int x = va_arg(args, int);
		sum=Add(x, sum);
	}
	va_end(args);
	return sum;
}

char* Math::Add(const char* x, const char* y)
{
	if (!x || !y)
		return nullptr;
	
}
