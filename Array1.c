#include<stdio.h>
int main()
{
    int arr[40],pos,i,size,value;
    printf("Enter the number of element");
    scanf("%d",&size);

    printf("Enter %d element are:\n",size);
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
    printf("enter the positioin where inster");
    scanf("%d",&pos);
    printf("Enter the value of position");
    scanf("%d",&value);
    for(i=size-1;i>=pos-1;i--)
    arr[pos-1]=value;
    printf("finall arry after vinstrting");
    for(i=0;i<=size;i++)
    printf("%d\n",arr[i]);
}