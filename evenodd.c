#include<stdio.h>
#include<conio.h>
void main()
{
  int num,rem;
  printf("\nenter any number(1to100):");
  scanf("%d",&num);
  rem=num%2;
  switch(rem)
  {
      case 0:
      printf("\neven");
      break;
      case 1:
          printf("\nodd");
          break;
  }
      }



