#include<stdio.h>
main()
{
 int a=0,b=1,c=0;
 printf("%d\t",b);
 while(c<13)
 {
 c=a+b;
 printf("%d\t",c);
 a=b;
 b=c;
 }
}