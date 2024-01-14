#include<stdio.h>
main()
{
    int n,fact=1;
    printf("enter value of n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("fact:%d",fact);
}