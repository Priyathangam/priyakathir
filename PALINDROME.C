#include<stdio.h>
#include<conio.h>
int main()
{
    int n,reverse=0,temp;
    printf("\nenter the number:");
    scanf("%d",&n);
    while(temp!=0)
    {
        reverse=reverse*10;
        reverse=reverse+temp%10;
        temp=temp/10;
    }
    if(temp==0)
    {
    printf("the entered number is a palindrome");
    }
    else
    {
        printf("the entered number is not a palindrome");
    }
    return 0;
}

