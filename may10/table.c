#include<stdio.h>
void main()
{
    int num;
    int i;
    printf("Enter Number : ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("\n %d X %d = %d",num,i,i*num);
    }

}
