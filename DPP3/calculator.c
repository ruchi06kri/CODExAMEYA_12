#include<stdio.h>
#include<math.h>
main()
{
    printf("WELCOME TO CALCULATOR");
    int choice;
    
    printf("choose desired operation:\n 1: Add\n 2: Subtract\n 3: Multiplication\n 4: Division\n 5: Square\n 6: Modulus\n 7: exit\n");
    while(1)
    {
        printf("enter the choice");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                float x,y;
                printf("enter value of x and y");
                scanf("%f %f",&x,&y);
                printf("Add:%f\n",x+y);
            }
            break;
            case 2:
            {
                float x,y;
                printf("enter value of x and y");
                scanf("%f %f",&x,&y);
                printf("Subtract:%f\n",x-y);
            }
            break;
            case 3:
            {
                float x,y;
                printf("enter value of x and y");
                scanf("%f %f",&x,&y);
                printf("Multiplication:%f\n",x*y);
            }
            break;
            case 4:
            {
                float x,y;
                printf("enter value of x and y");
                scanf("%f %f",&x,&y);
                printf("Division:%f\n",x/y);
            }
            break;
            case 5:
            {
                float x,y;
                printf("enter value of x and y");
                scanf("%f %f",&x,&y);
                printf("square:%f\n",x*x);
                printf("square:%f\n",y*y);
            }
            break;
            case 6:
            {
                float x,y;
                printf("enter value of x and y");
                scanf("%f %f",&x,&y);
                printf("Modulus:%f\n",fmod(x,y));
            }
            break;
            case 7:
                exit (0);

            default:
            printf("Enter Valid Number");
            break;
        }
    }
}