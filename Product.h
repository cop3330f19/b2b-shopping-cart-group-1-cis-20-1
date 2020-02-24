#include <iomanip>
#include <string>
#include <iostream>
using namespace std;

class Product{
  public:
    
    int itemNo;
    std::string description;
    double price;
    int stockQuantity;
    
    Product();
    Product(int, std::string, double, int);
   int getItemNo(){};
   std::string getDescription(){};
    double getPrice(){};
    int getStockQuantity(){};
    void setItemNo(int){};
    void setDescription(std::string){};
   void setPrice(double){};
    void setStockQuantity(int){};
};
