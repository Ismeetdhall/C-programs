#include<stdio.h>

void main()
{
    int i , from , to;
    printf("Enter Start Point");
    scanf("%d",&from);

    printf("Enter Stop Point");
    scanf("%d",&to);

    printf("\nEven Numbers : \n");

    if(from%2!=0)
    {
        from++;
    }
    if(to%2!=0)
    {
        to++;
    }

    for(i=from;i<=to;i=i+2)
    {
        printf("\t %d",i);
    }
    for(i=to;i<=from;i=i+2)
    {
        printf("\t %d",i);
    }



}
