#include "Stock.h"
#include <iostream>

void Stock::buy()
{
	cout<<"Stock [ Name: "<< name << ", Quantity: " << quantity <<" ] bought";
}

void Stock::sell()
{
	cout << "Stock [ Name: " << name << ", Quantity: " << quantity << " ] sold";
}
