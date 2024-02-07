#include "Students.h"
#include <iostream>

static int num = 0;

Students::Students(std::string n, std::string m) {
	name = n;
	major = m;
	ID = num+40000000;
	num++;
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
int Students::getStudentCount() {
	return num ;
}