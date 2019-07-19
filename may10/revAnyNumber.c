#include<stdio.h>

void main()
{
    int number , rNumber;
    int temp , i ;

    rNumber = 0;
    printf("\nEnter Number");
    scanf("%d",&number);

    i=number;
    while(i!=0)
    {
        temp =i%10;
        rNumber =  rNumber * 10 + temp;
        i=i/10;
    }


    printf("\n%d = %d",number,rNumber);

}
