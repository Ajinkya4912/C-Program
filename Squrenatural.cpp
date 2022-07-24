#include<iostream>
using namespace std;
int main()
{
    int no,i,d;
    int sum=0;
    cout<<"Enter the number";
    cin>>no;
    for(int i=1;i<=no;i++)
    {
        d=i*i;
        sum=sum+d;
    }
    cout<<sum;
}