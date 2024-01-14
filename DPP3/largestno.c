#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter three value");
    scanf("%d %d %d",&a,&b,&c);
    if(a!=b && b!=c && a!=c)
    {
        if(a>b && a>c)
        {
            printf("1st no. is greatest");
        }
        else if(b>a && b>c)
        {
            printf("2nd no. is greatest");
        }
        else
        {
            printf("3rd no. is greatest");
        }
    }
    else if(a==b && a==c)
    {
        printf("all nos are equal");
    }
    else if(a==b && a!=c)
    {
        printf("1st and 2nd nos are equal");
    }
    else if(b==c && b!=a)
    {
        printf("2nd and 3rd nos are equal");
    }
    else
    {
        printf("1st and 3rd nos are equal");
    }
}