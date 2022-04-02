#include "Circuit.h"
#include "Car.h"
#include "Weather.h"
#include <string>
#include <iostream>
using namespace std;

Circuit::Circuit()
{
	this->nrCars = 0;
}

void Circuit::SetLength(int l)
{
	this->cLength = l;
}

void Circuit::SetWeather(int w)
{
	this->weatherType = w;
}

void Circuit::AddCar(Car* c)
{
	cars[nrCars++] = c;
}

void Circuit::Race()
{
	for (int i = 0; i < nrCars; i++)
	{
		bool b = false;
		raceTime[i]= cars[i]->GoCar(b, weatherType, cLength);
		finish[i] = b;
	}
}

void Circuit::ShowFinalRanks()
{
	cout << "Timpii finali ai masinilor care au terminat cursa: \n";
	for (int i = 0; i < nrCars; i++)
	{
		if(finish[i]!=0)
			cout << cars[i]->getName() << " a termiat cu timpul " << raceTime[i] << "\n";

	}
	cout << "\n" << "\n";
}

void Circuit::ShowWhoDidNotFinish()
{
	cout << "Timpii finali ai masinilor care nu au terminat cursa: \n";
	for (int i = 0; i < nrCars; i++)
	{
		if (finish[i] == 0)
			cout << cars[i]->getName() << " a avut timpul timpul " << raceTime[i] << "\n";

	}
	cout << "\n" << "\n";
}
