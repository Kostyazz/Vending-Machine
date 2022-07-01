#include "SnackSlot.h"
#include <iostream>

SnackSlot::SnackSlot(int size)
{
	this->size = size;
	this->snackCount = 0;
	this->snackStack = new Snack*[size] {nullptr};
}

SnackSlot::~SnackSlot()
{
	delete[] snackStack;
}

int SnackSlot::addSnack(Snack * snack)
{
	if (snackCount < size)
	{
		snackStack[snackCount++] = snack;
		return 0;
	} 
	else {
		std::cout << "Нельзя добавить снек. Слот уже полон\n";
		return 1;
	}
}

Snack *SnackSlot::popSnack()
{
	if (snackCount > 0)
	{
		Snack *lastSnack = snackStack[snackCount];
		snackStack[snackCount--] = nullptr;
		return lastSnack;
	}
	else {
		std::cout << "Нельзя получить снек. Слот пуст\n";
		return nullptr;
	}
}

std::string SnackSlot::getSnackName(int number)
{
	return snackStack[number]->getName();
}

int SnackSlot::getSize()
{
	return this->size;
}

int SnackSlot::getSnacksCount()
{
	return this->snackCount;
}

void SnackSlot::printSlot()
{
	std::cout << "Слот:";
	for (int i = 0; i < snackCount; i++)
	{
		std::cout << " " << getSnackName(i);
	}
	std::cout << std::endl;
}
