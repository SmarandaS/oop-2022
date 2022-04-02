#include "Car.h"
#include "Renault.h"
#include "Weather.h"
#include <string>
using namespace std;

Renault::Renault() 
{
	name = (char*)"Renault";
	fuelCapacity = 60;
	fuelConsumption = 4;
	averageSpeed[Rain] = 40;
	averageSpeed[Sunny] = 60;
	averageSpeed[Snow] = 30;
	
}

float Renault::Start(bool& b, int w, int circuitLength)
{
	int speed = averageSpeed[w];

	float hours = fuelCapacity / fuelConsumption;
	float distance = hours * speed;

	b = distance > circuitLength;
	return (hours * circuitLength / distance);
}

char* Renault::getName() 
{
	return name;
}
