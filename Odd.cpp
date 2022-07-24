#include<iostream>
using namespace std;
int main()
{
  int no;
  int sum=0;
  cout<<"Enter the number";
  cin>>no;
  for(int i=1;i<=no*2;i++)
  {
      if(i%2!=0)
      {
          cout<<"\t"<<i;
    
      sum=sum+i;
     
      }
      
  }
   cout<<"\n""The sum of Odd  Natural number is:"<<sum;
}