#include <iostream>
#include "Date.h"
#include "Students.h"

using namespace std;

int main() {
	int s[4];
	int* ptr;
	Date Bday(1, 1, 2001);
	Date Bday2(2, 3, 2005);
	Students S("karen", "business",Bday);
	Students* s2 = new Students("Alex", "COEN",Bday2);
	cout << S.getID() << " " << s2->getID() << endl;
	cout << endl << S.getStudentCount() << endl;
	Date Bday3(2, 2, 2);
	cout << s2->getDoB().getDay() << "/" << s2->getDoB().getMonth() << "/" << s2->getDoB().getYear() << endl;
	s2->setDoB(Bday3);
	cout << s2->getDoB().getDay() << "/" << s2->getDoB().getMonth() << "/" << s2->getDoB().getYear() << endl;
	s2->setDayoB(4);
	cout << s2->getDoB().getDay() << "/" << s2->getDoB().getMonth() << "/" << s2->getDoB().getYear();

	delete s2;
}

