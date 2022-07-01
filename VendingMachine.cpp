#include "VendingMachine.h"

VendingMachine::VendingMachine(int size)
{
	this->size = size;
	this->slotCount = 0;
	this->slotList = new SnackSlot*[size] {nullptr};
}

VendingMachine::~VendingMachine()
{
	delete[] slotList;
}

int VendingMachine::addSlot(SnackSlot *slot)
{
	if (slotCount < size)
	{
		slotList[slotCount++] = slot;
		return 0;
	}
	else {
		std::cout << "������ �������� ����. ������ �����\n";
		return 1;
	}
}

int VendingMachine::getEmptySlotsCount()
{
	return size - slotCount;
}

void VendingMachine::printMachine()
{
	std::cout << "������:" << std::endl;
	for (int i = 0; i < slotCount; i++)
	{
		slotList[i]->printSlot();
	}
}
