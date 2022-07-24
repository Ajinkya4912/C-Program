#include<iostream>
using namespace std;
int main()
{
  float Add;
  float a,b;
  int no;
  float Avearge;
  int sum=0;
  cout<<"Enter the number";
  cin>>no;

  for(int i=1;i<=no;i++)
  {
  sum=sum+i;
  }
  cout<<"Sum of number is"<<sum;
  
  cout<<"\n""Enter the Two number of Avearge";
  cin>>a>>b;
  Add=a+b;
  Avearge=Add/2.0;
  cout<<"Avearge of number is"<<Avearge;
  
}