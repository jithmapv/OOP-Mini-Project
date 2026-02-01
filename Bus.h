class Bus
{
private:
	int busID();
	char driver[20];
	char destination[20];
public:
	
	void setBusDetails(int ID, char dest[10]);
	void displayBusDetails();
	void setDriver(char Name[10]);
};

