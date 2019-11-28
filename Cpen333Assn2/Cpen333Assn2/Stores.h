#pragma once

#include "Car.h"

class Stores
{
public:
	Oil getOil(int type, int quantity);
	AirFilter getAirFilter();
	OilFilter getOilFilter();
	Tyres getTyres(int make, int size, int quantity);
};