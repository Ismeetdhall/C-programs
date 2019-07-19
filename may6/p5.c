#include<stdio.h>
void main()
{
    int num;

    printf("enter the num");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("num is divisible by 2");
    }
    else if(num%9==0)
    {
        printf("num is divisible by 9");
    }
    else if(num%5==0)
    {
        printf("num is divisible by 5");
    }
    else if(num%13==0)
    {
        printf("num is divisible by 13");
    }
    else if(num%17==0)
    {
        printf("num is divisible by 17");
    }
    else if(num%21==0)
    {
        printf("num is divisible by 21");
    }
    else
    {
        printf("num is not divisible");
    }

}
