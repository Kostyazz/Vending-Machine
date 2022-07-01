#include <iostream>
#include "Snack.h"
#include "SnackSlot.h"
#include "VendingMachine.h"
int main() {
	setlocale(LC_ALL, "");

	//Функционал по заданию:
	Snack *bounty = new Snack("Bounty");
	Snack *snickers = new Snack("Snickers");
	SnackSlot *slot = new SnackSlot(10/*количество батончиков, которые помещаются в слот*/);
	slot->addSnack(bounty); //Добавляем батончик в слот
	slot->addSnack(snickers);
	VendingMachine* machine = new VendingMachine(12 /*Количество слотов для снеков*/);
	machine->addSlot(slot); // Помещаем слот обратно в аппарат

	std::cout << machine->getEmptySlotsCount() << std::endl; // Должно выводить количество пустых слотов для снеков

	//Дополнительный функционал
	slot->printSlot();
	Snack *mars = new Snack("Mars");
	Snack *picnic = new Snack("Picnic");
	SnackSlot *slot2 = new SnackSlot(10);
	SnackSlot *slot3 = new SnackSlot(1);
	slot3->addSnack(mars);
	slot3->addSnack(picnic); // ошибка, слот полон
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