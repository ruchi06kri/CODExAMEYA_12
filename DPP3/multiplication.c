#include<stdio.h>
main()
{
    int n;
    printf("enter value of n");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        printf("%d*",n);
        printf("%d",i);
        printf("=%d\n",n*i);
    }
}