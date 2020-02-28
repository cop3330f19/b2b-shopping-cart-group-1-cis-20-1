
#include <iomanip>
#include <string>
#include <iostream>
#include "Product.h"
using namespace std;

    int itemNo;
    std::string description;
    double price;
    int stockQuantity;
    
    
    
   Product::Product(){}
    Product::Product(int itemNum, std::string itemDes, double itemPri, int itemQua)
    {
        itemNo = itemNum;
        description = itemDes;
        price = itemPri;
         stockQuantity = itemQua;
    };
  
    
    int getItemNo(){return itemNo;}; 
  
std::string getDescription(){return description;};
   
    double getPrice(){return price;};
   
    int getStockQuantity(){return stockQuantity;};
  
    
    void setItemNo(int itemNum){itemNo = itemNum;};
   
    void setDescription(std::string itemDes){description = itemDes;};
  
    void setPrice(double itemPri){price = itemPri;};
    
    void setStockQuantity(int itemQua){stockQuantity = itemQua;};


      void const print()
    {
        cout << "\n--------------------------------------------" << endl;
        cout << "Item Num" << setw(18) << "Description" << setw(10) << "Quantity" << setw(9) << "Total" << endl;
        cout << "--------------------------------------------" << endl << endl;
        
        cout << itemNo << setw(22) << description << setw(7) << stockQuantity << setw(10) << setprecision(2) 
            << showpoint << fixed << price * stockQuantity << endl << endl;
        
       cout << "--------------------------------------------" << endl;
       cout << "Total" << setw(38) << setprecision(2) << fixed << showpoint 
         <<  price * stockQuantity << endl;
       cout << "--------------------------------------------" << endl;
      
    };

