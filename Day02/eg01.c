#include<stdio.h>

void main()
{
    int sub1,sub2,sub3;
    float total,avg,percent, maxMarks;

    printf("Enter Max Marks");
    scanf("%f",&maxMarks);

    printf("Enter Marks of English");
    scanf("%d",&sub1);
    printf("Enter Marks of Maths");
    scanf("%d",&sub2);
    printf("Enter Marks of Science");
    scanf("%d",&sub3);

    total = sub1 + sub2 + sub3;
    printf("\n Total Marks : %f",total);

    avg = total/3;
    printf("\n Avg : %f",avg);


    percent= total/maxMarks*100;
    printf("\n Percent : %f",percent);

}
