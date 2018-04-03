#include<iostream>

using namespace std;

class Stock;
class Order;

class BuyStock : public Order
{
   private:
   Stock *abcStock;

   public:
   virtual ~BuyStock()
   {
	   delete abcStock;
   }

   BuyStock(Stock *abcStock);

   virtual void execute();
};
