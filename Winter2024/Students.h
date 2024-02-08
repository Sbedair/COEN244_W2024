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
	Date *DoE;

public:
	Students(std::string n, std::string m,Date &D);
	Students(Students& s1);
	~Students();
	int getID();
	Date getDoB();
	void setDoB(Date d);
	void setDayoB(int d);
	int getStudentCount();


};

