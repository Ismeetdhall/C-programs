#include<stdio.h>
void main()
{
    int temp,a,b;
    printf("enter value in a");
    scanf("%d",&a);

    printf("enter value in b");
    scanf("%d",&b);

    temp = a;
    a = b;
    b = temp;

    printf("a : %d \n b : %d", a,b);


}
