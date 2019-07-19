#include<stdio.h>
void main()
{
    int num,div;

    printf("enter any num");
    scanf("%d",&num);

    printf("Enter Divisor Number");
    scanf("%d",&div);

    if(num%div==0)
    {
        printf("\n\nnum is fully divided by %d \n\n",num/div);
    }
    else
    {
        printf("num cannot be divided");

    }

}
