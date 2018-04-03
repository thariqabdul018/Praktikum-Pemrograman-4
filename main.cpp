#include"Stock.h"
#include"BuyStock.h"
#include"SellStock.h"
#include"Broker.h"
#include<iostream>

using namespace std;

class CommandPatternDemo
{
   static void main(std::vector<std::wstring> &args);
};

class Order;

void CommandPatternDemo::main(std::vector<std::wstring> &args)
{
   Stock *abcStock = new Stock();

   BuyStock *buyStockOrder = new BuyStock(abcStock);
   SellStock *sellStockOrder = new SellStock(abcStock);

   Broker *broker = new Broker();
   broker->takeOrder(buyStockOrder);
   broker->takeOrder(sellStockOrder);

   broker->placeOrders();
}
