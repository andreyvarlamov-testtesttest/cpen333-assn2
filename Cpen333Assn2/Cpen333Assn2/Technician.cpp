#include "Technician.h"

#include "iostream"

#include "JobSheet.h"

JobSheet Technician::serviceCar(Car car)
{
	std::cout << "Technician operating on car..." << std::endl;

	JobSheet jobSheet;

	Oil newOil = stores_.getOil(car.getOilType(), 100);
	jobSheet.addItem(0, 100, 0.5);

	AirFilter newAirFilter = stores_.getAirFilter();
	jobSheet.addItem(1, 1, 20);

	OilFilter newOilFilter = stores_.getOilFilter();
	jobSheet.addItem(2, 1, 25);

	Oil oldOil = car.swapOil(newOil);
	recycling_.recycle(oldOil);
	jobSheet.addLabourItem(0, 20);

	OilFilter oldOilFilter = car.swapOilFilter(newOilFilter);
	garbage_.dispose(oldOilFilter);
	jobSheet.addLabourItem(1, 50);

	AirFilter oldAirFilter = car.swapAirFilter(newAirFilter);
	garbage_.dispose(oldAirFilter);
	jobSheet.addLabourItem(2, 40);

	bool tyresWorn = car.checkTyresForWear();

	if (tyresWorn)
	{
		Tyres newTyres = stores_.getTyres(car.getTyreMake(), car.getTyreSize(), 4);
		jobSheet.addItem(3, 4, 100);

		Tyres oldTyres = car.swapTyres(newTyres);
		recycling_.recycle(oldTyres);
		jobSheet.addLabourItem(3, 80);
	}
	else
	{
		car.rotateTyres();
		jobSheet.addLabourItem(4, 30);
	}

	std::cout << "Job Done!" << std::endl;

	return jobSheet;
}