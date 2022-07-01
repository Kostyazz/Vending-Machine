#pragma once
#include "Snack.h"
class SnackSlot
{
public:
	SnackSlot(int size);
	~SnackSlot();
	int addSnack(Snack*);
	Snack *popSnack();
	std::string getSnackName(int number);
	int getSize();
	int getSnacksCount();
	void printSlot();
private:
	int size;
	Snack ** snackStack;
	int snackCount;
};

