#include<stdio.h>
void main()
{
    int units;

    printf("enter no of units burned");
    scanf("%d",&units);

    if(units<=50)
    {
        printf("no bill");

    }

    else if (units>=50&&units<=100)
    {
    units = units*4.50;
    printf("\nunits\n");
    }

}
