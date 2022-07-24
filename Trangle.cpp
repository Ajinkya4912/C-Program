#include<iostream>
using namespace std;
int main()
{
    int no;
    int side1,side2,side3;
    int Equilateral,Isosceles, Scalene;
    cout<<"Enter the three sides";
    cin>>side1;
    cin>>side2;
    cin>>side3;

    if( side1==side2 &&  side2==side3)
    {
          cout<<"Equilateral Trangle";
    }
    else if(side1==side2 || side2==side3|| side1==side3)
    {
        cout<<"Isosceless Trangle";
    }
    else
    { 
        cout<<"Scalene Trangle";
    }

}