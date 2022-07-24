#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    int i,j;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
         cout<<j;
         cout<<"\n";
    }

}