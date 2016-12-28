#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("\nenter the character:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("\nthe character is vowel");
    }
        else
        {
            printf("\nthe character is a consonant");
        }
    getch();
}
