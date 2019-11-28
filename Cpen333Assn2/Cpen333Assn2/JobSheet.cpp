#include "JobSheet.h"

void JobSheet::addItem(int partNum, int quantity, int cost)
{
	Item newItem(partNum, quantity, cost);
	items_.push_back(newItem);
}

void JobSheet::addLabourItem(int labourType, int cost)
{
	LabourItem newLabourItem(labourType, cost);
	labourItems_.push_back(newLabourItem);
}

float JobSheet::getTotalCost()
{
	float totalCost = 0;

	for (Item i : items_)
	{
		totalCost += i.cost_;
	}

	for (LabourItem i : labourItems_)
	{
		totalCost += i.cost_;
	}

	return totalCost;
}