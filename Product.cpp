#include <iomanip>
#include <string>
#include <iostream>
#include "Product.h"
using namespace std;

class Product{
  public:
    
    int itemNo;
    std::string description;
    double price;
    int stockQuantity;
    
    
    
    Product();
    Product(int itemNum, std::string itemDes, double itemPri, int itemQua)
    {
        itemNo = itemNum;
        description = itemDes;
        price = itemPri;
         stockQuantity = itemQua;
    };
  
    
    int getItemNo(){return itemNo};
  
    std::string getDescription(){return description;};
   
    double getPrice(){return price;};
   
    int getStockQuantity(){return stockQuantity;};
  
    
    void setItemNo(int itemNum){itemNo = itemNum;};
   
    void setDescription(std::string itemDes){description = itemDes;};
  
    void setPrice(double itemPri){price = itemPri;};
    
    void setStockQuantity(int itemQua){stockQuantity = itemQua;};
};
