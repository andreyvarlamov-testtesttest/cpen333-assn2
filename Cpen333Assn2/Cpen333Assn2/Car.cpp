#include "Car.h"

#include <iostream>

Car::Car(int oilType, int oilQuantity, bool airFilterClean, bool oilFilterClean, int tyreMake, int tyreSize, bool tyresWorn)
{
	oil_ = Oil(oilType, oilQuantity);
	oilFilter_ = OilFilter(0, airFilterClean);
	airFilter_ = AirFilter(0, oilFilterClean);
	tyres_ = Tyres(tyreMake, tyreSize, tyresWorn);
	std::cout << "Car created: oil type  = " << oilType << " oil quantity = " << oilQuantity
		<< "Air Filter Clean = " << airFilterClean << "Oil Filter Clean = " << oilFilterClean
		<< "Tyre Make = " << tyreMake << "Tyre Size = " << tyreSize << "Tyres Worn = " << tyresWorn << std::endl;
}

Oil Car::swapOil(Oil newOil)
{
	std::cout << "Swapping Oil..." << std::endl;

	Oil oldOil = oil_;
	oil_ = newOil;
	return oldOil;
}

OilFilter Car::swapOilFilter(OilFilter newOilFilter)
{
	std::cout << "Swapping Oil Filter..." << std::endl;

	OilFilter oldOilFilter = oilFilter_;
	oilFilter_ = newOilFilter;
	return oldOilFilter;
}

AirFilter Car::swapAirFilter(AirFilter newAirFIlter)
{
	std::cout << "Swapping Air Filter..." << std::endl;

	AirFilter oldAirFilter = airFilter_;
	airFilter_ = newAirFIlter;
	return oldAirFilter;
}

bool Car::checkTyresForWear()
{
	std::cout << "Checking Tyres... Worn Out = " << tyres_.wornOut_ << std::endl;

	return tyres_.wornOut_;
}

Tyres Car::swapTyres(Tyres newTyres)
{
	std::cout << "Swapping Tyres..." << std::endl;

	Tyres oldTyres = tyres_;
	tyres_ = newTyres;
	return oldTyres;
}

void Car::rotateTyres()
{
	std::cout << "Rotating Tyres..." << std::endl;
}

int Car::getOilType()
{
	return oil_.type_;
}

int Car::getTyreMake()
{
	return tyres_.make_;
}
int Car::getTyreSize()
{
	return tyres_.size_;
}