#include<stdio.h>
#include<conio.h>
void main()
{
    int number;
    printf("enter the number:");
    scanf("%d",&number);
    if(number<=5)
    {
        printf("you entered the positive number");
    }
        else
        {
            printf("you entered the negative number");
        }
        getch();
    }
