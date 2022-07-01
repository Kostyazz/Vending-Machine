#pragma once
#include "SnackSlot.h"
#include <iostream>
class VendingMachine
{
public:
	VendingMachine(int size);
	~VendingMachine();
	int addSlot(SnackSlot *slot);
	int getEmptySlotsCount();
	void printMachine();
private:
	int size;
	int slotCount;
	SnackSlot ** slotList;
};

