#include<stdio.h>
void main()
{
    int num,x,fact;
     fact=1;
    printf("ENTER ANY NUMBER: ");
    scanf("%d",&num);
    for(x=num;x>=1;x--)
    {
        fact=fact*x;
    }
}
