#pragma once
#include <iostream>
class Date
{
private:
	int day;
	int month;
	int year;

public:
	Date();
	Date(int D, int M, int Y);
	Date(Date& d);
	//Constructors

	int getDay();
	int getMonth();
	int getYear();
	//Getters

	void setDay(int day);
	void setMonth(int M);
	void setYear(int Y);
	//Setters

	void IncDay(Date &d);
};