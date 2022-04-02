#include "Car.h"
#include "Ford.h"
#include "Weather.h"
#include <string>
using namespace std;

Ford::Ford() 
{
	name = (char*)"Ford";
	fuelCapacity = 100;
	fuelConsumption = 9;
	averageSpeed[Rain] = 55;
	averageSpeed[Sunny] = 65;
	averageSpeed[Snow] = 40;
	
}

float Ford::Start(bool& b, int w, int circuitLength)
{
	int speed = averageSpeed[w];

	float hours = fuelCapacity / fuelConsumption;
	float distance = hours * speed;

	b = distance > circuitLength;
	return (hours * circuitLength / distance);
}

char* Ford::getName() 
{
	return name;
}
