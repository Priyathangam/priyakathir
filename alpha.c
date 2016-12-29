#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("\n enter the character:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='Z' || ch>='A' && ch<='A')
    printf("\nthe character is an alphabet",ch);
    else
        printf("\nthe character is not an alphabet",ch);
    getch();
}
