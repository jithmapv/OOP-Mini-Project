#include "Bus.h"
#include <iostream>
using namespace std;

int main();
{
	
	Bus b1;
	char name1[10];
	b1.setBusDetails(1, (char*)"Nugegoda");
	b1.setDriver((char*)"Siripala");
	b1.displayBusDetails();

	Bus b2;
	char name2[10];
	b2.setBusDetails(2, (char*)"Pettah");
	b2.setDriver((char*)"Gunasiri");
	b2.displayBusDetails();

	Bus b3;
	char name3[10];
	b3.setBusDetails(3, (char*)"Malabe");
	b3.setDriver((char*)"Somapala");
	b3.displayBusDetails();

	Bus b4;
	char name4[10];
	b4.setBusDetails(4, (char*)"Galle");
	b4.setDriver((char*)"Pinsiri");
	b4.displayBusDetails();

	cin;.get();

}
