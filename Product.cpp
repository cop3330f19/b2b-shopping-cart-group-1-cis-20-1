*/Product.cpp
  Group 1 : Rhiana L. ,Chris W., Mario B., Elijah D.
2/28/2020
	  \*
#include <iomanip>
#include <string>
#include <iostream>
#include "Product.h"


using namespace std;

Product::Product(int item_num, std::string item_des, double item_price, int item_stock)
{
	setProductNum(item_num);
	setProductDes(item_des);
	setProductPrice(item_price);
	setProductStock(item_stock);
}

void Product::setProductNum(int item_num)
{
	itemNo = item_num;
}

void Product::setProductDes(string item_des)
{
	description = item_des;
}

void Product::setProductPrice(double item_price)
{
	price = item_price;
}

void Product::setProductStock(int item_stock)
{
	stockQuantity = item_stock;
}

int Product::getProductNum()
{	
	return itemNo;
}

string Product::getProductDes()
{
	return description;
}

double Product::getProductPrice()
{
	return price;
}

int Product::getProductStock()
{
	return stockQuantity;
}
