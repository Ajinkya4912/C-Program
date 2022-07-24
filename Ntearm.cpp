#include<iostream>
using namespace std;
int main()
{
    int no;
    int sum=0;
    cout<<"Enter the number";
    cin>>no;

    for(int i=1;i<=no;i++)
    
    sum=sum+i;
    cout<<"Total of even no is:"<<sum;
}