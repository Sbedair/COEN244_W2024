#pragma once
#include <string>
#include <iostream>
#include "Date.h"

class Person
{
protected:
	int ID;
	std::string name;
	Date DoB;

public:
	Person(std::string n, Date& D);
	~Person();
	void printInfo();
	int getID();
	Date getDoB();
	void setDoB(Date d);
};

