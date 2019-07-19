#include<stdio.h>
void main()
{
    int sub1, sub2, sub3 , marks;
    int sports;
    sports = 0;

    printf("Enter Your sub1");
    scanf("%d",&sub1);
    printf("Enter Your sub2");
    scanf("%d",&sub2);
    printf("Enter Your sub3");
    scanf("%d",&sub3);

    marks = sub1 + sub2 +sub3;

    printf("Enter 1 if you had sports press 0 if not");
    scanf("%d",&sports);

    if(sports == 1)
    {
        printf("\n\nYou will get 20 marks extra\n\n");
        marks += 20; // marks = marks + 20;
        if(marks>=301)
        {
            marks = 300;
        }
    }

    if(marks>110)
    {
        printf("\nYou passed");
    }
    else
    {
        printf("\nYou faild");
    }

    printf("\nYour Total Marks %d",marks);

}
