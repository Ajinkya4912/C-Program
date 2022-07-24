#include<iostream>
using namespace std;
int main()
{
    int roll_no;
    char name;
    int total_marks;
    int total;
    int phy=70;
    int chem=80;
    int computer_application=90;
    float percentage;
    char division;
 cout<<"Enter Roll_no";
 cin>>roll_no;
 cout<<"Enter studdenbt name";
 cin>>name;
 cin>>chem;
 cin>>phy;
 cin>>computer_application;
  total_marks=phy+chem+computer_application;
  percentage=total_marks/3.0;
if(percentage>=60)
{
    cout<<" Divison A";
}
cout<<"Total marks is:"<<total_marks;
 cout<<"percentage of  subject is:"<<percentage;


}