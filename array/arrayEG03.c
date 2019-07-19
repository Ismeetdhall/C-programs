#include<stdio.h>

void main()
{
    int number[4],i =0;
   int min = 0 , max = 0;
    for(i=0;i<=3;i++)
    {
        printf("Enter No. ");
        scanf("%d",&number[i]);
    }
    min = number[0];
    max = number [0];
    for(i=0;i<=3;i++)
    {
        if(min>number[i])
        {
            min = number[i];
        }
        if(max<number[i])
        {
            max = number[i];
        }
    }

    printf("\nMin : %d \nMax : %d", min , max);

}
