#include "Bus.h"
#include "string.h"
#include <iostream>
using namespace std;


void Bus::setBusDetails(int id,char dest[10])
{
	BusID = id;
	strcpy(destination, dest);
}
void Bus::setDriver(char Name[10]) {
	strcpy(driver, Name);
}

void Bus::displayBusDetails() {
	cout << "Bus ID = " << busID << endl;
	cout << "driver = " << driver << endl;
	cout << "destination = " << destination << endl;
}
void Bus::setDriver(char dri[])
{
	strcpy_s(driver, dri);
}