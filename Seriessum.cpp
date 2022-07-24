#include<iostream>
using namespace std;
int main()
{
    int no;
    int sum=0;
    int t=9;
    cout<<"Enter the number";
    cin>>no;
    for(int i=1;i<=no;i++)
    {
        sum=sum+t;
        cout<<t<<" ";
        t=t*10+9;
        cout<<"\n";
    }
    cout<<"The sum of Series is :"<<sum;

}