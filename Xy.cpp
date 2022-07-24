#include<iostream>
using namespace std;

void TimeTable(int istd)
{
    switch (istd)
    {
    case 1:
       printf("Your exam at:11 Am\n");
        break;
    
    case 2:
       printf("Your exam at:12 Am\n");
        break;
    
    case 3:
       printf("Your exam at:1 pm\n");
        break;
    
    case 4:
       printf("Your exam at:2 pm\n");
        break;
    
    default:
    printf("Wrong standard");     
    }
}
    int main()
    {
        int ivalue=0;

        printf("Enter your standard\n");
        scanf("%d",&ivalue);

        TimeTable(ivalue);
        return 0;
    }
