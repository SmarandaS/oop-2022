#include "Car.h"
#include "Toyota.h"
#include "Weather.h"
#include <string>
using namespace std;

Toyota::Toyota() 
{
	name = (char*)"Toyota";
	fuelCapacity = 60;
	fuelConsumption = 2;
	averageSpeed[Rain] = 50;
	averageSpeed[Sunny] = 65;
	averageSpeed[Snow] = 35;
	
}

float Toyota::Start(bool& b, int w, int circuitLength)
{
	int speed = averageSpeed[w];

	float hours = fuelCapacity / fuelConsumption;
	float distance = hours * speed;

	b = distance > circuitLength;
	return (hours * circuitLength / distance);
}

char* Toyota::getName()   
{
	return name;
}
