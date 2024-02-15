#include "Person.h"

Person::Person(std::string n, Date& D) {
	name = n;
	DoB = D;
	ID = -1;
	std::cout << "Person Created   \n";
}
Person::~Person() {
	std::cout << "Person Destroyed";
}

void Person::printInfo() {
	std::cout << "Person: " << name << ", ID: " << ID;
}int Person::getID() {
	return ID;
}
Date Person::getDoB() {
	return DoB;
}
void Person::setDoB(Date d) {
	DoB = d;
}