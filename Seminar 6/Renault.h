#pragma once
#include "Car.h"

class Renault : public Car
{
public:
	Renault();
	float Start(bool& b, int, int) override;
	char* getName() override;
};
