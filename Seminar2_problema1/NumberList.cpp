#define _CRT_SECURE_NO_WARNINGS
#include "NumberList.h"
#include<iostream>

void NumberList::Init()
{
	this->count = 0;
}

bool NumberList::Add(int x)
{
	this->numbers[count] = x;
	count += 1;
	if (count >= 10)
		return false;
	else
		return true;
}

void NumberList::Sort()
{
	int ok=0;
	int aux = 0;
	do
	{
		ok = 1;
		for(int i=0 ; i< count-1 ; i++)
			if (this->numbers[i] > this->numbers[i + 1])
			{
				aux = this->numbers[i];
				this->numbers[i] = this->numbers[i + 1];
				this->numbers[i + 1] = aux;
				ok = 0;
			}
	} while (!ok);

}

void NumberList::Print()
{
	for (int i = 0; i < count; i++)
		std::cout << this->numbers[i] << " ";
}