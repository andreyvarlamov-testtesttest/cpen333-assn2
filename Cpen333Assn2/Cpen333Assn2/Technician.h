#pragma once

#include <queue>

#include "Stores.h"
#include "Car.h"
#include "Recycling.h"
#include "Garbage.h"
#include "JobSheet.h"

class Technician
{
private:
	Stores stores_;
	Recycling recycling_;
	Garbage garbage_;

	

public:
	JobSheet serviceCar(Car car);
};
