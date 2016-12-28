#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("\nenter the number:");
    scanf("%d",&n);
    if(n%400==0)
    {
        printf("\nthe number leap year is:%d",n);
    }
        else if(n%100==0)
        {
            printf("\nthe number leap year is:%d",n);
        }
            else if(n%4==0)
            {
                printf("\nthe number leap year is:%d",n);
            }
                else
                {
                    printf("\nthe number not a leap year is:%d",n);
                }
        getch();
        }

