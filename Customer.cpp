#include <iostream>
#include <sstream>
#include <string>
#include "Customer.h"


using namespace std;

Customer::Customer(string num, string name, double credit, string address)
{
	setCustomerNum(num);
	setCustomerName(name);
	setLineOfCredit(credit);
	setCorporateAddress(address);
}

void Customer::setCustomerNum(string num)
{
	CustomerNum = num;
}

void Customer::setCustomerName(string name)
{
	CustomerName = name;
}

void Customer::setLineOfCredit(double credit)
{
	LineOfCredit = credit;
}

void Customer::setCorporateAddress(string address)
{
	CustomerNum = address;
}

string Customer::getCustomerNum()
{
	return CustomerNum;
}

string Customer::getCustomerName()
{
	return CustomerName;
}

double Customer::getLineOfCredit()
{
	return LineOfCredit;
}

string Customer::getCorporateAddress()
{
	return *corporateAddress;
}