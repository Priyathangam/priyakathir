#include<stdio.h>
#include<conio.h>
void main()
{

    int n1,n2,num,deno,rem=0,gcd,lcm;
    printf("\nenter the two integers:");
    scanf("%d %d",n1,n2);
    if(n1>n2)
        {
            num=n1;
            deno=n2;
        }
        else
        {
            num=n2;
            deno=n1;
        }
        rem=n1%n2;
        while(rem!=0)
        {
            num=deno;
            deno=rem;
            rem=num%deno;
        }
            gcd=deno;
            lcm=n1*n2/gcd;
            printf("\ngcd of %dis%d=%d\n",n1,n2,gcd);
            printf("\nlcm of %dis%d=%d\n",n1,n1,lcm);
            getch();
        }

