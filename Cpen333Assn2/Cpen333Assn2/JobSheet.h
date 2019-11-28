#pragma once

#include<vector>

struct Item
{
	int partNum_;
	int quantity_;
	float cost_;

	Item()
	{
		partNum_ = 0;
		quantity_ = 0;
		cost_ = 0;
	}

	Item(int partNum, int quantity, float cost)
	{
		partNum_ = partNum;
		quantity_ = quantity;
		cost_ = cost;
	}

};

struct LabourItem
{
	int labourType_;
	float cost_;

	LabourItem()
	{
		labourType_ = 0;
		cost_ = 0.0;
	}

	LabourItem(int labourType, float cost)
	{
		labourType_ = labourType;
		cost_ = cost;
	}
};

class JobSheet
{
private:
	std::vector<Item> items_;
	std::vector<LabourItem> labourItems_;

public:
	void addItem(int partNum, int quantity, int cost);
	void addLabourItem(int labourType, int cost);

	float getTotalCost();
};
