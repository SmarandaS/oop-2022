#include "NumberList.h"

NumberList lista;


int main()
{
	
	lista.Init();
	lista.Add(5);
	lista.Add(1);
	lista.Add(4);
	lista.Add(7);
	lista.Add(2);
	lista.Add(6);
	lista.Add(8);
	lista.Add(3);

	lista.Sort();

	lista.Print();

	return 0;
}