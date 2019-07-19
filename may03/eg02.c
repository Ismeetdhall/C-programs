#include<stdio.h>
void main()
{
    int sub1, sub2, sub3 , marks;
    printf("Enter Your sub1");
    scanf("%d",&sub1);
     printf("Enter Your sub2");
    scanf("%d",&sub2);
     printf("Enter Your sub3");
    scanf("%d",&sub3);

    marks = sub1 + sub2 +sub3;

    if(marks>215)
    {
        printf("\nYou passed");
    }
    else
    {
        printf("\nYou faild");
    }

    printf("\nYour Total Marks %d",marks);

}
