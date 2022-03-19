#include "Sort.h"
#define _CRT_SECURE_NO_WARNINGS
#include <cstdlib>
#include <stdarg.h>
#include <cstring>
#include <string>
#include <iostream>


Sort::Sort(int nr_elem, int mini, int maxi)
{
	this->nr_elem = nr_elem;
	this->vect = new int[nr_elem];
	for (int i = 0; i < nr_elem; i++)
		vect[i] = rand() % (maxi - mini + 1) + mini;
	
}

Sort::Sort(int *vect, int nr_elem)
{
	this->nr_elem = nr_elem;
	this->vect = new int[nr_elem];
	for (int i = 0; i < nr_elem; i++)
		this->vect[i] = vect[i];
}

Sort::Sort(int nr_elem, ...)
{
	va_list vl;
	va_start (vl, nr_elem);
	this->nr_elem = nr_elem;
	this->vect = new int[nr_elem];
	for (int i = 0; i < nr_elem; i++)
	{
		vect[i] = va_arg(vl, int);
	}
	va_end(vl);


}

Sort::Sort(const char* string)
{
	this->nr_elem = 0;
	for (int i = 0; i < strlen(string); i++)
		if (string[i] == ',')
			this->nr_elem++;
	if (strlen(string))
		this->vect = new int[nr_elem + 1];
	char *sir_nou = new char[strlen(string)+1];
	strcpy(sir_nou, string);
	int poz = 0;
	char* p = strtok(sir_nou, ",");
	while (p != NULL)
	{
		vect[poz] = std::stoi(p);
		poz++;
		p = strtok(NULL, ",");
	}
}

void Sort::InsertSort(bool ascendent)
{
	int j=0;
	if (ascendent == true)
	{
		for (int i = 1; i < nr_elem; i++)
		{
			int k = this->vect[i];
			j = i - 1;
			while (k < this->vect[j] && j >= 0)
			{
				this->vect[j + 1] = this->vect[j];
				j--;
			}
			this->vect[j + 1] = k;
		}
	}
	else
	{
		for (int i = 1; i < nr_elem; i++)
		{
			int k = this->vect[i];
			j = i - 1;
			while (k > this->vect[j] && j >= 0)
			{
				this->vect[j + 1] = this->vect[j];
				j--;
			}
			this->vect[j + 1] = k;
		}
	}

}

/*int Sort::Partition(int* vect, int low, int high)
{
	int pivot = vect[high];
	int i = low - 1;
	for (int j = low; j < high; j++)
	{
		if (vect[j] < pivot)
		{
			i++;
			std::swap(vect[i], vect[j]);
		}
	}
	std::swap(vect[i + 1], vect[high]);
	return (i + 1);
}

void Sort::QSort(int* vect, int low, int high)
{
	if (low < high)
	{
		int part = Partition(vect, low, high);
		QSort(vect, low, part - 1);
		QSort(vect, part + 1, high);
	}
}

void Sort::QuickSort(bool ascendent)
{
	QSort(vect, vect[0], vect[nr_elem - 1]);
}
*/
void Sort::BubbleSort(bool ascendent)
{	
	int ok = 0;
	int aux = 0;
	if (ascendent == true)
	{
		do
		{
			ok = 1;
			for (int i = 0; i < nr_elem - 1; i++)
				if (this->vect[i] > this->vect[i + 1])
				{
					aux = this->vect[i];
					this->vect[i] = this->vect[i + 1];
					this->vect[i + 1] = aux;
					ok = 0;
				}
		} while (!ok);
	}
	else
	{
		do
		{
			ok = 1;
			for (int i = 0; i < nr_elem - 1; i++)
				if (this->vect[i] <  this->vect[i + 1])
				{
					aux = this->vect[i];
					this->vect[i] = this->vect[i + 1];
					this->vect[i + 1] = aux;
					ok = 0;
				}
		} while (!ok);
	}
}

void Sort::Print()
{
	std::cout << "Numarul de elemente este: ";
	std::cout << nr_elem;
	std::cout << std::endl;
	std::cout << "Elementele vectorului sortat sunt: ";
	for (int i = 0; i < nr_elem; i++)
		std::cout << vect[i] << " ";
	std::cout << std::endl;
}

int Sort::GetElementsCount()
{
	return this->nr_elem;
}

int Sort::GetElementFromIndex(int index)
{
	return this->vect[index];
}
