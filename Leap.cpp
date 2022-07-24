#include<iostream>
using namespace std;
int main()
{
    int no;
    cout<<"Enter the Year";
cin>>no;
if(no%400==0 || no%4==0   && no%100!=0)
{
    cout<<"No is leap year";
}
else
{
  cout<<"No is not leap year";
}
}