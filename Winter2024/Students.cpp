#include "Students.h"
#include <iostream>

static int num = 0;

Students::Students(std::string n, std::string m, Date &D) {
	name = n;
	major = m;
	ID = num+40000000;
	num++;
	DoB = D;
	DoE = new Date(8,2,2024);
}
Students::Students(Students& s1) {
	ID = num;
	num++;
	major = s1.major;
	name = s1.name;
}
Students::~Students() {
	std::cout << "student dropped out due to strikes";
}
int Students::getID() {
	return ID;
}
Date Students::getDoB() {
	return DoB;
}
void Students::setDoB(Date d) {
	DoB = d;
}
void Students::setDayoB(int d) {
	 DoB.setDay(d);
}
int Students::getStudentCount() {
	return num ;
}