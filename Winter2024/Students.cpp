#include "Students.h"

static int num = 0;

Students::Students(std::string n, std::string m, Date &D) : Person(n,D) {
	major = m;
	ID = num+40000000;
	num++;
	DoE = new Date(15,2,2024);
	std::cout << "Student Created    \n";
}

Students::Students(Students& s1) : Person(s1.name, s1.DoB) {
	ID = num;
	num++;
	major = s1.major;
	DoE = new Date(15, 2, 2024);
}

Students::~Students() {
	std::cout << "student destroyed";
}

void Students::setDayoB(int d) {
	 DoB.setDay(d);
}
int Students::getStudentCount() {
	return num ;
}