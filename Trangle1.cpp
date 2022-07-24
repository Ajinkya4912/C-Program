#include<iostream>
using namespace std;
int main()
{
    int side1,side2,side3;
    cout<<"Enter the three sides";
    cin>>side1>>side2>>side3;

    if(side1==side2&&side2==side3)
    {
        cout<<"Perfect Trangle";
    }
    else
    {
        cout<<"Trangle is not valid";
    }
}