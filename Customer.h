#include <string>

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer
{
public:
	Customer(std::string, std::string, double, std::string); 
	void setCustomerNum(std::string); 
	void setCustomerName(std::string);
	void setLineOfCredit(double);
	void setCorporateAddress(std::string);

	std::string getCustomerNum(); 
	std::string getCustomerName();
	double getLineOfCredit();
	std::string getCorporateAddress();

	
private:
	std::string CustomerNum;
	std::string CustomerName;
	double LineOfCredit;
	std::string *corporateAddress;
	
}; // end class Customer

#endif CUSTOMER_H