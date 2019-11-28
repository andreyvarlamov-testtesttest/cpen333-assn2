#include "Car.h"
#include "Receptionist.h"


int main()
{
	Receptionist receptionist;

	Car car(0, 60, false, false, 0, 20, true);
	ServiceSheet serviceSheet;

	float amountOwed = receptionist.serveClient(car, serviceSheet);

	receptionist.receivePayment(amountOwed);

	system("PAUSE");



	car = Car(2, 80, true, false, 0, 17, false);

	amountOwed = receptionist.serveClient(car, serviceSheet);

	receptionist.receivePayment(amountOwed);

	system("PAUSE");



	car = Car(2, 80, true, true, 0, 15, false);

	amountOwed = receptionist.serveClient(car, serviceSheet);

	receptionist.receivePayment(amountOwed-1);

	return 0;
}