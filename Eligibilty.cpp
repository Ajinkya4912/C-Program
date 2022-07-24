#include<iostream>
using namespace std;
int main()
{
    int maths,phy,chem;
    int total;
    int sum;
    
    cout<<"Enter the marks in maths";
    cin>>maths;
    cout<<"Enter the marks in phy";
    cin>>phy;
    cout<<"Enter the marks in chem";
    cin>>chem;

    sum=maths+phy+chem;
    total=phy+maths;
    
    if(maths>=65 && phy>=55 && chem>=50 && sum>=190 && total>=140 )
    {
        cout<<"The candidate is eligible";
    }
    else
    {
        cout<<"The candidate is not eligible";
    }
}