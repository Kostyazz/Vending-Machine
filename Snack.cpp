#include "Snack.h"

Snack::Snack(std::string name)
{
	this->name = name;
}

void Snack::setName(std::string name)
{
	this->name = name;
}

std::string Snack::getName()
{
	return this->name;
}
