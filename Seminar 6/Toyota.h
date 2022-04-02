#pragma once
#include "Car.h"

class Toyota : public Car
{
public:
	Toyota();
	float Start(bool& b, int, int) override;
	char* getName() override;
};
