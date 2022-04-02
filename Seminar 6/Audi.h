#include "Car.h"

class Audi : public Car
{
public:
	Audi();
	float Start(bool& b, int, int) override;
	char* getName() override;
};
