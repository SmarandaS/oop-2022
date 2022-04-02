#pragma once
#include "Car.h"

class Ford : public Car {
public:
	Ford();
	float Start(bool& b, int, int) override;
	char* getName() override;
};

