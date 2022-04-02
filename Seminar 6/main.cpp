#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "Car.h"
#include "Weather.h"
#include "Circuit.h"
using namespace std;

int main()
{
	Circuit c;

	c.SetLength(600);
	c.SetWeather(Weather::Snow);
	c.AddCar(new Audi());
	c.AddCar(new Ford());
	c.AddCar(new Nissan()); 
	c.AddCar(new Renault());
	c.AddCar(new Toyota());
	c.Race();

	c.ShowFinalRanks(); // it will print the time each car needed to finish the circuit sorted from the fastest car to the   slowest.
	c.ShowWhoDidNotFinish(); // it is possible that some cars don't have enough fuel to finish the circuit

	return 0;

}
