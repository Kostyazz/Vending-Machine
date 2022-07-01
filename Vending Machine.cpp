#include <iostream>
#include "Snack.h"
#include "SnackSlot.h"
#include "VendingMachine.h"
int main() {
	setlocale(LC_ALL, "");

	//���������� �� �������:
	Snack *bounty = new Snack("Bounty");
	Snack *snickers = new Snack("Snickers");
	SnackSlot *slot = new SnackSlot(10/*���������� ����������, ������� ���������� � ����*/);
	slot->addSnack(bounty); //��������� �������� � ����
	slot->addSnack(snickers);
	VendingMachine* machine = new VendingMachine(12 /*���������� ������ ��� ������*/);
	machine->addSlot(slot); // �������� ���� ������� � �������

	std::cout << machine->getEmptySlotsCount() << std::endl; // ������ �������� ���������� ������ ������ ��� ������

	//�������������� ����������
	slot->printSlot();
	Snack *mars = new Snack("Mars");
	Snack *picnic = new Snack("Picnic");
	SnackSlot *slot2 = new SnackSlot(10);
	SnackSlot *slot3 = new SnackSlot(1);
	slot3->addSnack(mars);
	slot3->addSnack(picnic); // ������, ���� �����
	machine->addSlot(slot2);
	machine->addSlot(slot3);
	machine->printMachine();

	delete machine;
	delete slot;
	delete slot2;
	delete slot3;
	delete snickers;
	delete bounty;
	delete mars;
	delete picnic;
}