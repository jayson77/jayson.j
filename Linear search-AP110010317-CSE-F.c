#include<stdio.h>
void main()
{
    int a[20],b,c,count=0,num;
    printf("no of elements");
    scanf("%d",&b);
    printf("enter the array");
    for(c=0;c<b;c++)
    {
        scanf("%d",&a[c]);
    }
    printf("enter the element we want to search");
    scanf("%d",&num);
    printf("linear search");
    for(c=0;c<b;c++)
    {
        if(a[c]==num)
        {
            count = c+1;
            break;
            
        }
    }
    if(num>0)
    printf("search succesfully,item found at %d ",num);
    else
    printf("search unsuccesful");
}