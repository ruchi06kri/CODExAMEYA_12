#include<stdio.h>
main()
{
    char alpha;
    printf("enter value of alpha");
    scanf("%c",&alpha);
    if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u')
    {
        printf("vowel");
    }
    else
    {
        printf("consonant");
    }
}