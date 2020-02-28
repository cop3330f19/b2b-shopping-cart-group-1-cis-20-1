#include <iostream>
#include <sstream>
#include <string>
#include "Address.h"


using namespace std;

Address::Address(string cus_street, string cus_city, string cus_state, string cus_zip)
{
	setStreetAddress(cus_street);
	setCity(cus_city);
	setState(cus_state);
	setZipCode(cus_zip);
}

void Address::setStreetAddress(string cus_street)
{
	streetAddress = cus_street;
}

void Address::setCity(string cus_city)
{
	city = cus_city;
}

void Address::setState(string cus_state)
{
	state = cus_state;
}

void Address::setZipCode(string cus_zip)
{
	zipCode = cus_zip;
}

string Address::getStreetAddress()
{
	return streetAddress;
}

string Address::getCity()
{
	return city;
}

string Address::getState()
{
	return state;
}

string Address::getZipCode()
{
	return zipCode;
}
void Address:: print()
{
    cout << city << ", " << state << " " << zipCode;
}
