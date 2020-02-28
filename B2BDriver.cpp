#include <iomanip>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <sstream>
#include <ctime>
#include<iostream>

using namespace std;

//Structures
struct Address				//Holds Customer Address
{ 
	string streetAddress; 
	string city; 
	string state;
	string zipCode;
};

struct Customer				//Holds Customer Info.
{
	string customerNum;
	string customerName;
	double lineOfCredit;
	Address *corporateAddress
};

struct Product				//Holds Product Data
{
	int itemNo;
	string description;
	double price;
};

struct Cart					//Hold Cart Data
{
	Product item;
	int quantity;
	double total;
};

vector <Cart> ShoppingCart;		//Stores Item in Cart

//Function Prototypes
vector <string> parse(string line, char delimiter);
void CustomerDataInput(string file, Customer CustList[], vector<Address>&AddList, int Lemgth);
void InventoryDataInput(string file, Product ProdList[], int Length);
string generateOrderNum();
void selectionSort(Customer array[], vector<Address>&AddList, int length);
int binarySearch(Customer array[], int low, int hi, string key);
int linearSearch(Customer array[], int size, string name);
int linearSearchProduct(Product array[], int size, int name);
void creditChecker(Customer array[], int pos, Product Array[], int Size, vector<Cart>&shoppingList);
void orderSummary(string name, Customer array[], vector<Address>&AddList, int pos);
void menu(Customer array[], Product Array[], vector<Address>&vector, int &size);


int main()
{
	//Variables
	string customerData = "customer.dat";
	string inventoryData = "inventory.dat";
	int Length = 21; //size of array

	//Creating the array and vectors
	Customer CustList[Length];
	vector<Address>AddList;
	Product ProdList[(Length - 1)];

	//Openinhg files and reading in the data
	CustomerDataInput(customerData, CustList, AddList, Length);
	inventoryDataInput(inventoryData, ProdList, Length);


	return 0;
}

//Function Definition

vector <string> parase(string line, char delimiter)
{
	vector <string> parsedLine;
	istringstream stringStream(line);
	while (stringStream)
	{
		string s;
		if (getline(stringStream, s, delimiter))
			parsedLine.push_back(s);
	}
	return parsedLine;
}

void CustomerDataInput(string file, customer CustList[], vector<Address>&AddList, int Length)
{
	//Temp. strings & vectors 
	vector <string> tempCust;
	vector <string> tempAdd;
	string str, tempSTR;
	int i = 0;

	//Opening the File
	ifstream filename;
	filename.open(file.c_str()); //string is passed here

	if (Filename.is_open())
	{
		while (getline(Filename, str))
		{
			tempCust = parse(str, '|');
			CustList[i].customerNum = tempCust[0];
			CustList[i].customerName = tempCust[1];
			CustList[i].lineOfCredit = atof(tempCust[2].c_str()); // Converting string to double
			tempSTR = tempCust[3];

			tempAdd = parse(tempSTR, ',');			//vector of addresses parsed by the comma
			AddList.push_back(Address());
			Addlist[i].streetAddress = tempAdd[0];
			Addlist[i].city = tempAdd[1];
			Addlist[i].state = tempAdd[2];
			Addlist[i].zipCode = tempAdd[3];
			i++;									//increments to fill vector/array

		}