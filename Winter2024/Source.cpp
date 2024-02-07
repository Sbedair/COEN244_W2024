#include <iostream>
#include "Date.h"
#include "Students.h"

using namespace std;

int main() {
	int s[4];
	int* ptr;
	ptr[0];
	ptr[1];
	Students S("karen", "business");
	Students* s2 = new Students("Alex", "COEN");
	cout << S.getID() << " " << s2->getID() << endl;
	delete s2;
	cout << endl << S.getStudentCount() << endl;
}

