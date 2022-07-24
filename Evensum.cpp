#include<iostream>
using namespace std;
int main()
{
    int no;
    int Add=0;
    int sum=0;
    int total;
    cout<<"Enter the number";
    cin>>no;
    for(int i=1;i<=no*2;i++)
    {
        if(i%2==0)
        {
            cout<<i;
                 sum=sum+i;
        }
    }
    cout<<"The sum of even natural number is:"<<sum;
}