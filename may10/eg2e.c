#include<stdio.h>

void main()
{
    int i , from , to ;
    printf("Enter Start Point");
    scanf("%d",&from);

    printf("Enter Stop Point");
    scanf("%d",&to);

    printf("\nEven Numbers : \n");

    if(from > to)
    {
         from = from + to;
         to = from-to;
         from = from-to;
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
