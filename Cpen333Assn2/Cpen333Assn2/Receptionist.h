#pragma once

#include "Technician.h"
#include "JobSheet.h"

struct ServiceSheet
{
	int numOfServices_;

	ServiceSheet()
	{
		numOfServices_ = 0;
	}

	ServiceSheet(int numOfServices)
	{
		numOfServices_ = numOfServices;
	}
};

class Receptionist
{
private:
	Technician tech_;
	float balance_ = 0.0;
	ServiceSheet serviceSheet_;

public:
	float serveClient(Car car, ServiceSheet serviceSheet);
	float generateInvoice(JobSheet jobSheet);
	ServiceSheet stampServiceRecord(ServiceSheet serviceSheet);
	void receivePayment(float payment);
};