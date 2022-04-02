#include "Car.h"
#include "Audi.h"
#include "Weather.h"
#include <string>
using namespace std;

Audi::Audi() 
{
	name = (char*)"Audi";
	fuelCapacity = 80;
	fuelConsumption = 6;
	averageSpeed[Rain] = 50;
	averageSpeed[Sunny] = 60;
	averageSpeed[Snow] = 40;
	
}

float Audi::Start(bool& b, int w, int circuitLength)
{
	int speed = averageSpeed[w];

	float hours = fuelCapacity / fuelConsumption;
	float distance = hours * speed;

	b = distance > circuitLength;
	return (hours * circuitLength / distance);
}

char* Audi::getName() 
{
	return name;
}
