#pragma once
#include "Date.h"
#include <string>
class Students
{
private:
	int ID;
	std::string name;
	std::string major;
	Date DoB;

public:
	Students(std::string n, std::string m);
	Students(Students& s1);
	~Students();
	int getID();
	int getStudentCount();


};

