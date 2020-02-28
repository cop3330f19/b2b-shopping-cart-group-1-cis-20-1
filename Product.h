#include <iomanip>
#include <string>
#include <iostream>
using namespace std;

class Product{
  
 private:
    int itemNo;
    std::string Description;
    double Price;
    int stockQuantity;
  
 public:
    
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
    void print();
};
