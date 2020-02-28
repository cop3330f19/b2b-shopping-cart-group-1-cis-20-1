#include <string>

#ifndef ADDRESS_H
#define ADDRESS_H

class Address
{
public:
	Address(std::string, std::string, std::string, std::string);
	void setStreetAddress(std::string);
	void setCity(std::string);
	void setState(std::string);
	void setZipCode(std::string);
        void print();
		
	std::string getStreetAddress();
	std::string getCity();
	std::string getState();
	std::string getZipCode();

private:
	std::string streetAddress;
	std::string city;
	std::string state;
	std::string zipCode;

}; // end class Address

#endif 
