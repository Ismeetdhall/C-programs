#include<stdio.h>
void main()
{
    float interest,principle,rate;
    int time;
    printf("enter principle");
    scanf("%f",&principle);

    printf("enter rate");
    scanf("%f",&rate);

    printf("enter time");
    scanf("%d",&time);

    interest = principle*rate*time/100;
    printf("\ninterest;%f",interest);


}




