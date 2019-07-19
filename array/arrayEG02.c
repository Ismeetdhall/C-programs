#include<stdio.h>

void main()
{
    int marks[4],i =0;
   int total = 0;
    for(i=0;i<=3;i++)
    {
        printf("Enter Marks of Subject");

        scanf("%d",&marks[i]);
        total = total+ marks[i];
    }
    marks[3] = total;

    printf("Total marks are %d ", marks[3]);

}
