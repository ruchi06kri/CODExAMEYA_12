#include<stdio.h>
main()
{
    int i,n=2;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
      if(n%i!=0)
     {
         
         break;
     }