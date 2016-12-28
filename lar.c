#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3,largest;
    printf("\nenter the number1:");
    scanf("%d",&num1);
    printf("\nenter the number2:");
    scanf("%d",&num2);
    printf("\nenter the number3:");
    scanf("%d",&num3);
    if(num1>num2&&num1>num3)
    {
        printf("\nthe largest number is:%d",num1);
    }
    if(num2>num1&&num2>num3)
    {
        printf("\nthe largest number is:%d",num2);
    }
    else
    {
        printf("\nthe largest number is:%d",num3);
    }
    getch();
}

