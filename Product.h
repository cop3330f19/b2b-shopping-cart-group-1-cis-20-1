#include <iomanip>
#include <string>
#include <iostream>
using namespace std;

class Product{
  public:
    
    int itemNo;
    std::string Description;
    double Price;
    int stockQuantity;
    
    Product();
    Product(int, std::string, double, int);
   int getitemNo(){};
   std::string getDescription(){};
    double getPrice(){};
    int getstockQuantity(){};
    void setitemNo(int){};
    void setDescription(std::string){};
   void setPrice(double){};
    void setstockQuantity(int){};
};
