#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

// accepts ADC reading in hex (int) format
int determineTemperature (int reading)
{
	// returns the temp corresponding to ADC reading
	// the current implementation is an 8-bit ADC, mapped 1-to-1
	// starts with -45 at 0x00 and 120 at 0xA4

	int result = 0;

	if (reading >= 45 && reading <= 210)
	{
		result = reading - 0x5A;
	}
	else if (reading < 45)
	{
		result = 45;
	}
	else if (reading > 210)
	{
		result = 210;
	}

	return result;
}


int main() 
{
	int hexInput;

	cin >> hexInput;

	cout << determineTemperature(hexInput) << endl;
}



