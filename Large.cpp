#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the values";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"A is greater";
        }
        else
        {
         cout<<"c is greater";
        }
    }
        if(b>c)
        {
            cout<<"B is greater";
        }
        else
        {
          cout<<"C is greater";
        }
}