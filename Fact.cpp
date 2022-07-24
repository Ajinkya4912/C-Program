#include<iostream>
using namespace std;
int main()
{
  int no;
  int fact=1;
  cout<<"Enter the number";
  cin>>no;
  for(int i=1;i<=no;i++)
  {
    fact=fact*i;

  }
  cout<<"The factorial of given number is:"<<fact;

}