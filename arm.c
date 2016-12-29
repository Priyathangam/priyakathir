#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,temp,sum=0;
    printf("\nenter the number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    if(n==sum)
    {
        printf("the entered number is arm");
    }
    else
    {
            printf("the entered number is not arm");
    }
    getch();
}
