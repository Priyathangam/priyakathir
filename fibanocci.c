#include<stdio.h>
#include<conio.h>
void main()
{

    int n,first=0,second=1,next,i,fibanocci;
    printf("\nenter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(n<=1)
            next=i;
        else
        {
            next=first+second;
            printf("%d\n",first);
            first=second;
            second=next;
        }
    }
    getch();

}
