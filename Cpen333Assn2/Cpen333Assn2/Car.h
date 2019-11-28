#pragma once

struct CarPart{};

struct Oil : CarPart
{
	int type_;
	int quantity_;

	Oil()
	{
		type_ = 0;
		quantity_ = 0;
	}

	Oil(int type, int quantity) 
	{
		type_ = type;
		quantity_ = quantity;
	}
};

struct AirFilter : CarPart
{
	int make_;
	bool clean_;

	AirFilter()
	{
		make_ = 0;
		clean_ = 0;
	}

	AirFilter(int make, int clean)
	{
		make_ = make;
		clean_ = clean;
	}
};

struct OilFilter : CarPart
{
	int make_;
	bool clean_;

	OilFilter()
	{
		make_ = 0;
		clean_ = 0;
	}

	OilFilter(int make, int clean)
	{
		make_ = make;
		clean_ = clean;
	}
};

struct Tyres : CarPart
{
	int make_;
	int size_;
	bool wornOut_;

	Tyres()
	{
		make_ = 0;
		size_ = 0;
		wornOut_ = 0;
	}

	Tyres(int make, int size, bool wornOut)
	{
		make_ = make;
		size_ = size;
		wornOut_ = wornOut;
	}
};


class Car
{
private:
	Oil oil_;
	OilFilter oilFilter_;
	AirFilter airFilter_;
	Tyres tyres_;

public:
	Car(int oilType, int oilQuantity, bool airFilterClean, bool oilFilterClean, int tyreMake, int tyreSize, bool tyresWorn);

	Oil swapOil(Oil newOil);
	OilFilter swapOilFilter(OilFilter newOilFilter);
	AirFilter swapAirFilter(AirFilter newAirFIlter);
	bool checkTyresForWear();
	Tyres swapTyres(Tyres newTyres);
	void rotateTyres();

	int getOilType();
	int getTyreMake();
	int getTyreSize();
};