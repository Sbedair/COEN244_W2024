#pragma once
#include "Person.h"
#include <string>
class Students: public Person
{
private:
	std::string major;
	Date *DoE;
	
public:
	Students(std::string n, std::string m,Date &D);
	Students(Students& s1);
	~Students();
	void setDayoB(int d);
	int getStudentCount();


};

