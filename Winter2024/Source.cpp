#include <iostream>
#include "Date.h"

using namespace std;

int main() {

	int x;
	cin >> x;
	Date d(x,2,2012);

	cout << d.getDay() << endl;
	d.IncDay(d);
	cout << d.getDay();

}

