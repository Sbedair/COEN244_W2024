#include "Date.h"

static int age = 9;

Date::Date() {
	day = 1;
	month = 1;
	year = 2001;
}

Date::Date(int D, int M, int Y) {
	day = D;
	month = M;
	year = Y;
}

int Date::getDay() {
	return day;
}

int Date::getMonth() {
	return month;
}

int Date::getYear() {
	return year;
}

void Date::setDay(int day) {
	this->day = day;
}

void Date::setMonth(int M) {
	month = M;
}

void Date::setYear(int Y) {
	year = Y;
}


//Treated mainly as if it were outside the class for demonstration purposes not functionality
void Date::IncDay(Date &d) {
	this->day = 3;
	d.setDay(d.getDay() + 1);
	//creating this function would normally look like this:
	//  d.day+=1;
}
