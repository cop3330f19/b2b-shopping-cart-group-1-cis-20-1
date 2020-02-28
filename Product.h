*/Product.h
  Group 1 : Rhiana L. ,Chris W., Mario B., Elijah D.
2/28/2020
	  \*

#include <string>
#include <sstream>

#ifndef PRODUCT_H
#define PRODUCT_H

class Product
{
public:
	Product(int item_num, std::string item_des, double item_price, int item_stock);
	void setProductNum(int);
	void setProductDes(std::string);
	void setProductPrice(double);
	void setProductStock(int);

	int getProductNum();
	std::string getProductDes();
	double getProductPrice();
	int getProductStock();
	

private:
	int itemNo;
	std::string description;
	double price;
	int stockQuantity;

}; // end class Customer

#endif CUSTOMER_H
