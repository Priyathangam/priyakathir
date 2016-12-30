#include<stdio.h>
#include<conio.h>
void main()
{
    int num,count=0;
    printf("\nenter the value:");
    scanf("%d",&num);
    while(num)
    {
        num=num/10;
        count++;
    }
    printf("total digit:%d\n",count);
getch();
}

