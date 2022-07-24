#include<iostream>
using namespace std;


    int main()
    {
    int temp=0;
    int no=7;
     for(int i=2;i<=no-1;i++)
     {
        if(no%i==0)
        {
            temp=temp+1;
        }
     }
        if(temp==0)
        {
            cout<<"No is Prime";
        }
        else
        {
            cout<<"No is not prime";
        }
    }
     