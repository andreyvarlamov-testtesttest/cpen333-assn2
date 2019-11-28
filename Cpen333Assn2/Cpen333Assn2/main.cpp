#include "Car.h"
#include "Technician.h"


int main()
{
	Car car(0, 60, false, false, 0, 20, true);

	Technician tech;

	tech.serviceCar(&car);

	return 0;
}