#include<stdio.h>

void main()
{
    int marks[4],i =0;
    marks[3] = 0;
    for(i=0;i<=3;i++)
    {
        printf("Enter Marks of Subject %d : ", i+1);

        scanf("%d",&marks[i]);
        marks[3] = marks[3]+ marks[i];
    }

    printf("Total marks are %d ",marks[3]);

}
