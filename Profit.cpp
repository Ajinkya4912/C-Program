#include<iostream>
using namespace std;

int main()
{
    int profit;
    int sell_price;
    int original_price;
  
  cout<<"Enter the Orginal Price";
  cin>>original_price;

  cout<<"Enter the sell_price";
  cin>>sell_price;

  if(original_price>sell_price)
  {
      profit=original_price-sell_price;
  }
  cout<<"Total profit is:"<<profit;
}