#pragma once
#include <string>

class Snack
{
public:
	Snack(std::string name);
	void setName(std::string name);
	std::string getName();
private:
	std::string name;
};

