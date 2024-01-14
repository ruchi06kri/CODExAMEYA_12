#include<stdio.h>
main()
{
    int l,b;
    printf("enter value of l and b");
    scanf("%d %d",&l,&b);
    printf("Area:%d\n",l*b);
    printf("Perimeter:%d\n", 2*(l+b));
}