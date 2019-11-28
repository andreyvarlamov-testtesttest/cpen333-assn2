#include "Stores.h"

#include <iostream>

Oil Stores::getOil(int type, int quantity)
{
	Oil newOil(type, quantity);
	std::cout << "Ordered oil: type " << type << ", quantity = " << quantity << " mL" << std::endl;
	return newOil;
}

AirFilter Stores::getAirFilter()
{
	AirFilter newAirFilter(0, true);
	std::cout << "Ordered new air filter" << std::endl;
	return newAirFilter;
}

OilFilter Stores::getOilFilter()
{
	OilFilter newOilFilter(0, true);
	std::cout << "Ordered new oil filter" << std::endl;
	return newOilFilter;
}

Tyres Stores::getTyres(int make, int size, int quantity)
{
	Tyres newTyres(make, size, true);
	std::cout << "Ordered new tyres: make = " << make << "size = " << size << std::endl;
	return newTyres;
}

