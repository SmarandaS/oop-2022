#include "Math.h"
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

Math mate;

int main()
{
	std::cout << mate.Add(10,20)<<" ";
	std::cout << mate.Add(10,20,30)<<" ";
	std::cout << mate.Add(10.5,20.5)<<" ";
	std::cout << mate.Add(10.5,20.5,30.5)<<" ";
	std::cout << mate.Mul(10,20)<<" ";
	std::cout << mate.Mul(10,20,30)<<" ";
	std::cout << mate.Mul(10.5,20.5)<<" ";
	std::cout << mate.Mul(10.5,20.5,30.5)<<" ";
	std::cout << mate.Adds(4,1, 2, 3, 4) << " ";
	//std::cout << mate.Add(" ","ana") << " ";

}