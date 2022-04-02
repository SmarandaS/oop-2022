#include <string>
#include "Audi.h"
#include "Ford.h"
#include "Nissan.h"
#include "Renault.h"
#include "Toyota.h"

using namespace std;

class Circuit
{
	int nrCars;
	int weatherType;
	int cLength;
	Car* cars[10];
	int raceTime[10];
	bool finish[10];

public:
	Circuit();

	void SetLength(int);
	void SetWeather(int);
	void AddCar(Car* c);

	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};