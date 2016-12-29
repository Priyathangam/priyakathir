#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,fact=1;
    printf("\nenter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("the factorial is:%d",fact);
    getch();
}
