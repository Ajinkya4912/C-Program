#include<iostream>
using namespace std;
int main()
{
int a,b,sum,div,module,multi,sub;

cout<<"Enter the two number: ";
cin>>a>>b;
sub=a-b;
sum=a+b;
module=a%b;
multi=a*b;
div=a/b;

cout<<"Addition  of number is :"<<sum;

cout<<"\nsubtraction of number is :"<<sub;

cout<<"\nmodule of number is :"<<module;

cout<<"\nmulti of number is :"<<multi;

cout<<"\nDivision of number is :"<<div;
}