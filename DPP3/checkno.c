#include<stdio.h>
main()
{
    int a;
    printf("enter value of a");
    scanf("%d",&a);
    if(a<0)
    {
        printf("a is negative integer");
    }
    else if(a>0)
    {
        printf("a is positive integer");
    }
    else
    {
        printf("a is neither negative nor positive integer");
    }
}