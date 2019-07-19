#include<stdio.h>

void main()
{
    int i , from , to , temp;
    printf("Enter Start Point");
    scanf("%d",&from);

    printf("Enter Stop Point");
    scanf("%d",&to);

    printf("\nEven Numbers : \n");

    if(from > to)
    {
        temp = to;
        to=from;
        from=temp;
    }

    if(from%2!=0)
    {
        from++;
    }


    for(i=from;i<=to;i=i+2)
    {
        printf("\t %d",i);
    }



}
