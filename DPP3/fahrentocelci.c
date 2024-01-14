#include<stdio.h>//Calculate Fahrenheit to Celsius
main()
{
    float C,F;
    printf("enter value of F");
    scanf("%f",&F);
    C=(F-32)*5/9;
    printf("%f",C);
}