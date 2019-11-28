#include "Receptionist.h"

#include <iostream>

float Receptionist::serveClient(Car car, ServiceSheet serviceSheet)
{
	std::cout << "Receptionist: Serving car..." << std::endl;
	JobSheet jobSheet = tech_.serviceCar(car);
	float totalCost = generateInvoice(jobSheet);
	balance_ -= totalCost;
	ServiceSheet stamped = stampServiceRecord(serviceSheet);
	return totalCost;
}

float Receptionist::generateInvoice(JobSheet jobSheet)
{
	std::cout << "Receptionist: Generating invoice..." << std::endl;

	float totalCost = jobSheet.getTotalCost();
	
	return totalCost;
}

ServiceSheet Receptionist::stampServiceRecord(ServiceSheet serviceSheet)
{
	std::cout << "Receptionist: Stamping the Service Sheet..." << std::endl;

	ServiceSheet stamped(serviceSheet.numOfServices_++);
	return stamped;
}

void Receptionist::receivePayment(float payment)
{
	balance_ += payment;
	if (balance_ < 0)
	{
		std::cout << "Receptionist: Client didn't pay in full :(" << std::endl;
	}
	else
	{
		std::cout << "Receptionist: Client has paid" << std::endl;
	}
}