#include<stdio.h>

void main()
{
    int marks[3], total = 0,i;

    for(i=0;i<=3;i++)
    {
        printf("Enter Marks of Subject %d : ", i+1);
        scanf("%d",&marks[i]);
        total += marks[i];
    }

    printf("Total marks are %d ",total);

}
