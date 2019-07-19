#include<stdio.h>
void main()
{
    int i,start,stop,skipno;

    printf("enter series start");
    scanf("%d",&start);
    printf("enter series stop");
    scanf("%d",&stop);
    printf("enter series skipno");
    scanf("%d",&skipno);

    i=start;
    while(i<=stop)
    {
        if(i%skipno!=0)
        {
            printf("\t%d",i);

        }
        i++;
    }

}

