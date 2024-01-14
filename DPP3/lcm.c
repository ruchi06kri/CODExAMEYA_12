#include<stdio.h>
int main()
{
    int a,b,div;
    printf("enter value of a and b");
    scanf("%d %d",&a,&b);
    if(a>=div && b>=div && a%div==0 && b%div==0)
    {
        while(div!=1)
        {
          a=a/div;
          b=b/div;
          printf("%d",div*div);
        }
        
    }
}