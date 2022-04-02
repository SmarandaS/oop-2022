#pragma once
#include "Car.h"

class Nissan : public Car
{
public:
	Nissan();
	float Start(bool& b, int, int) override;
	char* getName() override;
};
