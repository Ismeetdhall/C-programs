#include<stdio.h>
void main()
{
    int studt1,studt2,studt3,studt4,studt5,min,max;

    printf("\nenter marks of studt1\n");
    scanf("%d",&studt1);
    printf("\nenter marks of studt2\n");
    scanf("%d",&studt2);
    printf("\nenter marks of studt3\n");
    scanf("%d",&studt3);
    printf("\nenter marks of studt4\n");
    scanf("%d",&studt4);
    printf("\nenter marks of studt5\n");
    scanf("%d",&studt5);

    min = studt1;
    max = studt1;

    if(studt2 > max)
    {
        max = studt2;
    }
    if(studt2 < min)
    {
        min = studt2;
    }

    if(studt3 > max)
    {
        max = studt3;
    }
    if(studt3 < min)
    {
        min = studt3;
    }


    if(studt4 > max)
    {
        max = studt4;
    }
    if(studt4 < min)
    {
        min = studt4;
    }


    if(studt5 > max)
    {
        max = studt5;
    }
    if(studt5 < min)
    {
        min = studt5;
    }

    printf("\n\nMax Marks : %d",max);
    printf("\nMin Marks : %d",min);
}
