#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,num1,num2,flag_var=0,count;
    printf("enter two range(integers only ):");
    scanf("%d%d",&num1,&num2);
    printf("prime number from %d and %d:\n",num1,num2);
    for(i=num1+1;i<num2;++i)
    {
        flag_var=0;
        for(j=2;j<i/2;++j)
            {
        if(i%j==0)
        {
            flag_var=1;
            count++;
        }
    }
    if(flag_var==0)
        printf("%d\n",i);
    }
        getch();
}
