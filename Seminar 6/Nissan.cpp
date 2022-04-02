#include "Car.h"
#include "Nissan.h"
#include "Weather.h"
#include <string>
using namespace std;

Nissan::Nissan() 
{
	name = (char*)"Nissan";
	fuelCapacity = 80;
	fuelConsumption = 2;
	averageSpeed[Rain] = 45;
	averageSpeed[Sunny] = 60;
	averageSpeed[Snow] = 30;
	
}

float Nissan::Start(bool& b, int w, int circuitLength)
{
	int speed = averageSpeed[w];

	float hours = fuelCapacity / fuelConsumption;
	float distance = hours * speed;

	b = distance > circuitLength;
	return (hours * circuitLength / distance);
}

char* Nissan::getName() 
{
	return name;
}
